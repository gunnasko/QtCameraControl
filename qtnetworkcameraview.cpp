#include "qtnetworkcameraview.h"

QtNetworkCameraView::QtNetworkCameraView(QWidget *parent) : AbstractCameraView(parent)
{
    qtNetworkCameraView_ = QSharedPointer<QVideoWidget>(new QVideoWidget());
    viewStack_->addWidget(qtNetworkCameraView_.data());
}

QSharedPointer<QVideoWidget> QtNetworkCameraView::qtNetworkCameraView()
{
    return qtNetworkCameraView_;
}
