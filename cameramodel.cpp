#include "cameramodel.h"

CameraModel::CameraModel(QSharedPointer<Cameras> cameras)
{
    foreach(auto cam, cameras->getCameras()) {
        auto element = QSharedPointer<CameraModelElement>(new CameraModelElement(cam, QModelIndex()));
        appendCamera(element);
        element->index_ = this->index(rowCount()-1, 0, QModelIndex());
        connect(element.data(), &CameraModelElement::changed, this, &CameraModel::refreshModel);
    }
}

void CameraModel::refreshModel()
{
    CameraModelElement* element = reinterpret_cast<CameraModelElement*>(QObject::sender());
    emit dataChanged(element->index_, element->index_);
}

int CameraModel::rowCount(const QModelIndex & parent) const
{
    Q_UNUSED(parent);
    return elements_.count();
}

QVariant CameraModel::data(const QModelIndex & index, int role) const
{
    if (!index.isValid() || index.row() >= elements_.count())
        return QVariant();
    switch(role) {
        case DeviceNameRole:
            return elements_.at(index.row())->camera_->deviceName();
        case UserDefinedNameRole:
            return elements_.at(index.row())->camera_->userDefinedName();
        default:
            return QVariant();
    }
}

bool CameraModel::setData (const QModelIndex & index, const QVariant & value, int role)
{
    if (!index.isValid() || index.row() >= elements_.count())
        return false;
    switch(role) {
        case DeviceNameRole:
            return true;
        case UserDefinedNameRole:
            elements_.at(index.row())->camera_->setUserDefinedName(value.toString());
            return true;
        default:
            return false;
    }
}

QHash<int, QByteArray> CameraModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[DeviceNameRole] = "deviceName";
    roles[UserDefinedNameRole] = "userDefinedName";
    return roles;
}

void CameraModel::appendCamera(QSharedPointer<CameraModelElement> camera)
{
    beginInsertRows(QModelIndex(),rowCount(), rowCount());
    elements_.append(camera);
    endInsertRows();
}
