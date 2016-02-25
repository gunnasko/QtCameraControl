#include "vlcnetworkcameraview.h"

VlcNetworkCameraView::VlcNetworkCameraView(QWidget *parent) : AbstractCameraView(parent)
{
    vlcNetworkCameraView_ = QSharedPointer<VlcWidgetVideo>(new VlcWidgetVideo(this));
    viewStack_->addWidget(vlcNetworkCameraView_.data());
}

QSharedPointer<VlcWidgetVideo> VlcNetworkCameraView::vlcNetworkCameraView()
{
    return vlcNetworkCameraView_;
}
