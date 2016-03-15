#ifndef QTCAMERA_H
#define QTCAMERA_H

#include "abstractcamera.h"

#include <QImageEncoderSettings>
#include <QMediaRecorder>
#include <QCameraImageCapture>

class QtCamera : public AbstractCamera
{
    Q_OBJECT
public:
    explicit QtCamera(QObject *parent = 0);

    void startRecording();
    void stopRecording();

    void captureImage();
    QList<QSize> supportedResolutions();

private slots:
    void updateImageResolution();

protected:
    QImageEncoderSettings imageEncodeSettings_;
    QSharedPointer<QMediaRecorder> videoRecorder_;
    QSharedPointer<QCameraImageCapture> imageCapture_;
    QString recordingLocation_;

};

#endif // QTCAMERA_H
