#include "cameraviewwidget.h"

#include <QVBoxLayout>
#include <QPushButton>
CameraViewWidget::CameraViewWidget(QSharedPointer<Cameras> cameras, QWidget *parent) : QWidget(parent), cameras_(cameras)
{
    currentIndex_ = -1;
    layout_ = new QVBoxLayout(this);
    currentCamName_ = QSharedPointer<CameraNameLabel>(new CameraNameLabel(this));
    currentCamControl_ = QSharedPointer<CameraControlWidget>(new CameraControlWidget(cameras_, this));
    currentCamView_ = QSharedPointer<QVideoWidget>(new QVideoWidget(this));
    initView();

    layout_->addWidget(currentCamName_.data());
    layout_->addWidget(currentCamView_.data());
    layout_->addWidget(currentCamControl_.data());
    this->setLayout(layout_);
}

void CameraViewWidget::change(int index)
{
    if(index == currentIndex_)
        return;

    auto cam = cameras_->getCamera(index);
    if(cam) {
        cleanView();
        cleanName();

        currentIndex_ = index;
        currentCam_ = cam;
        updateName();

        QSharedPointer<QVideoWidget> newGUI = currentCam_->cameraGUI();
        layout_->insertWidget(1, newGUI.data());
        currentCamView_ = newGUI;
        initView();

        currentCamControl_->change(index);
    }
}

void CameraViewWidget::updateName()
{
    currentCamName_->update(currentCam_->userDefinedName());
    connect(currentCam_.data(), &AbstractCamera::dataChanged, this, &CameraViewWidget::updateName);
}

void CameraViewWidget::initView()
{
    QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::black);
    currentCamView_->setAutoFillBackground(true);
    currentCamView_->setMinimumSize(400, 400);
    currentCamView_->setPalette(pal);
    currentCamView_->show();
}

void CameraViewWidget::cleanView()
{
    if(currentCam_) {
        currentCamView_->hide();
        layout_->removeWidget(currentCamView_.data());
    }

}

void CameraViewWidget::cleanName()
{
    if(currentCam_) {
        disconnect(currentCam_.data(), &AbstractCamera::dataChanged, this, &CameraViewWidget::updateName);
    }
}
