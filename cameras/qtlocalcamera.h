#ifndef LOCALCAMERA_H
#define LOCALCAMERA_H

#include <QCameraInfo>
#include <QCamera>
#include <QCameraViewfinder>
#include <QImageEncoderSettings>
#include <QMediaRecorder>
#include <QCameraImageCapture>
#include "abstractcamera.h"

class QtLocalCamera : public AbstractCamera
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
    void stopRecording();

    void focusCamera();
    void takePicture();
    QWidget *cameraStream();
    void setCameraView(QCameraViewfinder *view);

    QList<QSize> supportedResolutions();

private slots:
    void updateImageResolution();

private:
    void init();
    QString statusToString(QCamera::Status status);


    QImageEncoderSettings imageEncodeSettings_;
    QSharedPointer<QMediaRecorder> videoRecorder_;
    QSharedPointer<QCameraImageCapture> imageCapture_;
    QString recordingLocation_;

    QSharedPointer<QCamera> camera_;
    QList<QMetaObject::Connection> connections_;
    QCameraViewfinder *cameraStream_;

};

#endif // LOCALCAMERA_H
