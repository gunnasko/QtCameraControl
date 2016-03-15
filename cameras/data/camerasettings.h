#ifndef CAMERASETTINGS_H
#define CAMERASETTINGS_H

#include <QString>
#include <QSize>

#include "abstractcamera.h"

namespace CameraSettings
{

struct Settings
{
    QString userDefinedName;
    QString deviceId;
    QList<QSize> resolutions;
    QSize selectedResolution;
};

Settings loadSettings(const QSharedPointer<AbstractCamera> camera);
void saveSettings(Settings settings, QSharedPointer<AbstractCamera> camera);

} //CameraSettings
#endif // CAMERASETTINGS_H
