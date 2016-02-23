#ifndef ABSTRACTCAMERAVIEW_H
#define ABSTRACTCAMERAVIEW_H

#include <QWidget>
#include <QStackedWidget>
#include <QVBoxLayout>

#include "cameranamelabel.h"
#include "cameracontrolwidget.h"

class AbstractCameraView : public QWidget
{
    Q_OBJECT
public:
    explicit AbstractCameraView(QWidget *parent = 0);

signals:
    void camClicked(bool);
    void camToggled(bool);
    void toggleRecord(bool);
    void picturePressed();
    void pictureReleased();

public slots:
    void updateName(QString);
    void updateMessageLabel(QString msg);
    void changeViewStack(bool enabled);

private:
    CameraNameLabel *camName_;
    CameraControlWidget *camControl_;
    QWidget *placeHolder_;
    QLabel *messageLabel_;
    QSharedPointer<QTimer> messageCleaner_;
    QVBoxLayout *layout_;
    int currentIndex_;

    void initView(QWidget *view);

protected:
    QStackedWidget *viewStack_;

};

#endif // ABSTRACTCAMERAVIEW_H
