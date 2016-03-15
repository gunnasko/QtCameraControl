#include "camerasettingsdialog.h"

#include <QLabel>
#include <QDebug>
#include <QGroupBox>

CameraSettingsDialog::CameraSettingsDialog(CameraSettings::Settings settings, QWidget *parent) : QDialog(parent), settings_(settings)
{
    auto deviceNameLabel = new QLabel("Device ID:", this);
    auto deviceNameValueLabel = new QLabel(settings_.deviceId, this);
    deviceNameValueLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);

    auto deviceUserLabel = new QLabel("Camera Name:", this);
    deviceUserValueLabel_ = new QLineEdit(settings_.userDefinedName, this);

    buttonBox_ = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
    connect(buttonBox_, SIGNAL(accepted()), this, SLOT(save()));
    connect(buttonBox_, SIGNAL(rejected()), this, SLOT(reject()));

    auto imageCaptureSettings = new QGroupBox("Image Capture Settings:", this);
    auto imageCaptureLayout = new QGridLayout();
    auto resLabel = new QLabel("Resolution:", this);

    resComboBox_ = new QComboBox(this);
    imageCaptureLayout->addWidget(resLabel, 0, 0);
    imageCaptureLayout->addWidget(resComboBox_, 0, 1);
    imageCaptureSettings->setLayout(imageCaptureLayout);

    layout_ = new QVBoxLayout(this);
    layout_->addWidget(deviceNameLabel);
    layout_->addWidget(deviceNameValueLabel);
    layout_->addWidget(deviceUserLabel);
    layout_->addWidget(deviceUserValueLabel_);
    layout_->addWidget(imageCaptureSettings);
    layout_->addWidget(buttonBox_);

    this->setLayout(layout_);
    this->setWindowTitle("Camera Settings");

    load(settings_);

}

CameraSettings::Settings CameraSettingsDialog::settings()
{
    return settings_;
}

void CameraSettingsDialog::showEvent(QShowEvent *)
{
    emit(dialogVisibleChanged(true));
}

void CameraSettingsDialog::hideEvent(QHideEvent *)
{
    emit(dialogVisibleChanged(false));
}

void CameraSettingsDialog::load(CameraSettings::Settings settings)
{
    settings_ = settings;
    deviceUserValueLabel_->setText(settings_.userDefinedName);

    resolutions_ = settings.resolutions;
    if(resComboBox_->count() == 0) {
        resComboBox_->addItems(resolutionToStrings());
        int index = currentResolutionIndex();
        if(index >= 0 && index < resComboBox_->count())
            resComboBox_->setCurrentIndex(index);
    }
}

void CameraSettingsDialog::save()
{
    settings_.userDefinedName = deviceUserValueLabel_->text();
    settings_.selectedResolution = selectedResolution();
    this->accept();
}

const QStringList CameraSettingsDialog::resolutionToStrings()
{
    QStringList resStrings;
    foreach(auto res, resolutions_) {
        resStrings << QString::number(res.width()) + QString("x") + QString::number(res.height());
    }
    return resStrings;
}

QSize CameraSettingsDialog::selectedResolution()
{
    if (resolutions_.isEmpty())
        return QSize();

    int index = resComboBox_->currentIndex();
    if(index > resolutions_.count())
        return resolutions_.first();

    return resolutions_.at(index);
}

int CameraSettingsDialog::currentResolutionIndex()
{
    return 0;
}
