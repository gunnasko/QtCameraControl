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

    auto tmp = QSharedPointer<QtNetworkCameraView>(new QtNetworkCameraView());
    mediaPlayer_->setVideoOutput(tmp->camGUI().data());
    qtNetworkCameraView_ = tmp;

    qtNetworkCameraView_->updateName(userDefinedName_);

    connect(this, &AbstractCamera::userDefinedNameChanged, [=] {
        qtNetworkCameraView_->updateName(userDefinedName_);
    } );

    connect(qtNetworkCameraView_.data(), &QtNetworkCameraView::camClicked, this, &QtNetworkCamera::onOffStream);

    connect(mediaPlayer_.data(), static_cast<void(QMediaPlayer::*)(QMediaPlayer::Error)>(&QMediaPlayer::error), [=] {
        qtNetworkCameraView_->updateStreamStatus(mediaPlayer_->errorString());
    } );
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

QSharedPointer<QWidget> QtNetworkCamera::cameraGUI()
{
    return qtNetworkCameraView_;
}

void QtNetworkCamera::onOffStream(bool on)
{
    if(on && available())
        startCamera();
    else
        stopCamera();
}
