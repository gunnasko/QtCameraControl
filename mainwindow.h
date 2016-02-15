#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>

#include "cameras.h"
#include "cameramodel.h"
#include "cameraselectwidget.h"
#include "cameraviewwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void openCamSettings(int index);

private:
    void buildToolbar(QSharedPointer<Cameras> cameras);

    QSharedPointer<Cameras> cameras_;
    QSharedPointer<CameraModel> camerasModel_;
    QSharedPointer<CameraSelectWidget> cameraSelectWidget_;
    QSharedPointer<CameraViewWidget> cameraViewWidget_;

    QToolBar *toolbar_;

};

#endif // MAINWINDOW_H
