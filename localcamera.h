#ifndef LOCALCAMERA_H
#define LOCALCAMERA_H

#include <QCameraInfo>
#include <QCamera>
#include <QMediaRecorder>
#include <QCameraImageCapture>

#include "abstractcamera.h"

class LocalCamera : public AbstractCamera
{
    Q_OBJECT
public:

    LocalCamera(const QByteArray &deviceName, QObject *parent = 0);
    LocalCamera(const QCameraInfo &camInfo, QObject *parent = 0);

    bool available();

    void startCamera();
    void stopCamera();

    void startRecording();
    void stopRecording();

    void captureImage();
private:
    void init();

    QCamera *camera_;
    QMediaRecorder *videoRecorder_;
    QCameraImageCapture *imageCapture_;



};

#endif // LOCALCAMERA_H
