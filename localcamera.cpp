#include "localcamera.h"

LocalCamera::LocalCamera(const QByteArray &deviceName, QObject *parent)
{
    setParent(parent);
    camera_ = QSharedPointer<QCamera>(new QCamera(deviceName));
    deviceName_ = QString(deviceName);
    init();
}

LocalCamera::LocalCamera(const QCameraInfo &camInfo, QObject *parent)
{
    setParent(parent);
    camera_ = QSharedPointer<QCamera>(new QCamera(camInfo));
    deviceName_ = camInfo.deviceName();
    init();
}

void LocalCamera::init()
{
    videoRecorder_ = QSharedPointer<QMediaRecorder>(new QMediaRecorder(camera_.data()));
    imageCapture_ = QSharedPointer<QCameraImageCapture>(new QCameraImageCapture(camera_.data()));
    auto localCameraGUI = QSharedPointer<LocalCameraGUI>(new LocalCameraGUI());
    localCameraGUI->setCurrentCamera(camera_);
    localCameraGUI_ = localCameraGUI;
    userDefinedName_ = deviceName_;
}

bool LocalCamera::available()
{
    if(camera_->availability() == QMultimedia::Available)
        return true;
    else
        return false;
}

void LocalCamera::startCamera()
{
    camera_->start();
}

void LocalCamera::stopCamera()
{
    camera_->stop();
}

void LocalCamera::startRecording()
{
    camera_->setCaptureMode(QCamera::CaptureVideo);
    videoRecorder_->record();
}

void LocalCamera::stopRecording()
{
    videoRecorder_->stop();
}

void LocalCamera::captureImage()
{
    camera_->setCaptureMode(QCamera::CaptureStillImage);
    camera_->searchAndLock();
    //Add wait timer or a new function
    imageCapture_->capture();
    camera_->unlock();
}

QSharedPointer<AbstractCameraGUI> LocalCamera::getCameraGUI()
{
    return localCameraGUI_;
}
