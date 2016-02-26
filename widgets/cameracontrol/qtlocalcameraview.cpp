#include "qtlocalcameraview.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QStackedWidget>
#include <QDateTime>

QtLocalCameraView::QtLocalCameraView(QWidget *parent) : AbstractCameraView(parent)
{
    camView_ = QSharedPointer<QCameraViewfinder>(new QCameraViewfinder());
    viewStack_->addWidget(camView_.data());
}

QSharedPointer<QCameraViewfinder> QtLocalCameraView::camGUI()
{
    return QSharedPointer<QCameraViewfinder>(camView_);
}

