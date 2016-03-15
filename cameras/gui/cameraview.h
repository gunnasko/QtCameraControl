#ifndef ABSTRACTCAMERAVIEW_H
#define ABSTRACTCAMERAVIEW_H

#include <QWidget>
#include <QStackedWidget>
#include <QVBoxLayout>

#include "cameranamelabel.h"
#include "cameracontrolwidget.h"
#include "../data/abstractcamera.h"

class CameraView : public QWidget
{
    Q_OBJECT
public:
    explicit CameraView(QWidget *parent = 0);
    ~CameraView();

    void initCam(QSharedPointer<AbstractCamera> camera);
    void reset();

public slots:
    void updateName(QString);
    void updateStreamStatus(QString msg);
    void updateRecordingStatus(QString msg);
    void changeViewStack(bool enabled);

private slots:
    void toggleCamera(bool toggle);
    void toggleRecording(bool toggle);
    void picturePressed();
    void pictureReleased();

private:
    CameraNameLabel *camName_;
    CameraControlWidget *camControl_;
    QWidget *placeHolder_;

    QLabel *streamStatusLabel_;
    QLabel *recordingStatusLabel_;
    QSharedPointer<QTimer> streamStatusCleaner_;
    QSharedPointer<QTimer> recordingStatusCleaner_;
    QVBoxLayout *layout_;
    int currentIndex_;

    void initView(QWidget *view);
protected:
    QStackedWidget *viewStack_;
    QSharedPointer<AbstractCamera> camera_;
};

#endif // ABSTRACTCAMERAVIEW_H
