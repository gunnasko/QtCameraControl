#include "mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    cameras_ = new Cameras(this);

    cameras_->searchAndAddLocalCameras();
    qDebug()<<cameras_->getCameraNames();
}

MainWindow::~MainWindow()
{

}
