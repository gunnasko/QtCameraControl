#ifndef CAMERACONTROLWIDGET_H
#define CAMERACONTROLWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QToolButton>

#include "cameras.h"

class CameraControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CameraControlWidget(QSharedPointer<Cameras> cameras, QWidget *parent = 0);

signals:

public slots:
    void change(int index);

private slots:
    void startStopCam(bool enabled);

private:
    QSharedPointer<Cameras> cameras_;
    QSharedPointer<AbstractCamera> currentCam_;

    QHBoxLayout *layout_;
    QToolButton *enableCam_;

};

#endif // CAMERACONTROLWIDGET_H
