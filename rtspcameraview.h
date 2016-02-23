#ifndef RTSPCAMERAVIEW_H
#define RTSPCAMERAVIEW_H

#include "abstractcameraview.h"
#include <QVideoWidget>

class RtspCameraView : public AbstractCameraView
{
    Q_OBJECT
public:
    explicit RtspCameraView(QWidget *parent = 0);
    QSharedPointer<QVideoWidget> rtspStreamView();
private:
    QSharedPointer<QVideoWidget> rtspStreamView_;
};

#endif // RTSPCAMERAVIEW_H
