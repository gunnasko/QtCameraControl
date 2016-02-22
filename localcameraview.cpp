#include "localcameraview.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QStackedWidget>

LocalCameraView::LocalCameraView(QWidget *parent) : QWidget(parent)
{
    layout_ = new QVBoxLayout(this);
    camName_ = new CameraNameLabel(this);
    camView_ = QSharedPointer<QCameraViewfinder>(new QCameraViewfinder());
    camControl_ = new CameraControlWidget(this);
    placeHolder_ = new QWidget(this);
    LocalCameraView::initView(placeHolder_);

    viewStack_ = new QStackedWidget(this);
    viewStack_->addWidget(placeHolder_);
    viewStack_->addWidget(camView_.data());

    connect(camControl_, &CameraControlWidget::toggleCam, this, &LocalCameraView::toggleCam);
    connect(camControl_, &CameraControlWidget::toggleRecord, this, &LocalCameraView::toggleRecord);
    connect(camControl_, &CameraControlWidget::picturePressed, this, &LocalCameraView::picturePressed);
    connect(camControl_, &CameraControlWidget::pictureReleased, this, &LocalCameraView::pictureReleased);

    connect(camControl_, &CameraControlWidget::toggleCam, this, &LocalCameraView::changeViewStack);

    layout_->addWidget(camName_);
    layout_->addWidget(viewStack_);
    layout_->addWidget(camControl_);
    this->setLayout(layout_);
}

QSharedPointer<QCameraViewfinder> LocalCameraView::camView()
{
    return QSharedPointer<QCameraViewfinder>(camView_);
}

void LocalCameraView::initView(QWidget *view)
{
    QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::black);
    view->setAutoFillBackground(true);
    view->setMinimumSize(400, 400);
    view->setPalette(pal);
    view->show();
}

void LocalCameraView::updateName(QString name)
{
    camName_->update(name);
}

void LocalCameraView::changeViewStack(bool enabled)
{
    if(enabled)
        viewStack_->setCurrentIndex(1);
    else
        viewStack_->setCurrentIndex(0);
}
