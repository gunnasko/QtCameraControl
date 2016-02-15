#include "mainwindow.h"

#include "camerasettingsdialog.h"

#include <QDebug>
#include <QHBoxLayout>
#include <QAction>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    cameras_  = QSharedPointer<Cameras>(new Cameras());
    camerasModel_= QSharedPointer<CameraModel>(new CameraModel(cameras_));
    cameraSelectWidget_ = QSharedPointer<CameraSelectWidget>(new CameraSelectWidget(camerasModel_));
    cameras_->searchAndAddLocalCameras();
    buildToolbar(cameras_);
    cameraViewWidget_ = QSharedPointer<CameraViewWidget>(new CameraViewWidget(cameras_));

    connect(cameraSelectWidget_.data(), &CameraSelectWidget::selectionChanged, cameraViewWidget_.data(), &CameraViewWidget::change);
    connect(cameraSelectWidget_.data(), &CameraSelectWidget::openSettings, this, &MainWindow::openCamSettings);

    auto layout = new QHBoxLayout();
    layout->addWidget(cameraViewWidget_.data());
    layout->addWidget(cameraSelectWidget_.data());
    auto mainWindowWidget = new QWidget(this);
    mainWindowWidget->setLayout(layout);
    setCentralWidget(mainWindowWidget);
}

void MainWindow::openCamSettings(int index)
{
    auto cam = cameras_->getCamera(index);
    if(cam)
    {
        auto settingsDialog = new CameraSettingsDialog(cam, this);
        settingsDialog->setAttribute( Qt::WA_DeleteOnClose, true);
        settingsDialog->show();
    }
}

void MainWindow::buildToolbar(QSharedPointer<Cameras> cameras)
{
    toolbar_ = addToolBar("Camera Menu");
    auto searchCameras = new QAction(QIcon(":/toolbar/images/refresh_original.png"), "Search...", this);
    toolbar_->addAction(searchCameras);
    connect(searchCameras, SIGNAL(triggered()), cameras.data(), SLOT(searchAndAddLocalCameras()));
}

MainWindow::~MainWindow()
{

}

