#include "localcamera.h"

#include <QDir>
#include <QUrl>
#include <QSettings>
#include "settingskeys.h"

QtLocalCamera::QtLocalCamera(const QByteArray &deviceId, QObject *parent) : QtCamera(parent)
{
    deviceId_ = QString(deviceId);
    camera_ = QSharedPointer<QCamera>(new QCamera(deviceId));
    init();
}

QtLocalCamera::QtLocalCamera(const QCameraInfo &camInfo, QObject *parent) : QtCamera(parent)
{
    camera_ = QSharedPointer<QCamera>(new QCamera(camInfo));
    deviceId_ = camInfo.deviceName();
    init();
}

void QtLocalCamera::init()
{
    videoRecorder_ = QSharedPointer<QMediaRecorder>(new QMediaRecorder(camera_.data(), this));
    imageCapture_ = QSharedPointer<QCameraImageCapture>(new QCameraImageCapture(camera_.data(), this));
    imageCapture_->setEncodingSettings(imageEncodeSettings_);

    auto tmp = QSharedPointer<QtLocalCameraView>(new QtLocalCameraView());
    camera_->setViewfinder(tmp->camGUI().data());
    qtLocalCameraView_ = tmp;
    userDefinedName_ = deviceId_;

    qtLocalCameraView_->updateName(userDefinedName_);
    connect(qtLocalCameraView_.data(), &QtLocalCameraView::camClicked, this, &QtLocalCamera::onOffCamera);
    connect(qtLocalCameraView_.data(), &QtLocalCameraView::toggleRecord, this, &QtLocalCamera::startStopRecording);
    connect(qtLocalCameraView_.data(), &QtLocalCameraView::picturePressed, this, &QtLocalCamera::focusPicture);
    connect(qtLocalCameraView_.data(), &QtLocalCameraView::pictureReleased, this, &QtLocalCamera::takePicture);

    connect(this, &AbstractCamera::userDefinedNameChanged, [=] {
        qtLocalCameraView_->updateName(userDefinedName());
    } );

    connect(this, &AbstractCamera::imageResolutionChanged, [=] {
        imageCapture_->setEncodingSettings(imageEncodeSettings_);
    } );

    connect(camera_.data(), &QCamera::stateChanged, this, &AbstractCamera::dataChanged);
    connect(camera_.data(), &QCamera::stateChanged, [=] {
            emit(qtLocalCameraView_->camToggled(isRunning()));
    } );

    connect(camera_.data(), static_cast<void(QCamera::*)(QCamera::Error)>(&QCamera::error), [=] {
        qtLocalCameraView_->updateMessageLabel(camera_->errorString());
    } );

    connect(videoRecorder_.data(), static_cast<void(QMediaRecorder::*)(QMediaRecorder::Error)>(&QMediaRecorder::error), [=] {
        qtLocalCameraView_->updateMessageLabel(videoRecorder_->errorString());
    } );

    connect(imageCapture_.data(), &QCameraImageCapture::imageSaved,[=](int id, const QString &fileName) {
        Q_UNUSED(id);
        qtLocalCameraView_->updateMessageLabel("Saved image in: " + fileName);
    } );

    camera_->load();
}



bool QtLocalCamera::available()
{
    if(camera_->availability() == QMultimedia::Available)
        return true;
    else
        return false;
}

bool QtLocalCamera::isRunning()
{
    return (camera_->state() == QCamera::ActiveState);
}

void QtLocalCamera::startCamera()
{
    camera_->start();
}

void QtLocalCamera::stopCamera()
{
    camera_->stop();
}

void QtLocalCamera::imageFocus()
{
    camera_->setCaptureMode(QCamera::CaptureStillImage);
    camera_->searchAndLock();
}

QSharedPointer<QWidget> QtLocalCamera::cameraGUI()
{
    return qtLocalCameraView_;
}

void QtLocalCamera::onOffCamera(bool on)
{
    if(on)
        startCamera();
    else
        stopCamera();
}

void QtLocalCamera::startStopRecording(bool on)
{
    if(isRunning() && on) {
        camera_->setCaptureMode(QCamera::CaptureVideo);
        startRecording();
    } else {
        stopRecording();
    }
}

void QtLocalCamera::focusPicture()
{
    if(isRunning())
        imageFocus();
}

void QtLocalCamera::takePicture()
{
    if(isRunning()) {
        captureImage();
        camera_->unlock();
    }
}
