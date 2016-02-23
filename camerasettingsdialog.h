#ifndef CAMERASETTINGSDIALOG_H
#define CAMERASETTINGSDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QComboBox>

#include "abstractcamera.h"

class CameraSettingsDialog : public QDialog
{
    Q_OBJECT
public:
    explicit CameraSettingsDialog(QSharedPointer<AbstractCamera> camera, QWidget *parent = 0);

private slots:
    void save();

private:
    const QStringList resolutionToStrings();
    QSize selectedResolution();
    int currentResolutionIndex();

    QSharedPointer<AbstractCamera> camera_;
    QComboBox *resComboBox_;
    QLineEdit *deviceUserValueLabel_;
    QList<QSize> resolutions_;
};

#endif // CAMERASETTINGSDIALOG_H
