#include "camerarepository.h"

CameraRepository::CameraRepository(QSharedPointer<DataBase> db, QSharedPointer<Cameras> cameras) : db_(db), cameras_(cameras)
{

    db_->createTableFromProperties(TABLE_NAME, AbstractCamera::staticMetaObject);
}

