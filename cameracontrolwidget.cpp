#include "cameracontrolwidget.h"

CameraControlWidget::CameraControlWidget(QWidget *parent) : QWidget(parent)
{
    layout_ = new QHBoxLayout(this);
    QIcon ico = QIcon();
    ico.addFile(":/toolbar/images/power_off_540px.png", QSize(), QIcon::Normal, QIcon::Off);
    ico.addFile(":/toolbar/images/power_on_540px.png", QSize(), QIcon::Normal, QIcon::On);

    enableCam_ = new QToolButton(this);
    enableCam_->setIcon(ico);
    enableCam_->setCheckable(true);

    connect(enableCam_, &QToolButton::toggled, this, &CameraControlWidget::toggleCam );

    layout_->addWidget(enableCam_);
    setLayout(layout_);
}

