#ifndef RTSPCAMERA_H
#define RTSPCAMERA_H

#include <QUrl>
#include <QMediaPlayer>

#include "abstractcamera.h"
#include "rtspcameraview.h"

class RtspCamera : public AbstractCamera
{
    Q_OBJECT
public:
    RtspCamera(QUrl cameraAddress, QObject *parent = 0);
    bool available();
    bool isRunning();

    void startCamera();
    void stopCamera();
    QSharedPointer<QWidget> cameraGUI();

private:
    QUrl cameraAddress_;
    QSharedPointer<QMediaPlayer> mediaPlayer_;
    QSharedPointer<RtspCameraView> rtspCameraView_;

};

#endif // RTSPCAMERA_H
