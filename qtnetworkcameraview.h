#ifndef RTSPCAMERAVIEW_H
#define RTSPCAMERAVIEW_H

#include "abstractcameraview.h"
#include <QVideoWidget>

class QtNetworkCameraView : public AbstractCameraView
{
    Q_OBJECT
public:
    explicit QtNetworkCameraView(QWidget *parent = 0);
    QSharedPointer<QVideoWidget> qtNetworkCameraView();
private:
    QSharedPointer<QVideoWidget> qtNetworkCameraView_;
};

#endif // RTSPCAMERAVIEW_H
