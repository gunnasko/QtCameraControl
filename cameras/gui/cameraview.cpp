#include "cameraview.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QStackedWidget>
#include <QDateTime>
#include <QTimer>
#include <QDebug>

CameraView::CameraView(QWidget *parent) :
    QWidget(parent)
{
    layout_ = new QVBoxLayout(this);
    camName_ = new CameraNameLabel(this);
    camControl_ = new CameraControlWidget(this);
    placeHolder_ = new QWidget(this);
    initView(placeHolder_);

    streamStatusLabel_ = new QLabel(this);
    streamStatusLabel_->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    recordingStatusLabel_ = new QLabel(this);
    recordingStatusLabel_->setFrameStyle(QFrame::Panel | QFrame::Sunken);

    streamStatusCleaner_ = QSharedPointer<QTimer>(new QTimer(this));
    streamStatusCleaner_->setSingleShot(true);
    connect(streamStatusCleaner_.data(), &QTimer::timeout, streamStatusLabel_, &QLabel::clear);

    recordingStatusCleaner_ = QSharedPointer<QTimer>(new QTimer(this));
    recordingStatusCleaner_->setSingleShot(true);
    connect(recordingStatusCleaner_.data(), &QTimer::timeout, recordingStatusLabel_, &QLabel::clear);

    viewStack_ = new QStackedWidget(this);
    viewStack_->addWidget(placeHolder_);

    connect(camControl_, &CameraControlWidget::toggleCam, this, &CameraView::toggleCamera);
    connect(camControl_, &CameraControlWidget::toggleRecord, this, &CameraView::toggleRecording);
    connect(camControl_, &CameraControlWidget::picturePressed, this, &CameraView::picturePressed);
    connect(camControl_, &CameraControlWidget::pictureReleased, this, &CameraView::pictureReleased);
    connect(camControl_, &CameraControlWidget::toggleCam, this, &CameraView::changeViewStack);

    layout_->addWidget(camName_);
    layout_->addWidget(viewStack_);
    layout_->addWidget(camControl_);
    layout_->addWidget(streamStatusLabel_);
    layout_->addWidget(recordingStatusLabel_);
    this->setLayout(layout_);
}

CameraView::~CameraView()
{
    if(camera_)
        reset();
}

void CameraView::initCam(QSharedPointer<AbstractCamera> camera)
{
    if(camera_) {
        reset();
    }
    camera_ = camera;
    updateName(camera_->userDefinedName());
    viewStack_->addWidget(camera_->cameraStream());
    connect(camera_.data(), &AbstractCamera::imageSaved, [=] (QString filename){
        updateRecordingStatus(QString("Image saved to: ") + filename);
    } );
    connect(camera_.data(), &AbstractCamera::recordingStarted, [=] (QString filename){
        updateRecordingStatus(QString("Recording started - ") + filename);
    } );
    connect(camera_.data(), &AbstractCamera::recordingSaved, [=] (QString filename){
        updateRecordingStatus(QString("Recording saved to: ") + filename);
    } );

    connect(camera_.data(), &AbstractCamera::statusChanged, this, &CameraView::updateStreamStatus);
    connect(camera_.data(), &AbstractCamera::cameraError, this, &CameraView::updateStreamStatus);
    connect(camera_.data(), &AbstractCamera::recordingError, this, &CameraView::updateStreamStatus);

    connect(camera_.data(), &AbstractCamera::userDefinedNameChanged, [=] {
        updateName(camera_->userDefinedName());
    } );
}

void CameraView::reset()
{
    if(camera_) {
        viewStack_->removeWidget(camera_->cameraStream());
    }
    camera_->stopCamera();
    camControl_->setToggleCam(false);
    camera_.reset();
}


void CameraView::initView(QWidget *view)
{
    QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::black);
    view->setAutoFillBackground(true);
    view->setMinimumSize(400, 400);
    view->setPalette(pal);
    view->show();
}

void CameraView::toggleCamera(bool toggle)
{
    if(camera_) {
        if(toggle)
            camera_->startCamera();
        else
            camera_->stopCamera();
    }
}

void CameraView::toggleRecording(bool toggle)
{
    if(camera_) {
        if(toggle)
            camera_->startRecording();
        else
            camera_->stopRecording();
    }
}

void CameraView::picturePressed()
{
    if(camera_)
        camera_->focusCamera();
}

void CameraView::pictureReleased()
{
    if(camera_)
        camera_->takePicture();
}

void CameraView::updateName(QString name)
{
    camName_->update(name);
}

void CameraView::updateStreamStatus(QString msg)
{
    msg.prepend(QDateTime::currentDateTime().toString("(dd.MM.yyyy-hh:mm:ss) - "));
    streamStatusLabel_->setText(msg);
    streamStatusCleaner_->start(10000);
}

void CameraView::updateRecordingStatus(QString msg)
{
    msg.prepend(QDateTime::currentDateTime().toString("(dd.MM.yyyy-hh:mm:ss) - "));
    recordingStatusLabel_->setText(msg);
    recordingStatusCleaner_->start(10000);
}

void CameraView::changeViewStack(bool enabled)
{
    if(enabled)
        viewStack_->setCurrentIndex(1);
    else
        viewStack_->setCurrentIndex(0);
}
