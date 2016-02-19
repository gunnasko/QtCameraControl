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

public:
    MainWindow(QSharedPointer<DataBase> db, QWidget *parent = 0);
    ~MainWindow();

private slots:
    void openCamSettings(int index);
    void changeView(int index);

private:
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
