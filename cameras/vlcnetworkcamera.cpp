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

    auto tmp = QSharedPointer<VlcNetworkCameraView>(new VlcNetworkCameraView());
    mediaPlayer_->setVideoWidget(tmp->vlcNetworkCameraView().data());
    tmp->setMediaPlayer(mediaPlayer_);
    vlcNetworkCameraView_ = tmp;

    vlcNetworkCameraView_->updateName(userDefinedName_);

    connect(this, &AbstractCamera::userDefinedNameChanged, [=] {
        vlcNetworkCameraView_->updateName(userDefinedName_);
    } );

    connect(vlcNetworkCameraView_.data(), &VlcNetworkCameraView::camClicked, this, &VlcNetworkCamera::onOffStream);
    connect(vlcNetworkCameraView_.data(), &VlcNetworkCameraView::pictureReleased, this, &VlcNetworkCamera::takeSnapShot);
    connect(vlcNetworkCameraView_.data(), &VlcNetworkCameraView::toggleRecord, this, &VlcNetworkCamera::startStopRecording);

    connect(mediaPlayer_, &VlcMediaPlayer::error, [=] {
        vlcNetworkCameraView_->updateStreamStatus("Error: " + VlcError::errmsg());
    } );
    connect(mediaPlayer_, &VlcMediaPlayer::snapshotTaken, [=] (const QString &filePath){
        vlcNetworkCameraView_->updateRecordingStatus("Snapshot taken to: " + filePath);
    } );
    connect(mediaPlayer_, &VlcMediaPlayer::stateChanged, this, &VlcNetworkCamera::printCurrentState);
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

QSharedPointer<QWidget> VlcNetworkCamera::cameraGUI()
{
    return vlcNetworkCameraView_;
}

QSharedPointer<QDialog> VlcNetworkCamera::cameraSettings()
{
    qDebug()<<"VlcNetworkCamera::cameraSettings() - Not Implemented!";
    return QSharedPointer<AbstractCameraSettingsDialog>();
}

void VlcNetworkCamera::loadSettings(CameraSettings settings)
{
    Q_UNUSED(settings);
    qDebug()<<"VlcNetworkCamera::loadSettings() - Not Implemented!";
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
    vlcNetworkCameraView_->updateStreamStatus(toPrint);
}

void VlcNetworkCamera::takeSnapShot()
{
    QSettings settings;
    auto imageLocation = QDir(settings.value(IMAGE_LOCATION, QDir::current().absolutePath()).toString());
    mediaPlayer_->video()->takeSnapshot(imageLocation.absolutePath() + "/" + getNewFileName("IMG", imageLocation) + ".png");
}

void VlcNetworkCamera::startStopRecording(bool on)
{
    static QString output;
    mediaPlayer_->stop();
    if(on) {
        QSettings settings;
        auto vidLocation = QDir(settings.value(VIDEO_LOCATION, QDir::current().absolutePath()).toString());
        output = media_->record(getNewFileName("VID", vidLocation), vidLocation.absolutePath(), Vlc::MP4, true);
    } else {

        delete media_;
        media_ = new VlcMedia(cameraAddress_.toString(), false, instance_);
        vlcNetworkCameraView_->updateRecordingStatus("Recorded to: " + output);
        qDebug()<<"Recorded to: " << output;
    }
    runFunctionWhenInState(Vlc::Stopped, &VlcNetworkCamera::startCamera, 1000);
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
