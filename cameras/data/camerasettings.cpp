#include "camerasettings.h"
#include <QDebug>
CameraSettings::Settings CameraSettings::loadSettings(const QSharedPointer<AbstractCamera> camera)
{
    CameraSettings::Settings ret;
    ret.deviceId = camera->deviceId();
    ret.resolutions = camera->supportedResolutions();
    ret.selectedResolution = camera->imageResolution();
    ret.userDefinedName = camera->userDefinedName();
    qDebug()<<ret.resolutions;
    return ret;
}

void CameraSettings::saveSettings(CameraSettings::Settings settings, QSharedPointer<AbstractCamera> camera)
{
    camera->setUserDefinedName(settings.userDefinedName);
    camera->setImageResolution(settings.selectedResolution);
}
