#ifndef CAMERAS_H
#define CAMERAS_H

#include <QObject>
#include <QSharedPointer>
#include "abstractcamera.h"
#include "localcamera.h"

class Cameras : QObject
{
    Q_OBJECT
public:
    Cameras(QObject *parent = 0);

    void searchAndAddLocalCameras();
    QSharedPointer<AbstractCamera> getCamera(QByteArray name);
    QStringList getCameraNames();

private:
    QList <QSharedPointer<AbstractCamera> > cameras_;
};

#endif // CAMERAS_H
