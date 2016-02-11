#ifndef LOCALCAMERA_H
#define LOCALCAMERA_H

#include <QCameraInfo>
#include <QCamera>
#include <QMediaRecorder>
#include <QCameraImageCapture>


#include "abstractcamera.h"

class LocalCamera : AbstractCamera
{
public:
    LocalCamera(const QByteArray &deviceName, QObject *parent = 0);
    LocalCamera(const QCameraInfo &camInfo, QObject *parent = 0);

    QString name() = 0;
    bool available() = 0;

    void startCamera() = 0;
    void stopCamera() = 0;

    void startRecording() = 0;
    void stopRecording() = 0;

    void captureImage() = 0;
private:
    void init();

    QCamera *camera_;
    QByteArray name_;

    QMediaRecorder *videoRecorder_;
    QCameraImageCapture *imageCapture_;



};

#endif // LOCALCAMERA_H
