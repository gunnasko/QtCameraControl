#include "cameras.h"
#include "qtlocalcamera.h"
#include "qtnetworkcamera.h"
#include "vlcnetworkcamera.h"

Cameras::Cameras(QSharedPointer<DataBase> db, QObject *parent) : QObject(parent)
{
    camDb_ = QSharedPointer<CameraRepository>(new CameraRepository(db));
}

Cameras::~Cameras()
{
    for(int i = 0; i < cameras_.count(); i++) {
        deleteCamera(i);
        emit(listChanged());
    }
}

void Cameras::searchAndAddLocalCameras()
{
    clearNotAvailable();
    auto cameras = QCameraInfo::availableCameras();
    foreach (auto cameraInfo, cameras) {
        auto newCam = QSharedPointer<AbstractCamera>(new QtLocalCamera(cameraInfo));
        if(!containsCamera(newCam)) {
            camDb_->updateCamera(newCam);
            addCamera(newCam);
        }
    }
    emit(listChanged());
}

void Cameras::addNetworkCamera(QUrl address)
{
    auto newCam = QSharedPointer<AbstractCamera>(new VlcNetworkCamera(address, this));
    camDb_->updateCamera(newCam);
    addCamera(newCam);
    emit(listChanged());
}

void Cameras::addCamera(const QSharedPointer<AbstractCamera> camera)
{
    cameras_.append(camera);
    camDb_->saveCamera(camera);
    auto dbConnect = connect(camera.data(), &AbstractCamera::dataChanged, [=] {camDb_->saveCamera(camera);});
    dbConnections_.append(dbConnect);
}

void Cameras::clearNotAvailable()
{
    foreach(auto cam, cameras_) {
        if(!cam->available()) {
            deleteCamera(cameras_.indexOf(cam));
        }
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

void Cameras::deleteCamera(int index)
{
    if(index >= 0 && index < cameras_.count()) {
        auto cam = cameras_.takeAt(index);
        cam.clear();
        if(index < dbConnections_.count()) {
            disconnect(dbConnections_.takeAt(index));
        }
        emit(listChanged());
    }
}

bool Cameras::containsCamera(const QSharedPointer<AbstractCamera> camera)
{
    foreach(auto cam, cameras_) {
        if(*cam == *camera)
            return true;
    }
    return false;
}


