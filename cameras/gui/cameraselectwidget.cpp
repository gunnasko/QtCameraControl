#include "cameraselectwidget.h"

#include <QLabel>
#include <QListView>
#include <QVBoxLayout>
#include <QPushButton>
#include <QAction>

#include "cameraselectdelegate.h"

CameraSelectWidget::CameraSelectWidget(QSharedPointer <CamerasModel> camModel, QWidget *parent) : QWidget(parent), camModel_(camModel)
{
    auto camSelectLabel = new QLabel("Camera Select", this);
    auto camListView = new QListView(this);
    auto selectCamButton = new QPushButton("Change Camera", this);
    auto openSettingsButton = new QPushButton("Camera Settings", this);
    camListView->setItemDelegate(new CameraSelectDelegate(this));
    camListView->setModel(camModel_.data());
    camListView->setContextMenuPolicy(Qt::ActionsContextMenu);

    auto deleteCamAction = new QAction("Delete", this);
    camListView->addAction(deleteCamAction);

    connect(deleteCamAction, &QAction::triggered, [=] {
        emit(deleteCamera(camListView->currentIndex().row()));
    } );

    connect(selectCamButton, &QPushButton::clicked, [=] {
        emit(selectionChanged(camListView->currentIndex().row()));
    } );
    connect(camListView, &QListView::doubleClicked, [=](const QModelIndex &index) {
        emit(selectionChanged(index.row()));
    } );
    connect(openSettingsButton, &QPushButton::clicked, [=] {
        emit(openSettings(camListView->currentIndex().row()));
    } );

    auto layout = new QVBoxLayout(this);
    layout->addWidget(camSelectLabel);
    layout->addWidget(camListView);
    layout->addWidget(selectCamButton);
    layout->addWidget(openSettingsButton);
    this->setLayout(layout);
}
