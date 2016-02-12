#ifndef LOCALCAMERA_H
#define LOCALCAMERA_H

#include <QCameraInfo>
#include <QCamera>
#include <QMediaRecorder>
#include <QCameraImageCapture>

#include "localcameragui.h"
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
    QSharedPointer<AbstractCameraGUI> getCameraGUI();

private:
    void init();

    QSharedPointer<QCamera> camera_;
    QSharedPointer<QMediaRecorder> videoRecorder_;
    QSharedPointer<QCameraImageCapture> imageCapture_;

    QSharedPointer<AbstractCameraGUI> localCameraGUI_;



};

#endif // LOCALCAMERA_H
