#ifndef CAMERACONTROLWIDGET_H
#define CAMERACONTROLWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QToolButton>


class CameraControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CameraControlWidget(QWidget *parent = 0);

signals:
    void toggleCam(bool);

private:
    QHBoxLayout *layout_;
    QToolButton *enableCam_;

};

#endif // CAMERACONTROLWIDGET_H
