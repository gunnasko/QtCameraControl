#include "qtnetworkcamera.h"

#include <QDebug>
#include <QSettings>
#include "settingskeys.h"

QtNetworkCamera::QtNetworkCamera(QUrl cameraAddress, QObject *parent) : QtCamera(parent), cameraAddress_(cameraAddress)
{
    deviceId_ = cameraAddress.toString();
    userDefinedName_ = deviceId_;
    mediaPlayer_ = QSharedPointer<QMediaPlayer>(new QMediaPlayer(this));
    imageCapture_ = QSharedPointer<QCameraImageCapture>(new QCameraImageCapture(mediaPlayer_.data()));
    mediaPlayer_->setMedia(cameraAddress_);
}

bool QtNetworkCamera::available()
{
    return (mediaPlayer_->availability() == QMultimedia::Available);
}

bool QtNetworkCamera::isRunning()
{
    return mediaPlayer_->state() == QMediaPlayer::PlayingState;
}

void QtNetworkCamera::startCamera()
{
    mediaPlayer_->play();
}

void QtNetworkCamera::stopCamera()
{
    mediaPlayer_->stop();
}

void QtNetworkCamera::onOffStream(bool on)
{
    if(on && available())
        startCamera();
    else
        stopCamera();
}
