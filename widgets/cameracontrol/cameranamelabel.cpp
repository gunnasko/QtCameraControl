#include "cameranamelabel.h"

#include <QLabel>
#include <QHBoxLayout>

CameraNameLabel::CameraNameLabel(QWidget *parent) : QWidget(parent)
{
    nameLabel_ = new QLabel(this);
    init();
}

CameraNameLabel::CameraNameLabel(QString currentCam, QWidget *parent) :  QWidget(parent)
{
    nameLabel_ = new QLabel(currentCam, this);
    init();
}

void CameraNameLabel::init()
{
    auto presetLabel = new QLabel("Current selected camera: ", this);
    auto layout = new QHBoxLayout(this);
    layout->addWidget(presetLabel);
    layout->addWidget(nameLabel_);
    this->setLayout(layout);
}

void CameraNameLabel::update(QString name)
{
    nameLabel_->setText(name);
}

