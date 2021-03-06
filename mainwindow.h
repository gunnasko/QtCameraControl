#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QHBoxLayout>

#include "cameras/camerasmodel.h"
#include "cameras/gui/cameraselectwidget.h"
#include "cameras/camerarepository.h"
#include "cameras/gui/cameraview.h"

#include "appsettingsdialog.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
    void closeEvent(QCloseEvent *event) Q_DECL_OVERRIDE;

public:
    MainWindow(QSharedPointer<DataBase> db, QWidget *parent = 0);
    ~MainWindow();

private slots:
    void openCamSettings(int index);
    void changeView(int index);
    void openAddNetworkCameraDialog();
    void deleteCamera(int index);

private:
    void readSettings();
    void writeSettings();
    void buildToolbar();

    QSharedPointer<CamerasModel> camerasModel_;
    QSharedPointer<CameraSelectWidget> cameraSelectWidget_;
    QSharedPointer<CameraView> cameraView_;
    int currentViewIndex_;
    QSharedPointer<CameraRepository> camerasDb_;
    QSharedPointer<DataBase> db_;
    QSharedPointer<AppSettingsDialog> appSettings_;

    QToolBar *toolbar_;
    QHBoxLayout *layout_;

};

#endif // MAINWINDOW_H
