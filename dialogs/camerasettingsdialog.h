#ifndef CAMERASETTINGSDIALOG_H
#define CAMERASETTINGSDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QComboBox>
#include <QVBoxLayout>
#include <QDialogButtonBox>

#include "../cameras/camerasettings.h"

class CameraSettingsDialog : public QDialog
{
    Q_OBJECT
public:
    explicit CameraSettingsDialog(CameraSettings::Settings settings, QWidget *parent = 0);

    virtual void load(CameraSettings::Settings settings);
    CameraSettings::Settings settings();

signals:
    void dialogVisibleChanged(bool);

private slots:
    virtual void save();

private:
    void showEvent(QShowEvent *);
    void hideEvent(QHideEvent *);

    const QStringList resolutionToStrings();
    QSize selectedResolution();
    int currentResolutionIndex();

    QList<QSize> resolutions_;
    QComboBox *resComboBox_;

    QVBoxLayout *layout_;
    CameraSettings::Settings settings_;
    QLineEdit *deviceUserValueLabel_;
    QDialogButtonBox *buttonBox_;

};


#endif // CAMERASETTINGSDIALOG_H
