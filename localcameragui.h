#ifndef LOCALCAMERAGUI_H
#define LOCALCAMERAGUI_H

#include <QWidget>
#include <QCameraViewfinder>
#include <QCamera>

#include "abstractcameragui.h"

class LocalCameraGUI : public AbstractCameraGUI
{
public:
    LocalCameraGUI();
    void setCurrentCamera(QSharedPointer<QCamera> camera);
    void show();

private:
    QSharedPointer<QCameraViewfinder> viewfinder_;
};

#endif // LOCALCAMERAGUI_H
