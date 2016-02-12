#ifndef CAMERASELECTWIDGET_H
#define CAMERASELECTWIDGET_H

#include <QWidget>
#include "cameramodel.h"

#include <QStyledItemDelegate>
#include <QItemSelectionModel>

class CameraSelectWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CameraSelectWidget(QSharedPointer <CameraModel> camModel, QWidget *parent = 0);

signals:
    void selectionChanged(const QModelIndex & current, const QModelIndex & previous);
public slots:

private:
    QSharedPointer<CameraModel> camModel_;
};

#endif // CAMERASELECTWIDGET_H
