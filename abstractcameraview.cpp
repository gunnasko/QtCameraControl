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
    messageLabel_ = new QLabel(this);
    messageLabel_->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    messageCleaner_ = QSharedPointer<QTimer>(new QTimer(this));
    messageCleaner_->setSingleShot(true);
    connect(messageCleaner_.data(), &QTimer::timeout, messageLabel_, &QLabel::clear);

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
    layout_->addWidget(messageLabel_);
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

void AbstractCameraView::updateMessageLabel(QString msg)
{
    msg.prepend(QDateTime::currentDateTime().toString("(dd.MM.yyyy-hh:mm:ss) - "));
    messageLabel_->setText(msg);
    messageCleaner_->start(10000);
}

void AbstractCameraView::changeViewStack(bool enabled)
{
    if(enabled)
        viewStack_->setCurrentIndex(1);
    else
        viewStack_->setCurrentIndex(0);
}
