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
#ifdef Q_OS_WIN
    emit(recordingStarted(QString("Recording not supported in windows!")));
#else
    QSettings settings;
    auto recordingLocation_ = QUrl(settings.value(VIDEO_LOCATION, QDir::current().absolutePath()).toString());
    videoRecorder_->setOutputLocation(recordingLocation_);
    videoRecorder_->record();
    emit(recordingStarted(recordingLocation_);
#endif
}

void QtCamera::stopRecording()
{
#ifndef Q_OS_WIN
    videoRecorder_->stop();
    emit(recordingSaved(recordingLocation_));
#endif
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

