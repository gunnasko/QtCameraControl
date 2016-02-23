#ifndef LOCALCAMERA_H
#define LOCALCAMERA_H

#include <QCameraInfo>
#include <QCamera>
#include <QCameraViewfinder>
#include <QImageEncoderSettings>

#include "abstractcamera.h"
#include "localcameraview.h"

class LocalCamera : public AbstractCamera
{
    Q_OBJECT
public:

    LocalCamera(const QByteArray &deviceName, QObject *parent = 0);
    LocalCamera(const QCameraInfo &camInfo, QObject *parent = 0);

    bool available();
    bool isRunning();

    void startCamera();
    void stopCamera();

    void imageFocus();

    QSharedPointer<QWidget> cameraGUI();

private slots:
    void onOffCamera(bool);
    void startStopRecording(bool);
    void focusPicture();
    void takePicture();

private:
    void init();
    QSharedPointer<QCamera> camera_;
    QSharedPointer<LocalCameraView> localCameraView_;

};

#endif // LOCALCAMERA_H
