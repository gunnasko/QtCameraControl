#ifndef ABSTRACTCAMERA_H
#define ABSTRACTCAMERA_H

#include <QObject>
#include <QString>
#include <QDir>

#include <QImageEncoderSettings>
#include <QMediaRecorder>
#include <QCameraImageCapture>


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

    QList<QSize> supportedResolutions();

    virtual bool available() = 0;
    virtual bool isRunning() = 0;

    virtual void startCamera() = 0;
    virtual void stopCamera() = 0;
    virtual QSharedPointer<QWidget> cameraGUI() = 0;

    bool operator==(const AbstractCamera& other);
    void copy(const AbstractCamera *other);

    static QString getNewFileName(QString filePrefix, QDir dirLocation);

signals:
    void dataChanged();
    void userDefinedNameChanged();
    void imageResolutionChanged();

protected:
    QString deviceId_;
    QString userDefinedName_;
    QSize imageResolution_;
};

#endif // ABSTRACTCAMERA_H
