#include "abstractcamera.h"
#include <QDebug>
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
        userDefinedName_ = name;
        emit(userDefinedNameChanged());
        emit(dataChanged());
    }
}

bool AbstractCamera::operator==(const AbstractCamera &other)
{
    qDebug()<<deviceName_;
    qDebug()<< "Diff: " << QString::compare(deviceName_, other.deviceName(), Qt::CaseSensitive);
    return (QString::compare(deviceName_, other.deviceName(), Qt::CaseSensitive) == 0);
}
