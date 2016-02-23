#include "abstractcamera.h"
#include "settingskeys.h"

#include <QDebug>
#include <QSettings>
#include <QUrl>

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

int AbstractCamera::imageResolutionH()
{
    return imageEncodeSettings_.resolution().height();
}

int AbstractCamera::imageResolutionW()
{
    return imageEncodeSettings_.resolution().width();
}

void AbstractCamera::setImageResolution(QSize res)
{
    if(res != imageEncodeSettings_.resolution()) {
        imageEncodeSettings_.setResolution(res);
        emit(imageResolutionChanged());
        emit(dataChanged());
    }
}

void AbstractCamera::setImageResolutionW(int width)
{
    if(width != imageEncodeSettings_.resolution().width()) {
        imageEncodeSettings_.setResolution(width, imageEncodeSettings_.resolution().height());
        emit(imageResolutionChanged());
        emit(dataChanged());
    }
}

QList<QSize> AbstractCamera::supportedResolutions()
{
    return imageCapture_->supportedResolutions();
}

void AbstractCamera::setImageResolutionH(int height)
{
    if(height != imageEncodeSettings_.resolution().height()) {
        imageEncodeSettings_.setResolution(imageEncodeSettings_.resolution().width(), height);
        emit(imageResolutionChanged());
        emit(dataChanged());
    }
}

void AbstractCamera::startRecording()
{
    QSettings settings;
    auto vidLocation = QUrl(settings.value(VIDEO_LOCATION, QDir::current().absolutePath()).toString());
    videoRecorder_->setOutputLocation(vidLocation);
    videoRecorder_->record();
}

void AbstractCamera::stopRecording()
{
    videoRecorder_->stop();
}

void AbstractCamera::captureImage()
{
    QSettings settings;
    imageCapture_->setCaptureDestination(QCameraImageCapture::CaptureToFile);
    auto imageLocation = QDir(settings.value(IMAGE_LOCATION, QDir::current().absolutePath()).toString());
    imageCapture_->capture(getNewFileName("IMG", imageLocation));
}

