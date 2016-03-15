#ifndef CAMERAS_H
#define CAMERAS_H

#include <QObject>
#include <QSharedPointer>

#include "camerarepository.h"
#include "data/abstractcamera.h"

class Cameras : public QObject
{
    Q_OBJECT
public:
    Cameras(QSharedPointer<DataBase> db, QObject *parent = 0);
    ~Cameras();
    QSharedPointer<AbstractCamera> getCamera(QString deviceName);
    QSharedPointer<AbstractCamera> getCamera(int index);
    QList <QSharedPointer<AbstractCamera>> getCameras() const;
    QStringList getCameraNames();
    bool containsCamera(const QSharedPointer<AbstractCamera> camera);
    bool containsCamera(const QString deviceName);
    void deleteCamera(int index);

public slots:
    void searchAndAddLocalCameras();
    void addNetworkCamera(QUrl address);

signals:
    void listChanged();

private:
    void addCamera(const QSharedPointer<AbstractCamera> camera);
    void clearNotAvailable();
    QList <QSharedPointer<AbstractCamera> > cameras_;
    QList <QMetaObject::Connection > dbConnections_;
    QSharedPointer<CameraRepository> camDb_;
};

#endif // CAMERAS_H
