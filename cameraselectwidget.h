#ifndef CAMERASELECTWIDGET_H
#define CAMERASELECTWIDGET_H

#include <QWidget>
#include <QStyledItemDelegate>
#include <QItemSelectionModel>

#include "cameramodel.h"

class CameraSelectWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CameraSelectWidget(QSharedPointer <CameraModel> camModel, QWidget *parent = 0);

signals:
    void selectionChanged(int index);
    void openSettings(int index);

private:
    QSharedPointer<CameraModel> camModel_;

};

#endif // CAMERASELECTWIDGET_H
