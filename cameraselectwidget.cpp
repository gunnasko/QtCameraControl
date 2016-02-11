#include "cameraselectwidget.h"

#include <QLabel>
#include <QListView>
#include <QVBoxLayout>


CameraSelectWidget::CameraSelectWidget(QSharedPointer <CameraModel> camModel, QWidget *parent) : QWidget(parent), camModel_(camModel)
{
    auto camSelectLabel = new QLabel("Camera Select", this);
    auto camListView_ = new QListView(this);
    camListView_->setModel(camModel_);

    auto layout = new QHBoxLayout(this);
    layout->addWidget(camSelectLabel);
    layout->addWidget(camListView_);
    this->setLayout(layout);
}
