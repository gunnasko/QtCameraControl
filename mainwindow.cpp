#include "mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    cameras_  = QSharedPointer<Cameras>(new Cameras(this));
    camerasModel_= QSharedPointer<CameraModel>(new CameraModel(cameras_));
    cameraSelectWidget_ = QSharedPointer<CameraSelectWidget>(new CameraSelectWidget(camerasModel_));
    cameras_->searchAndAddLocalCameras();
    qDebug()<<cameras_->getCameraNames();

    setCentralWidget(cameraSelectWidget_);
}

MainWindow::~MainWindow()
{

}
