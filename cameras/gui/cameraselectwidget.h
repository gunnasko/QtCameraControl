#ifndef CAMERASELECTWIDGET_H
#define CAMERASELECTWIDGET_H

#include <QWidget>
#include <QItemSelectionModel>

#include "../camerasmodel.h"

class CameraSelectWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CameraSelectWidget(QSharedPointer <CamerasModel> camModel, QWidget *parent = 0);

signals:
    void selectionChanged(int index);
    void openSettings(int index);
    void deleteCamera(int index);

private:
    QSharedPointer<CamerasModel> camModel_;

};

#endif // CAMERASELECTWIDGET_H
