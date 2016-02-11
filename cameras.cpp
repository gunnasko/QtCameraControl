#include "cameras.h"

Cameras::Cameras(QObject *parent) : QObject(parent)
{

}

void Cameras::searchAndAddLocalCameras()
{
    auto cameras = QCameraInfo::availableCameras();
    foreach (auto cameraInfo, cameras) {
        auto newCam = QSharedPointer<AbstractCamera>(new LocalCamera(cameraInfo));
        if(!cameras_.contains(newCam)) {
            cameras_.append(newCam);
            emit(listChanged());
        }
    }
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


