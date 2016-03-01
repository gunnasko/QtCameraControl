#include "abstractcameraview.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QStackedWidget>
#include <QDateTime>
#include <QTimer>

AbstractCameraView::AbstractCameraView(QWidget *parent) : QWidget(parent)
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

    connect(camControl_, &CameraControlWidget::toggleCam, this, &AbstractCameraView::camClicked);
    connect(this, &AbstractCameraView::camToggled, camControl_, &CameraControlWidget::setToggleCam);

    connect(camControl_, &CameraControlWidget::toggleRecord, this, &AbstractCameraView::toggleRecord);
    connect(camControl_, &CameraControlWidget::picturePressed, this, &AbstractCameraView::picturePressed);
    connect(camControl_, &CameraControlWidget::pictureReleased, this, &AbstractCameraView::pictureReleased);

    connect(camControl_, &CameraControlWidget::toggleCam, this, &AbstractCameraView::changeViewStack);

    layout_->addWidget(camName_);
    layout_->addWidget(viewStack_);
    layout_->addWidget(camControl_);
    layout_->addWidget(streamStatusLabel_);
    layout_->addWidget(recordingStatusLabel_);
    this->setLayout(layout_);
}


void AbstractCameraView::initView(QWidget *view)
{
    QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::black);
    view->setAutoFillBackground(true);
    view->setMinimumSize(400, 400);
    view->setPalette(pal);
    view->show();
}

void AbstractCameraView::updateName(QString name)
{
    camName_->update(name);
}

void AbstractCameraView::updateStreamStatus(QString msg)
{
    msg.prepend(QDateTime::currentDateTime().toString("(dd.MM.yyyy-hh:mm:ss) - "));
    streamStatusLabel_->setText(msg);
    streamStatusCleaner_->start(10000);
}

void AbstractCameraView::updateRecordingStatus(QString msg)
{
    msg.prepend(QDateTime::currentDateTime().toString("(dd.MM.yyyy-hh:mm:ss) - "));
    recordingStatusLabel_->setText(msg);
    recordingStatusCleaner_->start(10000);
}

void AbstractCameraView::changeViewStack(bool enabled)
{
    if(enabled)
        viewStack_->setCurrentIndex(1);
    else
        viewStack_->setCurrentIndex(0);
}
