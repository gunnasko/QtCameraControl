#include "vlcnetworkcamera.h"

#include <VLCQtCore/Video.h>
#include <QSettings>
#include "settingskeys.h"
#include <QDebug>

VlcNetworkCamera::VlcNetworkCamera(QUrl cameraAddress, QObject *parent) : AbstractCamera(parent), cameraAddress_(cameraAddress)
{
    deviceId_ = cameraAddress.toString();
    userDefinedName_ = deviceId_;

    instance_ = new VlcInstance(VlcCommon::args(), this);
    mediaPlayer_ = new VlcMediaPlayer(instance_);
    media_ = new VlcMedia(cameraAddress_.toString(), false, instance_);
    cameraStream_ = QSharedPointer<VlcWidgetVideo>(new VlcWidgetVideo(mediaPlayer_));
}

VlcNetworkCamera::~VlcNetworkCamera()
{
    delete mediaPlayer_;
    delete media_;
    delete instance_;
}

bool VlcNetworkCamera::available()
{
    return instance_->status();
}

bool VlcNetworkCamera::isRunning()
{
    return (mediaPlayer_->state() == Vlc::Playing);
}

void VlcNetworkCamera::startCamera()
{
    mediaPlayer_->open(media_);
}

void VlcNetworkCamera::stopCamera()
{
    mediaPlayer_->stop();
}

void VlcNetworkCamera::startRecording()
{
    mediaPlayer_->stop();

    QSettings settings;
    auto vidLocation = QDir(settings.value(VIDEO_LOCATION, QDir::current().absolutePath()).toString());
    media_->record(getNewFileName("VID", vidLocation), vidLocation.absolutePath(), Vlc::MP4, true);

    runFunctionWhenInState(Vlc::Stopped, &VlcNetworkCamera::startCamera, 1000);
}

void VlcNetworkCamera::stopRecording()
{
    mediaPlayer_->stop();
    delete media_;
    media_ = new VlcMedia(cameraAddress_.toString(), false, instance_);
    runFunctionWhenInState(Vlc::Stopped, &VlcNetworkCamera::startCamera, 1000);
}

VlcMediaPlayer *VlcNetworkCamera::mediaPlayer()
{
    return mediaPlayer_;
}

void VlcNetworkCamera::focusCamera()
{
    //Nothing to focus on network stream!
}

void VlcNetworkCamera::takePicture()
{
    QSettings settings;
    auto imageLocation = QDir(settings.value(IMAGE_LOCATION, QDir::current().absolutePath()).toString());
    mediaPlayer_->video()->takeSnapshot(imageLocation.absolutePath() + "/" + getNewFileName("IMG", imageLocation) + ".png");
}

QSharedPointer<QWidget> VlcNetworkCamera::cameraStream()
{
    return cameraStream_;
}

void VlcNetworkCamera::runFunctionWhenInState(Vlc::State state, void (VlcNetworkCamera::*funcptr)(), int timeoutInMs)
{
    QTimer *timer = new QTimer(this);
    QTimer *timeOut = new QTimer(this);
    connect(timer, &QTimer::timeout, [=]() {
        if(checkState(state, timer, (funcptr))) {
            timeOut->stop();
            timeOut->deleteLater();
        }
    } );
    connect(timeOut, &QTimer::timeout, [=]() {
        timeOut->stop();
        timer->stop();
        timeOut->deleteLater();
        timer->deleteLater();
    } );
    timer->start(10);
    timeOut->start(timeoutInMs);
}

bool VlcNetworkCamera::checkState(Vlc::State state, QTimer *timer, void (VlcNetworkCamera::*funcptr)())
{
    if(mediaPlayer_->state()==state)
    {
        timer->stop();
        if(funcptr != NULL) {
            (this->*funcptr)();
        }
        return true;
    } else {
        return false;
    }
}
