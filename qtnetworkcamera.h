#ifndef RTSPCAMERA_H
#define RTSPCAMERA_H

#include <QUrl>
#include <QMediaPlayer>

#include "qtcamera.h"
#include "qtnetworkcameraview.h"

class QtNetworkCamera : public QtCamera
{
    Q_OBJECT
public:
    QtNetworkCamera(QUrl cameraAddress, QObject *parent = 0);
    bool available();
    bool isRunning();

    void startCamera();
    void stopCamera();
    QSharedPointer<QWidget> cameraGUI();

private slots:
    void onOffStream(bool);


private:
    QUrl cameraAddress_;
    QSharedPointer<QMediaPlayer> mediaPlayer_;
    QSharedPointer<QtNetworkCameraView> qtNetworkCameraView_;
};

#endif // RTSPCAMERA_H
