#include "mainwindow.h"

#include <QDebug>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    cameras_  = QSharedPointer<Cameras>(new Cameras());
    camerasModel_= QSharedPointer<CameraModel>(new CameraModel(cameras_));
    cameraSelectWidget_ = QSharedPointer<CameraSelectWidget>(new CameraSelectWidget(camerasModel_));
    cameras_->searchAndAddLocalCameras();
    qDebug()<<cameras_->getCameraNames();

    cameraViewWidget_ = QSharedPointer<CameraViewWidget>(new CameraViewWidget(cameras_));

    connect(cameraSelectWidget_.data(), &CameraSelectWidget::selectionChanged, cameraViewWidget_.data(), &CameraViewWidget::changeCameraView);

    auto layout = new QHBoxLayout();
    layout->addWidget(cameraViewWidget_.data());
    layout->addWidget(cameraSelectWidget_.data());
    auto mainWindowWidget = new QWidget(this);
    mainWindowWidget->setLayout(layout);
    setCentralWidget(mainWindowWidget);
}

MainWindow::~MainWindow()
{

}

