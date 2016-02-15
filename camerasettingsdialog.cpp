#include "camerasettingsdialog.h"

#include <QLabel>
#include <QDialogButtonBox>
#include <QVBoxLayout>

CameraSettingsDialog::CameraSettingsDialog(QSharedPointer<AbstractCamera> camera, QWidget *parent) : QDialog(parent), camera_(camera)
{
    auto deviceNameLabel = new QLabel("Device ID:", this);
    auto deviceNameValueLabel = new QLabel(camera_->deviceName(), this);
    deviceNameValueLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);

    auto deviceUserLabel = new QLabel("Camera Name:", this);
    deviceUserValueLabel_ = new QLineEdit(camera_->userDefinedName(), this);

    auto buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(save()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

    auto layout = new QVBoxLayout(this);
    layout->addWidget(deviceNameLabel);
    layout->addWidget(deviceNameValueLabel);
    layout->addWidget(deviceUserLabel);
    layout->addWidget(deviceUserValueLabel_);
    layout->addWidget(buttonBox);

    this->setLayout(layout);
    this->setWindowTitle("Camera Settings");
}

void CameraSettingsDialog::save()
{
    camera_->setUserDefinedName(deviceUserValueLabel_->text());
    this->accept();
}
