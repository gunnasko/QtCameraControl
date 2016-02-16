#ifndef LOCALCAMERAVIEW_H
#define LOCALCAMERAVIEW_H

#include <QWidget>
#include <QCameraViewfinder>

#include "cameranamelabel.h"
#include "cameracontrolwidget.h"

class LocalCameraView : public QWidget
{
    Q_OBJECT
public:
    explicit LocalCameraView(QWidget *parent = 0);
    QSharedPointer<QCameraViewfinder> camView();

signals:
    void toggleCam(bool);

public slots:
    void updateName(QString);

private:
    QSharedPointer<QCameraViewfinder> camView_;
    QSharedPointer<CameraNameLabel> camName_;
    QSharedPointer<CameraControlWidget> camControl_;

    QVBoxLayout *layout_;
    int currentIndex_;

};

#endif // LOCALCAMERAVIEW_H
