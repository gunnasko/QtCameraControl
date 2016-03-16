#include "camerasmodel.h"

#include <QCameraInfo>
#include "data/qtlocalcamera.h"
#include "data/vlcnetworkcamera.h"

CamerasModel::CamerasModel(QSharedPointer<DataBase> db, QObject *parent) : QAbstractListModel(parent)
{
    camDb_ = QSharedPointer<CameraRepository>(new CameraRepository(db));
}

CamerasModel::~CamerasModel()
{
    for(int i = 0; i < cameras_.count(); i++) {
        deleteCamera(i);
    }
}

void CamerasModel::searchAndAddLocalCameras()
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
}

void CamerasModel::deleteCamera(int index)
{
    if(index >= 0 && index < cameras_.count()) {
        beginRemoveRows(QModelIndex(),index, index);
        auto cam = cameras_.takeAt(index);
        endRemoveRows();

        cam.clear();
        if(index < dbConnections_.count()) {
            disconnect(dbConnections_.takeAt(index));
        }
    }
}

void CamerasModel::addNetworkCamera(QUrl address)
{
    auto newCam = QSharedPointer<AbstractCamera>(new VlcNetworkCamera(address, this));
    camDb_->updateCamera(newCam);
    addCamera(newCam);
}

void CamerasModel::addCamera(const QSharedPointer<AbstractCamera> camera)
{
    camDb_->saveCamera(camera);
    auto dbConnect = connect(camera.data(), &AbstractCamera::dataChanged, [=] {camDb_->saveCamera(camera);});
    dbConnections_.append(dbConnect);

    auto element = QSharedPointer<CameraModelElement>(new CameraModelElement(camera, QModelIndex()));
    beginInsertRows(QModelIndex(),rowCount(), rowCount());
    cameras_.append(element);
    endInsertRows();

    element->index_ = this->index(rowCount()-1);
    connect(element.data(), &CameraModelElement::changed, this, &CamerasModel::refreshModel);
}

void CamerasModel::clearNotAvailable()
{
    foreach(auto cam, cameras_) {
        if(!cam->camera_->available()) {
            deleteCamera(cameras_.indexOf(cam));
        }
    }

}

QSharedPointer<AbstractCamera> CamerasModel::getCamera(QString deviceName)
{
    foreach(auto cam, cameras_) {
        if(QString::compare(cam->camera_->deviceId(), deviceName) == 0)
            return cam->camera_;
    }
    return QSharedPointer<AbstractCamera>();
}

QSharedPointer<AbstractCamera> CamerasModel::getCamera(int index)
{
    if(cameras_.count() > index && index >= 0)
        return cameras_.at(index)->camera_;
    else
        return QSharedPointer<AbstractCamera>();
}

QList<QSharedPointer<AbstractCamera> > CamerasModel::getCameras() const
{
    QList<QSharedPointer<AbstractCamera>> retList;
    foreach(auto cam, cameras_) {
        retList.append(cam->camera_);
    }
    return retList;
}

QStringList CamerasModel::getCameraNames()
{
    QStringList ret;
    foreach(auto cam, cameras_) {
        ret.append(QString(cam->camera_->deviceId()));
    }
    return ret;
}

bool CamerasModel::containsCamera(const QSharedPointer<AbstractCamera> camera)
{
    foreach(auto cam, cameras_) {
        if(*cam->camera_ == *camera)
            return true;
    }
    return false;
}

bool CamerasModel::containsCamera(const QString deviceName)
{
    foreach(auto cam, cameras_) {
        if(QString::compare(cam->camera_->deviceId(), deviceName) == 0)
            return true;
    }
    return false;
}


void CamerasModel::refreshModel()
{
    CameraModelElement* element = reinterpret_cast<CameraModelElement*>(QObject::sender());
    emit dataChanged(element->index_, element->index_);
}

int CamerasModel::rowCount(const QModelIndex & parent) const
{
    Q_UNUSED(parent);
    return cameras_.count();
}

QVariant CamerasModel::data(const QModelIndex & index, int role) const
{
    if (!index.isValid() || index.row() >= cameras_.count())
        return QVariant();
    switch(role) {
        case Qt::DisplayRole:
            return cameras_.at(index.row())->camera_->userDefinedName();
        case DeviceNameRole:
            return cameras_.at(index.row())->camera_->deviceId();
        case UserDefinedNameRole:
            return cameras_.at(index.row())->camera_->userDefinedName();
        case EnabledRole:
            return cameras_.at(index.row())->camera_->isRunning();
        default:
            return QVariant();
    }
}

QHash<int, QByteArray> CamerasModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[DeviceNameRole] = "camId";
    roles[UserDefinedNameRole] = "camName";
    roles[EnabledRole] = "camEnabled";
    return roles;
}

QString CamerasModel::getCameraId(int index)
{
    if(index < cameras_.count() && index >= 0)
        return cameras_.at(index)->camera_->deviceId();
    else
        return QString();
}

bool CamerasModel::setData (const QModelIndex & index, const QVariant & value, int role)
{
    if (!index.isValid() || index.row() >= cameras_.count())
        return false;
    switch(role) {
        case DeviceNameRole:
            return true;
        case UserDefinedNameRole:
            cameras_.at(index.row())->camera_->setUserDefinedName(value.toString());
            return true;
        case EnabledRole:
            return true;
        default:
            return false;
    }
}

