#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


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

private:
    QSharedPointer<Cameras> cameras_;
    QSharedPointer<CameraModel> camerasModel_;
    QSharedPointer<CameraSelectWidget> cameraSelectWidget_;
    QSharedPointer<CameraViewWidget> cameraViewWidget_;

};

#endif // MAINWINDOW_H
