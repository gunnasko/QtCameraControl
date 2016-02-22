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

QString AbstractCamera::getNewFileName(QString filePrefix, QDir dirLocation)
{
    QStringList nameFilter;
    nameFilter << "*.jpg";
    auto files = dirLocation.entryList(nameFilter);
    qDebug()<<files;
    files = files.filter(QRegExp(filePrefix+"\\d*.jpg"));
    qDebug()<<files;
    files.replaceInStrings(QRegExp(filePrefix),"");
    qDebug()<<files;
    files.replaceInStrings(QRegExp(".jpg"),"");
    qDebug()<<files;
    int largestNum = 0;
    foreach(auto file, files) {
        int num = file.toInt();
        if(num > largestNum)
            largestNum = num;
    }
    largestNum++;
    return dirLocation.absolutePath() + "/" + filePrefix + QString::number(largestNum);
}
