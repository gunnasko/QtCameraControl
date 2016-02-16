#include "localcamera.h"

LocalCamera::LocalCamera(const QByteArray &deviceName, QObject *parent)
{
    setParent(parent);
    deviceName_ = QString(deviceName);

    camera_ = QSharedPointer<QCamera>(new QCamera(deviceName));

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
    auto tmp = QSharedPointer<LocalCameraView>(new LocalCameraView());
    camera_->setViewfinder(tmp->camView().data());
    localCameraView_ = tmp;
    userDefinedName_ = deviceName_;

    connect(localCameraView_.data(), &LocalCameraView::toggleCam, this, &LocalCamera::onOffCamera);
    connect(this, &AbstractCamera::userDefinedNameChanged, [=]{localCameraView_->updateName(userDefinedName());});

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
    return !((camera_->state() == QCamera::UnavailableStatus) | (camera_->state() == QCamera::UnloadedState));
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
