#ifndef ABSTRACTCAMERA_H
#define ABSTRACTCAMERA_H

#include <QObject>
#include <QString>
#include <QVideoWidget>

class AbstractCamera : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString deviceId READ deviceId)
    Q_PROPERTY(QString userDefinedName READ userDefinedName WRITE setUserDefinedName NOTIFY userDefinedNameChanged)

public:

    QString deviceId() const;
    QString userDefinedName() const;

    void setUserDefinedName(QString name);

    virtual bool available() = 0;
    virtual bool isRunning() = 0;

    virtual void startCamera() = 0;
    virtual void stopCamera() = 0;

    virtual void startRecording() = 0;
    virtual void stopRecording() = 0;

    virtual void captureImage() = 0;

    virtual QSharedPointer<QWidget> cameraGUI() = 0;

    bool operator==(const AbstractCamera& other);

signals:
    void dataChanged();
    void userDefinedNameChanged();

protected:
    QString deviceId_;
    QString userDefinedName_;

};

#endif // ABSTRACTCAMERA_H
