#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QHBoxLayout>

#include "cameras.h"
#include "cameramodel.h"
#include "cameraselectwidget.h"
#include "camerarepository.h"

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

private:
    void readSettings();
    void writeSettings();
    void buildToolbar();

    QSharedPointer<Cameras> cameras_;
    QSharedPointer<CameraModel> camerasModel_;
    QSharedPointer<CameraSelectWidget> cameraSelectWidget_;
    QSharedPointer<QWidget> currentView_;
    QSharedPointer<CameraRepository> camerasDb_;
    QSharedPointer<DataBase> db_;
    QSharedPointer<AppSettingsDialog> appSettings_;

    QToolBar *toolbar_;
    QHBoxLayout *layout_;

};

#endif // MAINWINDOW_H
