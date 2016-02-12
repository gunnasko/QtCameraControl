#include "cameraselectwidget.h"

#include <QLabel>
#include <QListView>
#include <QVBoxLayout>
#include <QItemSelectionModel>


CameraSelectWidget::CameraSelectWidget(QSharedPointer <CameraModel> camModel, QWidget *parent) : QWidget(parent), camModel_(camModel)
{
    auto camSelectLabel = new QLabel("Camera Select", this);
    auto camListView_ = new QListView(this);
    camListView_->setModel(camModel_.data());

    auto camSelectionModel_ = new QItemSelectionModel(camModel_.data(), this);
    connect(camSelectionModel_, &QItemSelectionModel::currentChanged, this, &CameraSelectWidget::selectionChanged);

    auto layout = new QVBoxLayout(this);
    layout->addWidget(camSelectLabel);
    layout->addWidget(camListView_);
    this->setLayout(layout);
}
