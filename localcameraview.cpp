#include "LocalCameraView.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QStackedWidget>

LocalCameraView::LocalCameraView(QWidget *parent) : QWidget(parent)
{
    layout_ = new QVBoxLayout(this);
    camName_ = QSharedPointer<CameraNameLabel>(new CameraNameLabel(this));
    camView_ = QSharedPointer<QCameraViewfinder>(new QCameraViewfinder(this));
    camControl_ = QSharedPointer<CameraControlWidget>(new CameraControlWidget(this));
    placeHolder_ = QSharedPointer<QWidget>(new QWidget(this));
    LocalCameraView::initView(placeHolder_);

    viewStack_ = QSharedPointer<QStackedWidget>(new QStackedWidget(this));
    viewStack_->addWidget(placeHolder_.data());
    viewStack_->addWidget(camView_.data());

    connect(camControl_.data(), &CameraControlWidget::toggleCam, this, &LocalCameraView::toggleCam);
    connect(camControl_.data(), &CameraControlWidget::toggleCam, this, &LocalCameraView::changeViewStack);

    layout_->addWidget(camName_.data());
    layout_->addWidget(viewStack_.data());
    layout_->addWidget(camControl_.data());
    this->setLayout(layout_);
}

QSharedPointer<QCameraViewfinder> LocalCameraView::camView()
{
    return camView_;
}

void LocalCameraView::initView(QSharedPointer<QWidget> view)
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
