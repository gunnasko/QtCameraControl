#ifndef CAMERASETTINGSDIALOG_H
#define CAMERASETTINGSDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QComboBox>
#include <QVBoxLayout>
#include <QDialogButtonBox>

struct CameraSettings
{
    QString userDefinedName;
    QString deviceId;
    QList<QSize> resolutions;
    QSize selectedResolution;
};

class AbstractCameraSettingsDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AbstractCameraSettingsDialog(CameraSettings settings, QWidget *parent = 0);

    virtual void load(CameraSettings settings) = 0;
    CameraSettings settings();
private slots:
    virtual void save() = 0;

private:
protected:
    QVBoxLayout *layout_;
    CameraSettings settings_;
    QLineEdit *deviceUserValueLabel_;
    QDialogButtonBox *buttonBox_;

};

#endif // CAMERASETTINGSDIALOG_H
