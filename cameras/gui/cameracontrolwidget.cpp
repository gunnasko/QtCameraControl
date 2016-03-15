#include "cameracontrolwidget.h"

CameraControlWidget::CameraControlWidget(QWidget *parent) : QWidget(parent)
{
    auto layout = new QHBoxLayout(this);

    auto enableIco = QIcon();
    enableIco.addFile(":/toolbar/images/power_off_540px.png", QSize(), QIcon::Normal, QIcon::Off);
    enableIco.addFile(":/toolbar/images/power_on_540px.png", QSize(), QIcon::Normal, QIcon::On);

    enableCam_ = createToolButton(enableIco);
    enableCam_->setCheckable(true);
    connect(enableCam_, &QToolButton::clicked, this, &CameraControlWidget::toggleCam );
    layout->addWidget(enableCam_);

    auto cameraIco = QIcon(":/toolbar/images/camera.png");
    picture_ = createToolButton(cameraIco);
    connect(picture_, &QToolButton::pressed, this, &CameraControlWidget::picturePressed );
    connect(picture_, &QToolButton::released, this, &CameraControlWidget::pictureReleased );
    layout->addWidget(picture_);

    QIcon recordIcon = QIcon();
    recordIcon.addFile(":/toolbar/images/StartRecord.png", QSize(), QIcon::Normal, QIcon::Off);
    recordIcon.addFile(":/toolbar/images/StopRecord.png", QSize(), QIcon::Normal, QIcon::On);

    startRecord_ = createToolButton(recordIcon);
    startRecord_->setCheckable(true);
    connect(startRecord_, &QToolButton::toggled, this, &CameraControlWidget::toggleRecord );
    layout->addWidget(startRecord_);

    setLayout(layout);
}

void CameraControlWidget::setToggleCam(bool checked)
{
    enableCam_->setChecked(checked);
}

QToolButton *CameraControlWidget::createToolButton(QIcon icon)
{
    QSize minButtonSize(40,40);
    auto button = new QToolButton(this);
    button->setMinimumSize(minButtonSize);
    button->setIcon(icon);
    button->setIconSize(minButtonSize);
    return button;
}

