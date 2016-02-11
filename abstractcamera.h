#ifndef ABSTRACTCAMERA_H
#define ABSTRACTCAMERA_H

#include <QObject>
#include <QString>

class AbstractCamera : QObject
{
    Q_OBJECT
public:
    virtual QString name() = 0;
    virtual bool available() = 0;

    virtual void startCamera() = 0;
    virtual void stopCamera() = 0;

    virtual void startRecording() = 0;
    virtual void stopRecording() = 0;

    virtual void captureImage() = 0;
};

#endif // ABSTRACTCAMERA_H
