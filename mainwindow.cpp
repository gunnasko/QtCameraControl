#include "mainwindow.h"

#include "camerasettingsdialog.h"

#include <QDebug>
#include <QHBoxLayout>
#include <QAction>

MainWindow::MainWindow(QSharedPointer<DataBase> db, QWidget *parent)
    : QMainWindow(parent), db_(db)
{
    cameras_  = QSharedPointer<Cameras>(new Cameras(db_));
    camerasModel_= QSharedPointer<CameraModel>(new CameraModel(cameras_));

    cameraSelectWidget_ = QSharedPointer<CameraSelectWidget>(new CameraSelectWidget(camerasModel_));
    currentView_ = QSharedPointer<QWidget>(new QWidget(this));
    buildToolbar(cameras_);


    connect(cameraSelectWidget_.data(), &CameraSelectWidget::selectionChanged, this, &MainWindow::changeView);
    connect(cameraSelectWidget_.data(), &CameraSelectWidget::openSettings, this, &MainWindow::openCamSettings);

    cameras_->searchAndAddLocalCameras();

    auto mainWindowWidget = new QWidget(this);
    layout_ = new QHBoxLayout(mainWindowWidget);
    layout_->addWidget(currentView_.data());
    layout_->addWidget(cameraSelectWidget_.data());
    mainWindowWidget->setLayout(layout_);
    setCentralWidget(mainWindowWidget);
}

void MainWindow::openCamSettings(int index)
{
    auto cam = cameras_->getCamera(index);
    if(cam) {
        auto settingsDialog = new CameraSettingsDialog(cam, this);
        settingsDialog->setAttribute( Qt::WA_DeleteOnClose, true);
        settingsDialog->show();
    }
}

void MainWindow::changeView(int index)
{
    qDebug()<<"Changed to index: " << index;
    auto cam = cameras_->getCamera(index);
    if(cam) {
        currentView_->hide();
        layout_->removeWidget(currentView_.data());
        currentView_= cam->cameraGUI();
        layout_->insertWidget(0, currentView_.data());
        currentView_->show();
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

