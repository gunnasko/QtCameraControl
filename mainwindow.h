#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QHBoxLayout>

#include "cameras/cameras.h"
#include "models/cameramodel.h"
#include "widgets/cameraselect/cameraselectwidget.h"
#include "repository/camerarepository.h"
#include "widgets/cameracontrol/cameraview.h"

#include "dialogs/appsettingsdialog.h"

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

    QSharedPointer<Cameras> cameras_;
    QSharedPointer<CameraModel> camerasModel_;
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
