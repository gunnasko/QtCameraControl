#ifndef CAMERAREPOSITORY_H
#define CAMERAREPOSITORY_H

#include "cameras.h"
#include "database.h"


#define TABLE_NAME cameras

class CameraRepository
{
public:
    CameraRepository(QSharedPointer<DataBase> db, QSharedPointer<Cameras> cameras);

private:
    QSharedPointer<DataBase> db_;
    QSharedPointer<Cameras> cameras_;
};

#endif // CAMERAREPOSITORY_H
