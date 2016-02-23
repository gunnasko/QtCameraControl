#include "localcameraview.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QStackedWidget>
#include <QDateTime>

LocalCameraView::LocalCameraView(QWidget *parent) : AbstractCameraView(parent)
{
    camView_ = QSharedPointer<QCameraViewfinder>(new QCameraViewfinder());
    viewStack_->addWidget(camView_.data());
}

QSharedPointer<QCameraViewfinder> LocalCameraView::camView()
{
    return QSharedPointer<QCameraViewfinder>(camView_);
}

