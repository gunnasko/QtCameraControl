#ifndef CAMERAVIEWWIDGET_H
#define CAMERAVIEWWIDGET_H

#include <QWidget>
#include "cameras.h"
#include "abstractcameragui.h"

class CameraViewWidget : public QWidget
{
    Q_OBJECT
public:
    CameraViewWidget(QSharedPointer<Cameras> cameras, QWidget *parent = 0);

private:
    QSharedPointer<Cameras> cameras_;
    QSharedPointer<AbstractCameraGUI> currentGUI_;

};

#endif // CAMERAVIEWWIDGET_H
