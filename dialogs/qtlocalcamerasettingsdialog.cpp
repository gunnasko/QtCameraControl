#include "qtlocalcamerasettingsdialog.h"

#include <QGroupBox>
#include <QLabel>

QtLocalCameraSettingsDialog::QtLocalCameraSettingsDialog(CameraSettings settings, QWidget *parent) :
    AbstractCameraSettingsDialog(settings, parent)
{
    load(settings_);
    auto imageCaptureSettings = new QGroupBox("Image Capture Settings:", this);
    auto imageCaptureLayout = new QGridLayout();
    auto resLabel = new QLabel("Resolution:", this);

    resComboBox_ = new QComboBox(this);
    resComboBox_->addItems(resolutionToStrings());
    int index = currentResolutionIndex();
    if(index >= 0 && index < resComboBox_->count())
        resComboBox_->setCurrentIndex(index);

    imageCaptureLayout->addWidget(resLabel, 0, 0);
    imageCaptureLayout->addWidget(resComboBox_, 0, 1);
    imageCaptureSettings->setLayout(imageCaptureLayout);

    layout_->addWidget(imageCaptureSettings);
    layout_->addWidget(buttonBox_);
}

void QtLocalCameraSettingsDialog::load(CameraSettings settings)
{
    settings_ = settings;
    deviceUserValueLabel_->setText(settings_.userDefinedName);
}

void QtLocalCameraSettingsDialog::save()
{
    settings_.userDefinedName = deviceUserValueLabel_->text();
    settings_.selectedResolution = selectedResolution();
    this->accept();
}

const QStringList QtLocalCameraSettingsDialog::resolutionToStrings()
{
    QStringList resStrings;
    foreach(auto res, resolutions_) {
        resStrings << QString::number(res.width()) + QString("x") + QString::number(res.height());
    }
    return resStrings;
}

QSize QtLocalCameraSettingsDialog::selectedResolution()
{
    if (resolutions_.isEmpty())
        return QSize();

    int index = resComboBox_->currentIndex();
    if(index > resolutions_.count())
        return resolutions_.first();

    return resolutions_.at(index);
}

int QtLocalCameraSettingsDialog::currentResolutionIndex()
{
    return 0;
}
