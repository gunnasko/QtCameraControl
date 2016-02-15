#include "cameraselectwidget.h"

#include <QLabel>
#include <QListView>
#include <QVBoxLayout>
#include <QPushButton>

CameraSelectWidget::CameraSelectWidget(QSharedPointer <CameraModel> camModel, QWidget *parent) : QWidget(parent), camModel_(camModel)
{
    auto camSelectLabel = new QLabel("Camera Select", this);
    auto camListView = new QListView(this);
    auto selectCamButton = new QPushButton("Change Camera", this);
    auto openSettingsButton = new QPushButton("Camera Settings", this);
    camListView->setModel(camModel_.data());

    connect(selectCamButton, &QPushButton::clicked, [=]{emit(selectionChanged(camListView->currentIndex().row()));});
    connect(openSettingsButton, &QPushButton::clicked, [=]{emit(openSettings(camListView->currentIndex().row()));});

    auto layout = new QVBoxLayout(this);
    layout->addWidget(camSelectLabel);
    layout->addWidget(camListView);
    layout->addWidget(selectCamButton);
    layout->addWidget(openSettingsButton);
    this->setLayout(layout);
}
