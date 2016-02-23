#include "rtspcamera.h"

#include <QDebug>
#include <QSettings>
#include "settingskeys.h"

RtspCamera::RtspCamera(QUrl cameraAddress, QObject *parent) : cameraAddress_(cameraAddress)
{
    setParent(parent);
    deviceId_ = cameraAddress.toString();
    userDefinedName_ = deviceId_;
    mediaPlayer_ = QSharedPointer<QMediaPlayer>(new QMediaPlayer(this));
    imageCapture_ = QSharedPointer<QCameraImageCapture>(new QCameraImageCapture(mediaPlayer_.data()));
    mediaPlayer_->setMedia(cameraAddress_);

    auto tmp = QSharedPointer<RtspCameraView>(new RtspCameraView());
    mediaPlayer_->setVideoOutput(tmp->rtspStreamView().data());
    rtspCameraView_ = tmp;
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
    return rtspCameraView_;
}
