#include "abstractcamerasettingsdialog.h"

#include <QLabel>
#include <QDebug>

AbstractCameraSettingsDialog::AbstractCameraSettingsDialog(CameraSettings settings, QWidget *parent) : QDialog(parent), settings_(settings)
{
    auto deviceNameLabel = new QLabel("Device ID:", this);
    auto deviceNameValueLabel = new QLabel(settings_.deviceId, this);
    deviceNameValueLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);

    auto deviceUserLabel = new QLabel("Camera Name:", this);
    deviceUserValueLabel_ = new QLineEdit(settings_.userDefinedName, this);

    buttonBox_ = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
    connect(buttonBox_, SIGNAL(accepted()), this, SLOT(save()));
    connect(buttonBox_, SIGNAL(rejected()), this, SLOT(reject()));

    layout_ = new QVBoxLayout(this);
    layout_->addWidget(deviceNameLabel);
    layout_->addWidget(deviceNameValueLabel);
    layout_->addWidget(deviceUserLabel);
    layout_->addWidget(deviceUserValueLabel_);

    this->setLayout(layout_);
    this->setWindowTitle("Camera Settings");
}

CameraSettings AbstractCameraSettingsDialog::settings()
{
    return settings_;
}

