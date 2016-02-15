#ifndef CAMERANAMELABEL_H
#define CAMERANAMELABEL_H

#include <QWidget>

#include <QLabel>
class CameraNameLabel : public QWidget
{
    Q_OBJECT
public:
    explicit CameraNameLabel(QWidget *parent = 0);
    explicit CameraNameLabel(QString currentCam, QWidget *parent = 0);

public:
    void changeCurrentCam(QString name);

private:
    void init();

    QLabel *nameLabel_;
};

#endif // CAMERANAMELABEL_H
