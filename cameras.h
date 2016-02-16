#ifndef CAMERAS_H
#define CAMERAS_H

#include <QObject>
#include <QSharedPointer>
#include "abstractcamera.h"
#include "localcamera.h"

class Cameras : public QObject
{
    Q_OBJECT
public:
    Cameras(QObject *parent = 0);

    QSharedPointer<AbstractCamera> getCamera(QString deviceName);
    QSharedPointer<AbstractCamera> getCamera(int index);
    QList <QSharedPointer<AbstractCamera>> getCameras() const;
    QStringList getCameraNames();
    bool containsCamera(const QSharedPointer<AbstractCamera> camera);
    bool containsCamera(const QString deviceName);

public slots:
    void searchAndAddLocalCameras();

signals:
    void listChanged();

private:
    void clearNotRunning();
    QList <QSharedPointer<AbstractCamera> > cameras_;
};

#endif // CAMERAS_H
