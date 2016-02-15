#ifndef CAMERAVIEWWIDGET_H
#define CAMERAVIEWWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include "cameras.h"

#include "cameranamelabel.h"

class CameraViewWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CameraViewWidget(QSharedPointer<Cameras> cameras, QWidget *parent = 0);

public slots:
    void change(int index);
    void update();

private:
    void cleanOldView();

    QSharedPointer<Cameras> cameras_;
    QSharedPointer<QVideoWidget> currentCamView_;
    QSharedPointer<AbstractCamera> currentCam_;
    QSharedPointer<CameraNameLabel> currentCamName_;

    QVBoxLayout *layout_;
    int currentIndex_;


};

#endif // CAMERAVIEWWIDGET_H
