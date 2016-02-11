#include "abstractcamera.h"


QString AbstractCamera::deviceName() const
{
    return deviceName_;
}

QString AbstractCamera::userDefinedName() const
{
    return userDefinedName_;
}

void AbstractCamera::setUserDefinedName(QString name)
{
    if(name != userDefinedName_) {
        emit(userDefinedNameChanged());
        userDefinedName_ = name;
    }
}

bool AbstractCamera::operator==(const AbstractCamera &other)
{
    return (QString::compare(deviceName_, other.deviceName(), Qt::CaseSensitive) == 0);
}
