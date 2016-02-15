#include "cameraviewwidget.h"

#include <QVBoxLayout>
#include <QPushButton>
CameraViewWidget::CameraViewWidget(QSharedPointer<Cameras> cameras, QWidget *parent) : QWidget(parent), cameras_(cameras)
{
    currentIndex_ = -1;
    layout_ = new QVBoxLayout(this);
    currentCamName_ = QSharedPointer<CameraNameLabel>(new CameraNameLabel(this));
    layout_->addWidget(currentCamName_.data());
    change(0);
    this->setLayout(layout_);
}

void CameraViewWidget::change(int index)
{
    if(index == currentIndex_)
        return;

    auto cam = cameras_->getCamera(index);
    if(cam)
    {
        cleanOldView();
        currentIndex_ = index;
        currentCam_ = cam;

        update();
        connect(currentCam_.data(), &AbstractCamera::dataChanged, this, &CameraViewWidget::update);

        currentCamView_ = currentCam_->cameraGUI();
        layout_->addWidget(currentCamView_.data());
        currentCamView_->show();
        //currentCam_->startCamera();
    }
}

void CameraViewWidget::update()
{
    currentCamName_->update(currentCam_->userDefinedName());
}

void CameraViewWidget::cleanOldView()
{
    if(currentCam_)
    {
        disconnect(currentCam_.data(), &AbstractCamera::dataChanged, this, &CameraViewWidget::update);
        //currentCam_->stopCamera();
        currentCamView_->hide();
        layout_->removeWidget(currentCamView_.data());
    }

}
