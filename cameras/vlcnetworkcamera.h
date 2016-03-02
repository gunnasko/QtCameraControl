#ifndef VLCNETWORKCAMERA_H
#define VLCNETWORKCAMERA_H

#include <VLCQtCore/Common.h>
#include <VLCQtCore/Instance.h>
#include <VLCQtCore/Media.h>
#include <VLCQtCore/MediaPlayer.h>
#include <VLCQtCore/Error.h>

#include "abstractcamera.h"
#include "widgets/cameracontrol/vlcnetworkcameraview.h"

class VlcNetworkCamera : public AbstractCamera
{
    Q_OBJECT
public:
    explicit VlcNetworkCamera(QUrl cameraAddress, QObject *parent = 0);
    ~VlcNetworkCamera();
    bool available();
    bool isRunning();

    void startCamera();
    void stopCamera();
    QSharedPointer<QWidget> cameraGUI();
    QSharedPointer<QDialog> cameraSettings();
    virtual void loadSettings(CameraSettings settings);

private slots:
    void onOffStream(bool);
    void printCurrentState();
    void takeSnapShot();
    void startStopRecording(bool);

private:
    QUrl cameraAddress_;
    VlcMediaPlayer *mediaPlayer_;
    VlcInstance *instance_;
    VlcMedia *media_;

    void runFunctionWhenInState(Vlc::State, void (VlcNetworkCamera::*funcptr)(), int timeoutInMs);
    bool checkState(Vlc::State state, QTimer* timer, void (VlcNetworkCamera::*funcptr)());

    QSharedPointer<VlcNetworkCameraView> vlcNetworkCameraView_;
};

#endif // VLCNETWORKCAMERA_H
