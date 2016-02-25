#ifndef QTCAMERA_H
#define QTCAMERA_H

#include "abstractcamera.h"

class QtCamera : public AbstractCamera
{
    Q_OBJECT
public:
    explicit QtCamera(QObject *parent = 0);

    void startRecording();
    void stopRecording();

    void captureImage();

protected:
    QImageEncoderSettings imageEncodeSettings_;
    QSharedPointer<QMediaRecorder> videoRecorder_;
    QSharedPointer<QCameraImageCapture> imageCapture_;

};

#endif // QTCAMERA_H
