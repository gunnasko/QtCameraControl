#ifndef CAMERASETTINGSDIALOG_H
#define CAMERASETTINGSDIALOG_H

#include <QDialog>
#include <QLineEdit>

#include "abstractcamera.h"

class CameraSettingsDialog : public QDialog
{
    Q_OBJECT
public:
    explicit CameraSettingsDialog(QSharedPointer<AbstractCamera> camera, QWidget *parent = 0);

private slots:
    void save();

private:
    QSharedPointer<AbstractCamera> camera_;
    QLineEdit *deviceUserValueLabel_;
};

#endif // CAMERASETTINGSDIALOG_H
