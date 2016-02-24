#include "mainwindow.h"

#include "camerasettingsdialog.h"

#include <QDebug>
#include <QHBoxLayout>
#include <QAction>
#include <QCloseEvent>
#include <QInputDialog>

MainWindow::MainWindow(QSharedPointer<DataBase> db, QWidget *parent)
    : QMainWindow(parent), db_(db)
{
    readSettings();

    cameras_  = QSharedPointer<Cameras>(new Cameras(db_));
    camerasModel_= QSharedPointer<CameraModel>(new CameraModel(cameras_));

    cameraSelectWidget_ = QSharedPointer<CameraSelectWidget>(new CameraSelectWidget(camerasModel_));
    currentView_ = QSharedPointer<QWidget>(new QWidget(this));

    appSettings_ = QSharedPointer<AppSettingsDialog>(new AppSettingsDialog(this));

    buildToolbar();

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
    auto cam = cameras_->getCamera(index);
    if(cam) {
        currentView_->hide();
        layout_->removeWidget(currentView_.data());
        currentView_= cam->cameraGUI();
        layout_->insertWidget(0, currentView_.data());
        currentView_->show();
    }
}

void MainWindow::openAddNetworkCameraDialog()
{
    bool ok;
    auto urlPath = QInputDialog::getText(this, "Add Network Camera", "Camera URL", QLineEdit::Normal, QString("rtsp://"), &ok, Qt::Widget, Qt::ImhUrlCharactersOnly);
    QUrl url(urlPath);
    if(ok && url.isValid()) {
        cameras_->addNetworkCamera(url);
    }
}

void MainWindow::writeSettings()
{
    QSettings settings;
    settings.setValue(MAIN_WINDOW_SIZE, size());
    settings.setValue(MAIN_WINDOW_POS, pos());
}

void MainWindow::readSettings()
{
    QSettings settings;
    resize(settings.value(MAIN_WINDOW_SIZE, QSize(200, 300)).toSize());
    move(settings.value(MAIN_WINDOW_POS, QPoint(0, 0)).toPoint());
}

void MainWindow::buildToolbar()
{
    auto searchCameras = new QAction(QIcon(":/toolbar/images/refresh_original.png"), "Search Local Cameras", this);
    connect(searchCameras, &QAction::triggered, cameras_.data(), &Cameras::searchAndAddLocalCameras);

    auto addNetworkCamera = new QAction(QIcon(":/toolbar/images/addCamera.png"), "Add Network Camera", this);
    connect(addNetworkCamera, &QAction::triggered, this, &MainWindow::openAddNetworkCameraDialog);

    auto openSettings = new QAction(QIcon(":/toolbar/images/settings.png"), "Settings", this);
    connect(openSettings, &QAction::triggered, appSettings_.data(), &AppSettingsDialog::show);

    toolbar_ = addToolBar("Camera Menu");
    toolbar_->addAction(searchCameras);
    toolbar_->addAction(addNetworkCamera);
    toolbar_->addAction(openSettings);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    writeSettings();
    event->accept();
}

MainWindow::~MainWindow()
{

}

