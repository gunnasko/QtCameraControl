#ifndef RTSPCAMERA_H
#define RTSPCAMERA_H

#include <QUrl>
#include <QMediaPlayer>

#include "qtcamera.h"

class QtNetworkCamera : public QtCamera
{
    Q_OBJECT
public:
    QtNetworkCamera(QUrl cameraAddress, QObject *parent = 0);
    bool available();
    bool isRunning();

    void startCamera();
    void stopCamera();

private slots:
    void onOffStream(bool);


private:
    QUrl cameraAddress_;
    QSharedPointer<QMediaPlayer> mediaPlayer_;
};

#endif // RTSPCAMERA_H
