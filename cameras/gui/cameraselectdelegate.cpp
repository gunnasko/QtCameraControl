#include "cameraselectdelegate.h"

#include <QPainter>
#include "../camerasmodel.h"

CameraSelectDelegate::CameraSelectDelegate(QWidget *parent) : QStyledItemDelegate(parent)
{

}

void CameraSelectDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if(index.data(CamerasModel::CameraModelEnum::EnabledRole).isValid()) {
        bool enabled = index.data(CamerasModel::CameraModelEnum::EnabledRole).toBool();
        QString name = index.data(CamerasModel::CameraModelEnum::UserDefinedNameRole).toString();

        if(option.state & QStyle::State_Selected)
            painter->fillRect(option.rect, option.palette.highlight());

        painter->save();

        QImage button;
        if(enabled)
            button.load(":/toolbar/images/power_on_540px.png");
        else
            button.load(":/toolbar/images/power_off_540px.png");
        button = button.scaledToHeight(option.rect.height(), Qt::SmoothTransformation);

        painter->drawText(option.rect, Qt::AlignLeft, name);
        QPointF imagePoint(option.rect.topRight().x() - button.width(), option.rect.topRight().y());
        painter->drawImage(imagePoint, button);
        painter->restore();
    }
}
