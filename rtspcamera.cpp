#include "rtspcamera.h"

#include <QDebug>
#include <QSettings>
#include "settingskeys.h"

RtspCamera::RtspCamera(QUrl cameraAddress, QObject *parent) : cameraAddress_(cameraAddress)
{
    setParent(parent);
    mediaPlayer_ = QSharedPointer<QMediaPlayer>(new QMediaPlayer(this));
    imageCapture_ = QSharedPointer<QCameraImageCapture>(new QCameraImageCapture(mediaPlayer_.data()));
    mediaPlayer_->setMedia(cameraAddress_);
}

bool RtspCamera::available()
{
    return (mediaPlayer_->availability() == QMultimedia::Available);
}

bool RtspCamera::isRunning()
{
    return mediaPlayer_->state() == QMediaPlayer::PlayingState;
}

void RtspCamera::startCamera()
{
    mediaPlayer_->play();
}

void RtspCamera::stopCamera()
{
    mediaPlayer_->stop();
}

QSharedPointer<QWidget> RtspCamera::cameraGUI()
{
    return QSharedPointer<QWidget>();
}
