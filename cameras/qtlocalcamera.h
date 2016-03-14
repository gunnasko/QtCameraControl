#ifndef LOCALCAMERA_H
#define LOCALCAMERA_H

#include <QCameraInfo>
#include <QCamera>
#include <QCameraViewfinder>
#include <QImageEncoderSettings>

#include "qtcamera.h"


class QtLocalCamera : public QtCamera
{
    Q_OBJECT
public:

    QtLocalCamera(const QByteArray &deviceName, QObject *parent = 0);
    QtLocalCamera(const QCameraInfo &camInfo, QObject *parent = 0);
    ~QtLocalCamera();

    bool available();
    bool isRunning();

    void startCamera();
    void stopCamera();
    void startRecording();

    void focusCamera();
    void takePicture();
    QSharedPointer<QWidget> cameraStream();
    void setCameraView(QCameraViewfinder *view);

private:
    void init();
    QString statusToString(QCamera::Status status);
    QSharedPointer<QCamera> camera_;
    QList<QMetaObject::Connection> connections_;

    QSharedPointer<QCameraViewfinder> cameraStream_;


};

#endif // LOCALCAMERA_H
