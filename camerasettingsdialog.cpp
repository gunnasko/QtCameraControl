#include "camerasettingsdialog.h"

#include <QLabel>
#include <QDialogButtonBox>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QDebug>
CameraSettingsDialog::CameraSettingsDialog(QSharedPointer<AbstractCamera> camera, QWidget *parent) : QDialog(parent), camera_(camera)
{
    resolutions_ = camera_->supportedResolutions();
    qDebug()<<resolutions_;
    auto deviceNameLabel = new QLabel("Device ID:", this);
    auto deviceNameValueLabel = new QLabel(camera_->deviceId(), this);
    deviceNameValueLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);

    auto deviceUserLabel = new QLabel("Camera Name:", this);
    deviceUserValueLabel_ = new QLineEdit(camera_->userDefinedName(), this);

    auto imageCaptureSettings = new QGroupBox("Image Capture Settings:", this);
    auto imageCaptureLayout = new QGridLayout();
    auto resLabel = new QLabel("Resolution:", this);
    resComboBox_ = new QComboBox(this);
    resComboBox_->addItems(resolutionToStrings());

    imageCaptureLayout->addWidget(resLabel, 0, 0);
    imageCaptureLayout->addWidget(resComboBox_, 0, 1);
    imageCaptureSettings->setLayout(imageCaptureLayout);


    auto buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(save()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

    auto layout = new QVBoxLayout(this);
    layout->addWidget(deviceNameLabel);
    layout->addWidget(deviceNameValueLabel);
    layout->addWidget(deviceUserLabel);
    layout->addWidget(deviceUserValueLabel_);
    layout->addWidget(imageCaptureSettings);
    layout->addWidget(buttonBox);

    this->setLayout(layout);
    this->setWindowTitle("Camera Settings");
}

void CameraSettingsDialog::save()
{
    camera_->setUserDefinedName(deviceUserValueLabel_->text());
    camera_->setImageResolution(selectedResolution());
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
