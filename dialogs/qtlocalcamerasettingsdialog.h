#ifndef QTLOCALCAMERASETTINGSDIALOG_H
#define QTLOCALCAMERASETTINGSDIALOG_H

#include "abstractcamerasettingsdialog.h"


class QtLocalCameraSettingsDialog : public AbstractCameraSettingsDialog
{
    Q_OBJECT
public:
    explicit QtLocalCameraSettingsDialog(CameraSettings localCamSettings, QWidget *parent = 0);

    void load(CameraSettings settings);
private slots:
    void save();

private:
    const QStringList resolutionToStrings();
    QSize selectedResolution();
    int currentResolutionIndex();

    QList<QSize> resolutions_;
    QComboBox *resComboBox_;
};

#endif // QTLOCALCAMERASETTINGSDIALOG_H
