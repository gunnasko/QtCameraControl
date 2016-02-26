#include "vlcnetworkcameraview.h"
#include <QDebug>

VlcNetworkCameraView::VlcNetworkCameraView(QWidget *parent) : AbstractCameraView(parent)
{
    vlcNetworkCameraView_ = QSharedPointer<VlcWidgetVideo>(new VlcWidgetVideo(this));
    viewStack_->addWidget(vlcNetworkCameraView_.data());
}

QSharedPointer<VlcWidgetVideo> VlcNetworkCameraView::vlcNetworkCameraView()
{
    return vlcNetworkCameraView_;
}

void VlcNetworkCameraView::setMediaPlayer(VlcMediaPlayer *mediaPlayer)
{
    vlcNetworkCameraView_->setMediaPlayer(mediaPlayer);
}
