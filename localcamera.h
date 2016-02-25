#ifndef LOCALCAMERA_H
#define LOCALCAMERA_H

#include <QCameraInfo>
#include <QCamera>
#include <QCameraViewfinder>
#include <QImageEncoderSettings>

#include "qtcamera.h"
#include "localcameraview.h"

class QtLocalCamera : public QtCamera
{
    Q_OBJECT
public:

    QtLocalCamera(const QByteArray &deviceName, QObject *parent = 0);
    QtLocalCamera(const QCameraInfo &camInfo, QObject *parent = 0);

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
    QSharedPointer<QtLocalCameraView> qtLocalCameraView_;

};

#endif // LOCALCAMERA_H
