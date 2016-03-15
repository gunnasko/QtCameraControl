#ifndef ABSTRACTCAMERA_H
#define ABSTRACTCAMERA_H

#include <QObject>
#include <QString>
#include <QDir>
#include <QSize>
#include <QDialog>

class AbstractCamera : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString deviceId READ deviceId)
    Q_PROPERTY(QString userDefinedName READ userDefinedName WRITE setUserDefinedName NOTIFY userDefinedNameChanged)
    Q_PROPERTY(int imageResolutionH READ imageResolutionH WRITE setImageResolutionH NOTIFY imageResolutionChanged)
    Q_PROPERTY(int imageResolutionW READ imageResolutionW WRITE setImageResolutionW NOTIFY imageResolutionChanged)

public:
    AbstractCamera(QObject *parent = 0);
    QString deviceId() const;

    QString userDefinedName() const;
    void setUserDefinedName(QString name);

    QSize imageResolution();
    int imageResolutionH();
    int imageResolutionW();

    void setImageResolution(QSize res);
    void setImageResolutionH(int);
    void setImageResolutionW(int);

    virtual QList<QSize> supportedResolutions() = 0;

    virtual bool available() = 0;
    virtual bool isRunning() = 0;

    virtual void startCamera() = 0;
    virtual void stopCamera() = 0;

    virtual void startRecording() = 0;
    virtual void stopRecording() = 0;

    virtual void focusCamera() = 0;
    virtual void takePicture() = 0;

    virtual QWidget *cameraStream() = 0;

    bool operator==(const AbstractCamera& other);
    void copy(const AbstractCamera *other);

    static QString getNewFileName(QString filePrefix, QDir dirLocation);

signals:
    void dataChanged();
    void userDefinedNameChanged();
    void imageResolutionChanged();

    void cameraError(QString);
    void recordingError(QString);
    void imageCaptureError(QString);

    void imageSaved(QString);
    void recordingStarted(QString);
    void recordingSaved(QString);

    void statusChanged(QString);


protected:
    QString deviceId_;
    QString userDefinedName_;
    QSize imageResolution_;
};

#endif // ABSTRACTCAMERA_H
