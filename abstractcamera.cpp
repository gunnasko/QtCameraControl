#include "abstractcamera.h"
#include <QDebug>
AbstractCamera::AbstractCamera()
{

}

QString AbstractCamera::deviceId() const
{
    return deviceId_;
}

QString AbstractCamera::userDefinedName() const
{
    return userDefinedName_;
}

void AbstractCamera::setUserDefinedName(QString name)
{
    if(name != userDefinedName_) {
        userDefinedName_ = name;
        emit(userDefinedNameChanged());
        emit(dataChanged());
    }
}

bool AbstractCamera::operator==(const AbstractCamera &other)
{
    return (QString::compare(deviceId_, other.deviceId(), Qt::CaseSensitive) == 0);
}

void AbstractCamera::copy(const AbstractCamera *other)
{
    if(*this == *other) {
        setUserDefinedName(other->userDefinedName());
    }
}
