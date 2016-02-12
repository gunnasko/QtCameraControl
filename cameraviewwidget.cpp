#include "cameraviewwidget.h"

#include <QVBoxLayout>
CameraViewWidget::CameraViewWidget(QSharedPointer<Cameras> cameras, QWidget *parent) : QWidget(parent), cameras_(cameras)
{
    auto layout = QSharedPointer<QVBoxLayout>(new QVBoxLayout());
    auto cam = cameras_->getCamera(0);
    if(cam)
    {
        currentGUI_ = cam->getCameraGUI();
        layout->addWidget(currentGUI_.data());
        currentGUI_->show();
        cam->startCamera();
    }
    setLayout(layout.data());
}
