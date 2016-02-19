#include "cameracontrolwidget.h"
#include <QtGlobal>

CameraControlWidget::CameraControlWidget(QWidget *parent) : QWidget(parent)
{
    auto layout = new QHBoxLayout(this);

    QIcon enableIco = QIcon();
    enableIco.addFile(":/toolbar/images/power_off_540px.png", QSize(), QIcon::Normal, QIcon::Off);
    enableIco.addFile(":/toolbar/images/power_on_540px.png", QSize(), QIcon::Normal, QIcon::On);

    enableCam_ = new QToolButton(this);
    enableCam_->setIcon(enableIco);
    enableCam_->setCheckable(true);
    connect(enableCam_, &QToolButton::toggled, this, &CameraControlWidget::toggleCam );
    layout->addWidget(enableCam_);

#ifndef Q_OS_WIN
    QIcon recordIcon = QIcon();
    recordIcon.addFile(":/toolbar/images/StartRecord.png", QSize(), QIcon::Normal, QIcon::Off);
    recordIcon.addFile(":/toolbar/images/StopRecord.png", QSize(), QIcon::Normal, QIcon::On);

    startRecord_ = new QToolButton(this);
    startRecord_->setIcon(recordIcon);
    startRecord_->setCheckable(true);
    connect(startRecord_, &QToolButton::toggled, this, &CameraControlWidget::toggleRecord );
    layout->addWidget(startRecord_);
#endif
    setLayout(layout);
}

