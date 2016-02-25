#ifndef VLCNETWORKCAMERAVIEW_H
#define VLCNETWORKCAMERAVIEW_H

#include "abstractcameraview.h"
#include <VLCQtWidgets/WidgetVideo.h>
#include <VLCQtCore/MediaPlayer.h>

class VlcNetworkCameraView : public AbstractCameraView
{
    Q_OBJECT
public:
    explicit VlcNetworkCameraView(QWidget *parent = 0);
    QSharedPointer<VlcWidgetVideo> vlcNetworkCameraView();
    void setMediaPlayer(QSharedPointer<VlcMediaPlayer> mediaPlayer);

private:
    QSharedPointer<VlcWidgetVideo> vlcNetworkCameraView_;
};

#endif // VLCNETWORKCAMERAVIEW_H
