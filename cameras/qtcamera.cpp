#include "qtcamera.h"

#include <QSettings>
#include <QUrl>
#include "settingskeys.h"
#include <qDebug>
QtCamera::QtCamera(QObject *parent) : AbstractCamera(parent)
{
    connect(this, &AbstractCamera::imageResolutionChanged, this, &QtCamera::updateImageResolution);
}

void QtCamera::startRecording()
{
    QSettings settings;
    auto vidLocation = QUrl(settings.value(VIDEO_LOCATION, QDir::current().absolutePath()).toString());
    videoRecorder_->setOutputLocation(vidLocation);
    videoRecorder_->record();
}

void QtCamera::stopRecording()
{
    videoRecorder_->stop();
}

void QtCamera::captureImage()
{
    QSettings settings;
    imageCapture_->setCaptureDestination(QCameraImageCapture::CaptureToFile);
    auto imageLocation = QDir(settings.value(IMAGE_LOCATION, QDir::current().absolutePath()).toString());
    imageCapture_->capture(imageLocation.absolutePath() + "/" + getNewFileName("IMG", imageLocation) + ".jpg");
}

QList<QSize> QtCamera::supportedResolutions()
{
    return imageCapture_->supportedResolutions();
}

void QtCamera::updateImageResolution()
{
    imageEncodeSettings_.setResolution(imageResolution_);
}

