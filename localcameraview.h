#ifndef LOCALCAMERAVIEW_H
#define LOCALCAMERAVIEW_H

#include <QWidget>
#include <QCameraViewfinder>
#include <QStackedWidget>
#include <QTimer>

#include "cameranamelabel.h"
#include "cameracontrolwidget.h"

#include "abstractcameraview.h"

class QtLocalCameraView : public AbstractCameraView
{
    Q_OBJECT
public:
    explicit QtLocalCameraView(QWidget *parent = 0);
    QSharedPointer<QCameraViewfinder> camGUI();
private:
    QSharedPointer<QCameraViewfinder> camView_;

};

#endif // LOCALCAMERAVIEW_H
