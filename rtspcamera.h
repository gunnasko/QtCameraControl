#ifndef RTSPCAMERA_H
#define RTSPCAMERA_H

#include "abstractcamera.h"

#include <QUrl>
#include <QMediaPlayer>

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
};

#endif // RTSPCAMERA_H
