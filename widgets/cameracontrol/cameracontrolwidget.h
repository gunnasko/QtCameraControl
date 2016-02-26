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
    void toggleRecord(bool);
    void picturePressed();
    void pictureReleased();

public slots:
    void setToggleCam(bool);

private:
    QToolButton *createToolButton(QIcon icon);

    QToolButton *enableCam_;
    QToolButton *startRecord_;
    QToolButton *picture_;


};

#endif // CAMERACONTROLWIDGET_H
