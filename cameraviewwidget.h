#ifndef CAMERAVIEWWIDGET_H
#define CAMERAVIEWWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include "cameras.h"

class CameraViewWidget : public QWidget
{
    Q_OBJECT
public:
    CameraViewWidget(QSharedPointer<Cameras> cameras, QWidget *parent = 0);

public slots:
    void changeCameraView(int index);

private:
    QSharedPointer<Cameras> cameras_;
    QSharedPointer<QVideoWidget> currentCamView_;
    QSharedPointer<AbstractCamera> currentCam_;

    QVBoxLayout *layout_;


};

#endif // CAMERAVIEWWIDGET_H
