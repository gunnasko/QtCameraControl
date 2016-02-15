#include "cameracontrolwidget.h"

CameraControlWidget::CameraControlWidget(QSharedPointer<Cameras> cameras, QWidget *parent) : QWidget(parent), cameras_(cameras)
{
    layout_ = new QHBoxLayout(this);
    QIcon ico = QIcon();
    ico.addFile(":/toolbar/images/power_off_540px.png", QSize(), QIcon::Normal, QIcon::Off);
    ico.addFile(":/toolbar/images/power_on_540px.png", QSize(), QIcon::Normal, QIcon::On);

    enableCam_ = new QToolButton(this);
    enableCam_->setIcon(ico);
    enableCam_->setCheckable(true);

    change(0);
    layout_->addWidget(enableCam_);
    setLayout(layout_);
}

void CameraControlWidget::change(int index)
{
    auto cam = cameras_->getCamera(index);
    if(cam)
    {
        currentCam_ = cam;
        enableCam_->setChecked(currentCam_->isRunning());
        connect(enableCam_, &QToolButton::toggled, this, &CameraControlWidget::startStopCam );
    }
}

void CameraControlWidget::startStopCam(bool enabled)
{
    if(!currentCam_)
        return;

    if(enabled)
        currentCam_->startCamera();
    else
        currentCam_->stopCamera();
}
