#include "localcamera.h"

LocalCamera::LocalCamera(const QByteArray &deviceName, QObject *parent)
{
    setParent(parent);
    camera_ = new QCamera(deviceName, this);
    init();
}

LocalCamera::LocalCamera(const QCameraInfo &camInfo, QObject *parent)
{
    setParent(parent);
    camera_ = new QCamera(camInfo, this);
    init();
}

void LocalCamera::init()
{
    videoRecorder_ = new QMediaRecorder(camera_, this);
    imageCapture_ = new QCameraImageCapture(camera_, this);
}


QString LocalCamera::name()
{
    return QString(name_);
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
