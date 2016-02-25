#ifndef VLCNETWORKCAMERA_H
#define VLCNETWORKCAMERA_H

#include <VLCQtCore/Common.h>
#include <VLCQtCore/Instance.h>
#include <VLCQtCore/Media.h>
#include <VLCQtCore/MediaPlayer.h>
#include <VLCQtCore/Error.h>

#include "abstractcamera.h"
#include "vlcnetworkcameraview.h"
class VlcNetworkCamera : public AbstractCamera
{
    Q_OBJECT
public:
    explicit VlcNetworkCamera(QUrl cameraAddress, QObject *parent = 0);
    bool available();
    bool isRunning();

    void startCamera();
    void stopCamera();
    QSharedPointer<QWidget> cameraGUI();

private slots:
    void onOffStream(bool);
    void printCurrentState();
    void takeSnapShot();

private:
    QUrl cameraAddress_;
    QSharedPointer<VlcMediaPlayer> mediaPlayer_;
    QSharedPointer<VlcInstance> instance_;
    QSharedPointer<VlcMedia> media_;
    QSharedPointer<VlcNetworkCameraView> vlcNetworkCameraView_;
};

#endif // VLCNETWORKCAMERA_H
