#include "cameras.h"

Cameras::Cameras(QObject *parent) : QObject(parent)
{

}

void Cameras::searchAndAddLocalCameras()
{
    auto cameras = QCameraInfo::availableCameras();
    foreach (const QCameraInfo &cameraInfo, cameras) {
            cameras_.append(QSharedPointer<AbstractCamera>(new LocalCamera(cameraInfo)));
    }
}

QStringList Cameras::getCameraNames()
{
    QStringList ret;
    foreach(auto cam, cameras_) {
        ret.append(QString(cam->name()));
    }
    return ret;
}


