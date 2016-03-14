#ifndef VLCNETWORKCAMERA_H
#define VLCNETWORKCAMERA_H

#include <VLCQtCore/Common.h>
#include <VLCQtCore/Instance.h>
#include <VLCQtCore/Media.h>
#include <VLCQtCore/MediaPlayer.h>
#include <VLCQtCore/Error.h>

#include <VLCQtWidgets/WidgetVideo.h>

#include "abstractcamera.h"

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

    void startRecording();
    void stopRecording();

    void focusCamera();
    void takePicture();

    QSharedPointer<QWidget> cameraStream();

    VlcMediaPlayer *mediaPlayer();


private:
    QUrl cameraAddress_;
    VlcMediaPlayer *mediaPlayer_;
    VlcInstance *instance_;
    VlcMedia *media_;

    QSharedPointer<VlcWidgetVideo> cameraStream_;

    void runFunctionWhenInState(Vlc::State, void (VlcNetworkCamera::*funcptr)(), int timeoutInMs);
    bool checkState(Vlc::State state, QTimer* timer, void (VlcNetworkCamera::*funcptr)());

};

#endif // VLCNETWORKCAMERA_H
