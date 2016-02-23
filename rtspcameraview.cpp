#include "rtspcameraview.h"

RtspCameraView::RtspCameraView(QWidget *parent) : AbstractCameraView(parent)
{
    rtspStreamView_ = QSharedPointer<QVideoWidget>(new QVideoWidget());
    viewStack_->addWidget(rtspStreamView_.data());
}

QSharedPointer<QVideoWidget> RtspCameraView::rtspStreamView()
{
    return rtspStreamView_;
}
