#ifndef VLCNETWORKCAMERAVIEW_H
#define VLCNETWORKCAMERAVIEW_H

#include "abstractcameraview.h"
#include <VLCQtWidgets/WidgetVideo.h>

class VlcNetworkCameraView : public AbstractCameraView
{
    Q_OBJECT
public:
    explicit VlcNetworkCameraView(QWidget *parent = 0);
    QSharedPointer<VlcWidgetVideo> vlcNetworkCameraView();

private:
    QSharedPointer<VlcWidgetVideo> vlcNetworkCameraView_;
};

#endif // VLCNETWORKCAMERAVIEW_H
