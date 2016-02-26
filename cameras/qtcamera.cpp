#include "qtcamera.h"

#include <QSettings>
#include <QUrl>
#include "settingskeys.h"
QtCamera::QtCamera(QObject *parent) : AbstractCamera(parent)
{

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
    imageCapture_->capture(imageLocation.absolutePath() + "/" + getNewFileName("IMG", imageLocation));
}

