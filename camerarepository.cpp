#include "camerarepository.h"

#include "localcamera.h"

CameraRepository::CameraRepository(QSharedPointer<DataBase> db) : db_(db)
{

    db_->createTableFromProperties(TABLE_NAME, AbstractCamera::staticMetaObject);
}

void CameraRepository::saveCamera(QSharedPointer<AbstractCamera> cam)
{
    auto metaObject = cam.data()->metaObject();
    int idIndex = metaObject->indexOfProperty("deviceId");
    db_->saveObject(TABLE_NAME, metaObject->property(idIndex), *cam.data());
}

void CameraRepository::updateCamera(QSharedPointer<AbstractCamera> cam)
{
    auto metaObject = cam.data()->metaObject();
    int idIndex = metaObject->indexOfProperty("deviceId");
    db_->getObject(TABLE_NAME, metaObject->property(idIndex), *cam.data());
}

