#ifndef ABSTRACTCAMERA_H
#define ABSTRACTCAMERA_H

#include <QObject>
#include <QString>

class AbstractCamera : public QObject
{
    Q_OBJECT
public:

    QString deviceName() const;
    QString userDefinedName() const;

    void setUserDefinedName(QString name);

    virtual bool available() = 0;

    virtual void startCamera() = 0;
    virtual void stopCamera() = 0;

    virtual void startRecording() = 0;
    virtual void stopRecording() = 0;

    virtual void captureImage() = 0;

    bool operator==(const AbstractCamera& other);

signals:
    void userDefinedNameChanged();

protected:
    QString deviceName_;
    QString userDefinedName_;

};

#endif // ABSTRACTCAMERA_H
