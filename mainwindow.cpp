#include "mainwindow.h"

#include <QDebug>
#include <QHBoxLayout>
#include <QAction>
#include <QCloseEvent>
#include <QInputDialog>

#include "cameras/gui/camerasettingsdialog.h"

MainWindow::MainWindow(QSharedPointer<CamerasModel> cameras, QSharedPointer<DataBase> db, QWidget *parent)
    : QMainWindow(parent), currentViewIndex_(0), db_(db), camerasModel_(cameras)
{
    readSettings();

    cameraSelectWidget_ = QSharedPointer<CameraSelectWidget>(new CameraSelectWidget(camerasModel_));
    cameraView_ = QSharedPointer<CameraView>(new CameraView(this));

    appSettings_ = QSharedPointer<AppSettingsDialog>(new AppSettingsDialog(this));

    buildToolbar();

    connect(cameraSelectWidget_.data(), &CameraSelectWidget::selectionChanged, this, &MainWindow::changeView);
    connect(cameraSelectWidget_.data(), &CameraSelectWidget::openSettings, this, &MainWindow::openCamSettings);
    connect(cameraSelectWidget_.data(), &CameraSelectWidget::deleteCamera, this, &MainWindow::deleteCamera);

    auto mainWindowWidget = new QWidget(this);
    layout_ = new QHBoxLayout(mainWindowWidget);
    layout_->addWidget(cameraView_.data());
    layout_->addWidget(cameraSelectWidget_.data());
    mainWindowWidget->setLayout(layout_);
    setCentralWidget(mainWindowWidget);
}

void MainWindow::openCamSettings(int index)
{
    auto cam = camerasModel_->getCamera(index);
    if(cam) {
        auto  currentSettings = CameraSettings::loadSettings(cam);
        auto camSettings = new CameraSettingsDialog(currentSettings);
        camSettings->show();
        connect(camSettings, &CameraSettingsDialog::accepted, [=] {
            CameraSettings::saveSettings(camSettings->settings(), cam);
        });
        camSettings->setAttribute(Qt::WA_DeleteOnClose);
    }
}

void MainWindow::changeView(int index)
{
    auto cam = camerasModel_->getCamera(index);
    if(cam) {
        cameraView_->initCam(cam);
        currentViewIndex_ = index;
    }
}

void MainWindow::openAddNetworkCameraDialog()
{
    bool ok;
    auto urlPath = QInputDialog::getText(this, "Add Network Camera", "Camera URL", QLineEdit::Normal, QString("rtsp://"), &ok, Qt::Widget, Qt::ImhUrlCharactersOnly);
    QUrl url(urlPath);
    if(ok && url.isValid()) {
        camerasModel_->addNetworkCamera(url);
    }
}

void MainWindow::deleteCamera(int index)
{
    if(currentViewIndex_ == index) {
        cameraView_->reset();
    }
    camerasModel_->deleteCamera(index);
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
    connect(searchCameras, &QAction::triggered, camerasModel_.data(), &CamerasModel::searchAndAddLocalCameras);

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

