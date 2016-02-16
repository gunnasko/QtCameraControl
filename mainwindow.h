#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QHBoxLayout>

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
    void changeView(int index);

private:
    void buildToolbar(QSharedPointer<Cameras> cameras);
    void initView(QSharedPointer<QWidget> view);

    QSharedPointer<Cameras> cameras_;
    QSharedPointer<CameraModel> camerasModel_;
    QSharedPointer<CameraSelectWidget> cameraSelectWidget_;
    QSharedPointer<QWidget> currentView_;
    QToolBar *toolbar_;
    QHBoxLayout *layout_;

};

#endif // MAINWINDOW_H
