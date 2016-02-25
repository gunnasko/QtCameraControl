#include "abstractcamera.h"

#include <QDebug>

AbstractCamera::AbstractCamera(QObject *parent) : QObject(parent)
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
    auto files = dirLocation.entryList(QStringList()<<"*.jpg"<<"*.png");
    files = files.filter(QRegExp(filePrefix+"\\d*(.jpg|.png)"));
    files.replaceInStrings(QRegExp(filePrefix),"");
    files.replaceInStrings(QRegExp("(.jpg|.png)"),"");
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
    return imageResolution_;
}

int AbstractCamera::imageResolutionH()
{
    return imageResolution_.height();
}

int AbstractCamera::imageResolutionW()
{
    return imageResolution_.width();
}

void AbstractCamera::setImageResolution(QSize res)
{
    if(res != imageResolution_) {
        imageResolution_= res;
        emit(imageResolutionChanged());
        emit(dataChanged());
    }
}

void AbstractCamera::setImageResolutionW(int width)
{
    if(width != imageResolution_.width()) {
        imageResolution_.setWidth(width);
        emit(imageResolutionChanged());
        emit(dataChanged());
    }
}

QList<QSize> AbstractCamera::supportedResolutions()
{
    qDebug()<<"Move this function to QtCamera!";
    return QList<QSize>();
}

void AbstractCamera::setImageResolutionH(int height)
{
    if(height != imageResolution_.height()) {
        imageResolution_.setHeight(height);
        emit(imageResolutionChanged());
        emit(dataChanged());
    }
}
