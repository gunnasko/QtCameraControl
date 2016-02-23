#ifndef ABSTRACTCAMERA_H
#define ABSTRACTCAMERA_H

#include <QObject>
#include <QString>
#include <QDir>

#include <QImageEncoderSettings>

class AbstractCamera : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString deviceId READ deviceId)
    Q_PROPERTY(QString userDefinedName READ userDefinedName WRITE setUserDefinedName NOTIFY userDefinedNameChanged)
    Q_PROPERTY(int imageResolutionH READ imageResolutionH WRITE setImageResolutionH NOTIFY imageResolutionChanged)
    Q_PROPERTY(int imageResolutionW READ imageResolutionW WRITE setImageResolutionW NOTIFY imageResolutionChanged)

public:
    AbstractCamera();
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

    virtual void imageFocus() = 0;
    virtual void captureImage() = 0;

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
    QImageEncoderSettings imageEncodeSettings_;
};

#endif // ABSTRACTCAMERA_H
