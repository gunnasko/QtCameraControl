#include "cameraviewwidget.h"

#include <QVBoxLayout>
#include <QPushButton>
CameraViewWidget::CameraViewWidget(QSharedPointer<Cameras> cameras, QWidget *parent) : QWidget(parent), cameras_(cameras)
{
    layout_ = new QVBoxLayout(this);
    changeCameraView(0);
    this->setLayout(layout_);
}

void CameraViewWidget::changeCameraView(int index)
{
    auto cam = cameras_->getCamera(index);
    if(cam)
    {
        cleanOldView();
        currentCam_ = cam;
        currentCamView_ = currentCam_->getCameraGUI();
        layout_->addWidget(currentCamView_.data());
        currentCamView_->show();
        currentCam_->startCamera();
    }
}

void CameraViewWidget::cleanOldView()
{
    if(currentCam_)
    {
        currentCam_->stopCamera();
        layout_->removeWidget(currentCamView_.data());
    }

}
