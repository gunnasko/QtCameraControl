#include "qtlocalcamera.h"

#include <QtGlobal>
#include <QDir>
#include <QSettings>
#include "settingskeys.h"

QtLocalCamera::QtLocalCamera(const QByteArray &deviceId, QObject *parent) : AbstractCamera(parent)
{
    deviceId_ = QString(deviceId);
    camera_ = QSharedPointer<QCamera>(new QCamera(deviceId, this));
    init();
}

QtLocalCamera::QtLocalCamera(const QCameraInfo &camInfo, QObject *parent) : AbstractCamera(parent)
{
    camera_ = QSharedPointer<QCamera>(new QCamera(camInfo, this));
    deviceId_ = camInfo.deviceName();
    init();
}

QtLocalCamera::~QtLocalCamera()
{
    //delete cameraStream_;
    qDebug()<<"Deleted local camera!";
}

void QtLocalCamera::init()
{
    videoRecorder_ = QSharedPointer<QMediaRecorder>(new QMediaRecorder(camera_.data(), this));
    imageCapture_ = QSharedPointer<QCameraImageCapture>(new QCameraImageCapture(camera_.data(), this));
    cameraStream_ = new QCameraViewfinder();

    camera_->setViewfinder(cameraStream_);

    imageCapture_->setEncodingSettings(imageEncodeSettings_);

    userDefinedName_ = deviceId_;

    connect(this, &AbstractCamera::imageResolutionChanged, [=] {
        imageCapture_->setEncodingSettings(imageEncodeSettings_);
    } );

    connect(videoRecorder_.data(), static_cast<void(QMediaRecorder::*)(QMediaRecorder::Error)>(&QMediaRecorder::error), [=] {
        emit(recordingError(videoRecorder_->errorString()));
    } );

    connect(imageCapture_.data(), &QCameraImageCapture::imageSaved,[=](int id, const QString &fileName) {
            Q_UNUSED(id);
            emit(imageSaved(fileName));
        } );


    connect(camera_.data(), &QCamera::stateChanged, this, &AbstractCamera::dataChanged);
    connect(camera_.data(), &QCamera::statusChanged, [=] (QCamera::Status status) {
        emit(statusChanged(statusToString(status)));
    } );

    connect(camera_.data(), static_cast<void(QCamera::*)(QCamera::Error)>(&QCamera::error), [=] {
        emit(cameraError(camera_->errorString()));
    } );

    connect(this, &AbstractCamera::imageResolutionChanged, this, &QtLocalCamera::updateImageResolution);

    camera_->load();
}

QString QtLocalCamera::statusToString(QCamera::Status status)
{
    switch(status) {
    case QCamera::StartingStatus:
        return "Starting...";
    case QCamera::StoppingStatus:
        return "Stopping...";
    case QCamera::StandbyStatus:
        return "Standby...(Power Saving Mode)";
    case QCamera::LoadedStatus:
        return "Loaded!";
    case QCamera::LoadingStatus:
        return "Loading...";
    case QCamera::UnloadingStatus:
        return "Unloading...";
    case QCamera::UnloadedStatus:
        return "Unloaded!";
    case QCamera::ActiveStatus:
        return "Camera Active!";
    case QCamera::UnavailableStatus:
        return "Camera Unavailable!";
    default:
        return "Unknown status!";
    }
}

bool QtLocalCamera::available()
{
    return (camera_->state() == QCamera::ActiveState);
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

void QtLocalCamera::focusCamera()
{
    if(isRunning()) {
        camera_->setCaptureMode(QCamera::CaptureStillImage);
        camera_->searchAndLock();
    }
}

void QtLocalCamera::takePicture()
{
    if(isRunning()) {
        QSettings settings;
        imageCapture_->setCaptureDestination(QCameraImageCapture::CaptureToFile);
        auto imageLocation = QDir(settings.value(IMAGE_LOCATION, QDir::current().absolutePath()).toString());
        imageCapture_->capture(imageLocation.absolutePath() + "/" + getNewFileName("IMG", imageLocation) + ".jpg");
        camera_->unlock();
    }
}

QWidget *QtLocalCamera::cameraStream()
{
    return cameraStream_;
}

void QtLocalCamera::setCameraView(QCameraViewfinder *view)
{
    camera_->setViewfinder(view);
}

void QtLocalCamera::startRecording()
{
#ifdef Q_OS_WIN
    emit(recordingStarted(QString("Recording not supported in windows!")));
#else
    camera_->setCaptureMode(QCamera::CaptureVideo);
    QSettings settings;
    recordingLocation_ = QUrl(settings.value(VIDEO_LOCATION, QDir::current().absolutePath()).toString());
    videoRecorder_->setOutputLocation(recordingLocation_);
    videoRecorder_->record();
    emit(recordingStarted(recordingLocation_.toString()));
#endif
}

void QtLocalCamera::stopRecording()
{
#ifndef Q_OS_WIN
    videoRecorder_->stop();
    emit(recordingSaved(recordingLocation_.toString()));
#endif
}

QList<QSize> QtLocalCamera::supportedResolutions()
{
    return imageCapture_->supportedResolutions();
}

void QtLocalCamera::updateImageResolution()
{
    imageEncodeSettings_.setResolution(imageResolution_);
}

