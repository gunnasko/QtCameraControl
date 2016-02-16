#include "cameras.h"

Cameras::Cameras(QObject *parent) : QObject(parent)
{

}

void Cameras::searchAndAddLocalCameras()
{
    clearNotAvailable();
    auto cameras = QCameraInfo::availableCameras();
    foreach (auto cameraInfo, cameras) {
        auto newCam = QSharedPointer<AbstractCamera>(new LocalCamera(cameraInfo));
        if(!containsCamera(newCam)) {
            cameras_.append(newCam);
        }
    }
    emit(listChanged());
}

void Cameras::clearNotAvailable()
{
    auto camerasInfo = QCameraInfo::availableCameras();
    foreach(auto camInfo, camerasInfo) {
        qDebug()<<camInfo.deviceName();
        if(!containsCamera(camInfo.deviceName()))
            cameras_.removeAll(getCamera(camInfo.deviceName()));
    }

}

QSharedPointer<AbstractCamera> Cameras::getCamera(QString deviceName)
{
    foreach(auto cam, cameras_) {
        if(QString::compare(cam->deviceName(), deviceName) == 0)
            return cam;
    }
    return QSharedPointer<AbstractCamera>();
}

QSharedPointer<AbstractCamera> Cameras::getCamera(int index)
{
    if(cameras_.count() > index)
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
        ret.append(QString(cam->deviceName()));
    }
    return ret;
}
bool Cameras::containsCamera(const QString deviceName)
{
    foreach(auto cam, cameras_) {
        if(QString::compare(cam->deviceName(), deviceName) == 0)
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


