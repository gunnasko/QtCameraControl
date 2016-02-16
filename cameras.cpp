#include "cameras.h"

Cameras::Cameras(QObject *parent) : QObject(parent)
{

}

void Cameras::searchAndAddLocalCameras()
{
    clearNotRunning();
    auto cameras = QCameraInfo::availableCameras();
    foreach (auto cameraInfo, cameras) {
        auto newCam = QSharedPointer<AbstractCamera>(new LocalCamera(cameraInfo));
        if(!containsCamera(newCam)) {
            cameras_.append(newCam);
        }
    }
    emit(listChanged());
}

void Cameras::clearNotRunning()
{
    foreach(auto cam, cameras_) {
        if(!cam->isRunning())
            cameras_.removeAll(cam);
    }

}

QSharedPointer<AbstractCamera> Cameras::getCamera(QString deviceName)
{
    foreach(auto cam, cameras_) {
        if(QString::compare(cam->deviceId(), deviceName) == 0)
            return cam;
    }
    return QSharedPointer<AbstractCamera>();
}

QSharedPointer<AbstractCamera> Cameras::getCamera(int index)
{
    if(cameras_.count() > index && index >= 0)
        return cameras_.at(index);
    else
        return QSharedPointer<AbstractCamera>();
}

QList<QSharedPointer<AbstractCamera> > Cameras::getCameras() const
{
    return cameras_;
}

QStringList Cameras::getCameraNames()
{
    QStringList ret;
    foreach(auto cam, cameras_) {
        ret.append(QString(cam->deviceId()));
    }
    return ret;
}

bool Cameras::containsCamera(const QString deviceName)
{
    foreach(auto cam, cameras_) {
        if(QString::compare(cam->deviceId(), deviceName) == 0)
            return true;
    }
    return false;

}

bool Cameras::containsCamera(const QSharedPointer<AbstractCamera> camera)
{
    foreach(auto cam, cameras_) {
        if(*cam == *camera)
            return true;
    }
    return false;
}


