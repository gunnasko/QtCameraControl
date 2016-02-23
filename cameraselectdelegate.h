#ifndef CAMERASELECTDELEGATE_H
#define CAMERASELECTDELEGATE_H

#include <QStyledItemDelegate>
#include "cameramodel.h"

class CameraSelectDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    CameraSelectDelegate(QWidget *parent = 0);

    void paint(QPainter *painter, const QStyleOptionViewItem &option,
               const QModelIndex &index) const Q_DECL_OVERRIDE;
};

#endif // CAMERASELECTDELEGATE_H
