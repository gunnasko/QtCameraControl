#include "vlcnetworkcamera.h"

#include <VLCQtCore/Video.h>
#include <QSettings>
#include "settingskeys.h"

VlcNetworkCamera::VlcNetworkCamera(QUrl cameraAddress, QObject *parent) : AbstractCamera(parent), cameraAddress_(cameraAddress)
{
    deviceId_ = cameraAddress.toString();
    userDefinedName_ = deviceId_;

    instance_ = QSharedPointer<VlcInstance>(new VlcInstance(VlcCommon::args(), this));
    mediaPlayer_ = QSharedPointer<VlcMediaPlayer>(new VlcMediaPlayer(instance_.data()));
    media_ = QSharedPointer<VlcMedia>(new VlcMedia(cameraAddress_.toString(), false, instance_.data()));

    auto tmp = QSharedPointer<VlcNetworkCameraView>(new VlcNetworkCameraView());
    mediaPlayer_->setVideoWidget(tmp->vlcNetworkCameraView().data());
    tmp->setMediaPlayer(mediaPlayer_.data());
    vlcNetworkCameraView_ = tmp;

    vlcNetworkCameraView_->updateName(userDefinedName_);

    connect(this, &AbstractCamera::userDefinedNameChanged, [=] {
        vlcNetworkCameraView_->updateName(userDefinedName_);
    } );

    connect(vlcNetworkCameraView_.data(), &VlcNetworkCameraView::camClicked, this, &VlcNetworkCamera::onOffStream);
    connect(vlcNetworkCameraView_.data(), &VlcNetworkCameraView::pictureReleased, this, &VlcNetworkCamera::takeSnapShot);

    connect(mediaPlayer_.data(), &VlcMediaPlayer::error, [=] {
        vlcNetworkCameraView_->updateMessageLabel("Error: " + VlcError::errmsg());
    } );
    connect(mediaPlayer_.data(), &VlcMediaPlayer::snapshotTaken, [=] (const QString &filePath){
        vlcNetworkCameraView_->updateMessageLabel("Snapshot taken to: " + filePath);
    } );


    connect(mediaPlayer_.data(), &VlcMediaPlayer::stateChanged, this, &VlcNetworkCamera::printCurrentState);
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
    mediaPlayer_->open(media_.data());
}

void VlcNetworkCamera::stopCamera()
{
    mediaPlayer_->stop();
}

QSharedPointer<QWidget> VlcNetworkCamera::cameraGUI()
{
    return vlcNetworkCameraView_;
}

void VlcNetworkCamera::onOffStream(bool on)
{
    if(on && available())
        startCamera();
    else
        stopCamera();
}

void VlcNetworkCamera::printCurrentState()
{
    Vlc::State currentState = mediaPlayer_->state();
    QString toPrint;
    switch(currentState) {
    case Vlc::Idle:
        toPrint = "Idle...";
        break;
    case Vlc::Opening:
        toPrint = "Opening...";
        break;
    case Vlc::Buffering:
        toPrint = "Buffering...";
        break;
    case Vlc::Playing:
        toPrint = "Playing...";
        break;
    case Vlc::Paused:
        toPrint = "Paused...";
        break;
    case Vlc::Stopped:
        toPrint = "Stopped...";
        break;
    case Vlc::Ended:
        toPrint = "Ended...";
        break;
    case Vlc::Error:
        toPrint = "Error!";
        break;
    default:
        toPrint = "Wrong state!";
    }
    vlcNetworkCameraView_->updateMessageLabel(toPrint);
}

void VlcNetworkCamera::takeSnapShot()
{
    QSettings settings;
    auto imageLocation = QDir(settings.value(IMAGE_LOCATION, QDir::current().absolutePath()).toString());
    mediaPlayer_->video()->takeSnapshot(getNewFileName("IMG", imageLocation) + ".png");
}
