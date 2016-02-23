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
    auto files = dirLocation.entryList(QStringList()<<"*.jpg");
    files = files.filter(QRegExp(filePrefix+"\\d*.jpg"));
    files.replaceInStrings(QRegExp(filePrefix),"");
    files.replaceInStrings(QRegExp(".jpg"),"");
    int largestNum = 0;
    foreach(auto file, files) {
        int num = file.toInt();
        if(num > largestNum)
            largestNum = num;
    }
    largestNum++;
    return dirLocation.absolutePath() + "/" + filePrefix + QString::number(largestNum);
}


QSize AbstractCamera::imageResolution()
{
    return imageEncodeSettings_.resolution();
}

void AbstractCamera::setImageResolution(QSize res)
{
    if(res != imageEncodeSettings_.resolution()) {
        imageEncodeSettings_.setResolution(res);
        emit(imageResolutionChanged());
    }
}
