#ifndef CAMERAREPOSITORY_H
#define CAMERAREPOSITORY_H

#include "cameras/abstractcamera.h"
#include "database.h"


#define TABLE_NAME "cameras"

class CameraRepository
{
public:
    CameraRepository(QSharedPointer<DataBase> db);
    void saveCamera(QSharedPointer<AbstractCamera> cam);
    void updateCamera(QSharedPointer<AbstractCamera> cam);

private:
    QSharedPointer<DataBase> db_;
};

#endif // CAMERAREPOSITORY_H
