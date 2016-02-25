#include "localcamera.h"

#include <QDir>
#include <QUrl>
#include <QSettings>
#include "settingskeys.h"

LocalCamera::LocalCamera(const QByteArray &deviceId, QObject *parent) : AbstractCamera(parent)
{
    deviceId_ = QString(deviceId);
    camera_ = QSharedPointer<QCamera>(new QCamera(deviceId));
    init();
}

LocalCamera::LocalCamera(const QCameraInfo &camInfo, QObject *parent) : AbstractCamera(parent)
{
    camera_ = QSharedPointer<QCamera>(new QCamera(camInfo));
    deviceId_ = camInfo.deviceName();
    init();
}

void LocalCamera::init()
{
    videoRecorder_ = QSharedPointer<QMediaRecorder>(new QMediaRecorder(camera_.data()));
    imageCapture_ = QSharedPointer<QCameraImageCapture>(new QCameraImageCapture(camera_.data()));
    imageCapture_->setEncodingSettings(imageEncodeSettings_);

    auto tmp = QSharedPointer<LocalCameraView>(new LocalCameraView());
    camera_->setViewfinder(tmp->camView().data());
    localCameraView_ = tmp;
    userDefinedName_ = deviceId_;

    localCameraView_->updateName(userDefinedName_);
    connect(localCameraView_.data(), &LocalCameraView::camClicked, this, &LocalCamera::onOffCamera);
    connect(localCameraView_.data(), &LocalCameraView::toggleRecord, this, &LocalCamera::startStopRecording);
    connect(localCameraView_.data(), &LocalCameraView::picturePressed, this, &LocalCamera::focusPicture);
    connect(localCameraView_.data(), &LocalCameraView::pictureReleased, this, &LocalCamera::takePicture);

    connect(this, &AbstractCamera::userDefinedNameChanged, [=] {
        localCameraView_->updateName(userDefinedName());
    } );

    connect(this, &AbstractCamera::imageResolutionChanged, [=] {
        imageCapture_->setEncodingSettings(imageEncodeSettings_);
    } );

    connect(camera_.data(), &QCamera::stateChanged, this, &AbstractCamera::dataChanged);
    connect(camera_.data(), &QCamera::stateChanged, [=] {
            emit(localCameraView_->camToggled(isRunning()));
    } );

    connect(camera_.data(), static_cast<void(QCamera::*)(QCamera::Error)>(&QCamera::error), [=] {
        localCameraView_->updateMessageLabel(camera_->errorString());
    } );

    connect(videoRecorder_.data(), static_cast<void(QMediaRecorder::*)(QMediaRecorder::Error)>(&QMediaRecorder::error), [=] {
        localCameraView_->updateMessageLabel(videoRecorder_->errorString());
    } );

    connect(imageCapture_.data(), &QCameraImageCapture::imageSaved,[=](int id, const QString &fileName) {
        Q_UNUSED(id);
        localCameraView_->updateMessageLabel("Saved image in: " + fileName);
    } );

    camera_->load();
}



bool LocalCamera::available()
{
    if(camera_->availability() == QMultimedia::Available)
        return true;
    else
        return false;
}

bool LocalCamera::isRunning()
{
    return (camera_->state() == QCamera::ActiveState);
}

void LocalCamera::startCamera()
{
    camera_->start();
}

void LocalCamera::stopCamera()
{
    camera_->stop();
}

void LocalCamera::imageFocus()
{
    camera_->setCaptureMode(QCamera::CaptureStillImage);
    camera_->searchAndLock();
}

QSharedPointer<QWidget> LocalCamera::cameraGUI()
{
    return localCameraView_;
}

void LocalCamera::onOffCamera(bool on)
{
    if(on)
        startCamera();
    else
        stopCamera();
}

void LocalCamera::startStopRecording(bool on)
{
    if(isRunning() && on) {
        camera_->setCaptureMode(QCamera::CaptureVideo);
        startRecording();
    } else {
        stopRecording();
    }
}

void LocalCamera::focusPicture()
{
    if(isRunning())
        imageFocus();
}

void LocalCamera::takePicture()
{
    if(isRunning()) {
        captureImage();
        camera_->unlock();
    }
}
