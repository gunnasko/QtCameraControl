#include "LocalCameraView.h"

#include <QVBoxLayout>
#include <QPushButton>
LocalCameraView::LocalCameraView(QWidget *parent) : QWidget(parent)
{
    layout_ = new QVBoxLayout(this);
    camName_ = QSharedPointer<CameraNameLabel>(new CameraNameLabel(this));
    camView_ = QSharedPointer<QCameraViewfinder>(new QCameraViewfinder(this));
    camControl_ = QSharedPointer<CameraControlWidget>(new CameraControlWidget(this));

    connect(camControl_.data(), &CameraControlWidget::toggleCam, this, &LocalCameraView::toggleCam);

    layout_->addWidget(camName_.data());
    layout_->addWidget(camView_.data());
    layout_->addWidget(camControl_.data());
    this->setLayout(layout_);
}

QSharedPointer<QCameraViewfinder> LocalCameraView::camView()
{
    return camView_;
}

void LocalCameraView::updateName(QString name)
{
    camName_->update(name);
}
