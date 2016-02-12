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

    connect(cameraSelectWidget_.data(), &CameraSelectWidget::selectionChanged, this, &MainWindow::cameraChange);

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

void MainWindow::cameraChange(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    qDebug()<<"Changing to: " << current.row();
    cameraViewWidget_->changeCameraView(current.row());
}
