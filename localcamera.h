#ifndef LOCALCAMERA_H
#define LOCALCAMERA_H

#include <QCameraInfo>
#include <QCamera>
#include <QMediaRecorder>
#include <QCameraImageCapture>
#include <QCameraViewfinder>

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

    void startRecording();
    void stopRecording();

    void captureImage();
    QSharedPointer<QWidget> cameraGUI();

private slots:
    void onOffCamera(bool);

private:
    void init();

    QSharedPointer<QCamera> camera_;
    QSharedPointer<QMediaRecorder> videoRecorder_;
    QSharedPointer<QCameraImageCapture> imageCapture_;

    QSharedPointer<LocalCameraView> localCameraView_;

};

#endif // LOCALCAMERA_H
