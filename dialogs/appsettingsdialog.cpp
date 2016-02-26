#include "appsettingsdialog.h"

#include <QLabel>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QDialogButtonBox>
#include <QPushButton>

AppSettingsDialog::AppSettingsDialog(QWidget *parent) : QDialog(parent)
{
    //Set default values
    videoLocation_ = settings_.value(VIDEO_LOCATION, QDir::current().absolutePath()).toString();
    imageLocation_ = settings_.value(IMAGE_LOCATION, QDir::current().absolutePath()).toString();

    auto videoLocationLabel = new QLabel("Location for saved videos:", this);
    videoLocationValue_ = new QLabel(videoLocation_.absolutePath(), this);
    videoLocationValue_->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    auto videoBrowseButton = new QPushButton("Browse...", this);
    connect(videoBrowseButton, &QPushButton::clicked, this, &AppSettingsDialog::openVideoFileDialog);

    auto videoGridLayout = new QGridLayout();
    videoGridLayout->addWidget(videoLocationLabel, 0, 0, 1, 2);
    videoGridLayout->addWidget(videoBrowseButton, 1, 0);
    videoGridLayout->addWidget(videoLocationValue_, 1, 1);

    auto imageLocationLabel = new QLabel("Location for saved images:", this);
    imageLocationValue_ = new QLabel(imageLocation_.absolutePath(), this);
    imageLocationValue_->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    auto imageBrowseButton = new QPushButton("Browse...", this);
    auto imageGridLayout = new QGridLayout();
    connect(imageBrowseButton, &QPushButton::clicked, this, &AppSettingsDialog::openImageFileDialog);

    imageGridLayout->addWidget(imageLocationLabel, 0, 0, 1, 2);
    imageGridLayout->addWidget(imageBrowseButton, 1, 0);
    imageGridLayout->addWidget(imageLocationValue_, 1, 1);

    auto buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
    connect(buttonBox, &QDialogButtonBox::accepted, this, &AppSettingsDialog::save);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &AppSettingsDialog::reject);

    auto dialogLayout = new QVBoxLayout(this);
    dialogLayout->addLayout(videoGridLayout);
    dialogLayout->addLayout(imageGridLayout);
    dialogLayout->addWidget(buttonBox);
    setLayout(dialogLayout);
}

void AppSettingsDialog::openVideoFileDialog()
{
    auto path = QFileDialog::getExistingDirectory(this, "Select location for saved videos", videoLocation_.absolutePath(), QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    if(path.isEmpty())
        return;

    videoLocation_ = QDir(path);
    videoLocationValue_->setText(videoLocation_.absolutePath());
}

void AppSettingsDialog::openImageFileDialog()
{
    auto path = QFileDialog::getExistingDirectory(this, "Select location for saved images", imageLocation_.absolutePath(), QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    if(path.isEmpty())
        return;

    imageLocation_ = QDir(path);
    imageLocationValue_->setText(imageLocation_.absolutePath());
}

void AppSettingsDialog::save()
{
    settings_.setValue(VIDEO_LOCATION, videoLocation_.absolutePath());
    settings_.setValue(IMAGE_LOCATION, imageLocation_.absolutePath());
    settings_.sync();
    this->accept();
}
