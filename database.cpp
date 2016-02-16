#include "database.h"
#include <QMetaProperty>
#include <QDebug>

#define DB_NAME "cameracontrol"

DataBase::DataBase()
{
    openDatabase();
}

bool DataBase::openDatabase()
{
    db_ = QSqlDatabase::database("QSQLITE");
    db_.setDatabaseName(DB_NAME);
    return db_.open();
}

void DataBase::createTableFromProperties(const QString tableName, const QObject *object)
{
    QString query = "create table if not exists " + tableName + "(TableId integer primary key autoincrement,";
    const QMetaObject *metaObject = object->metaObject();
    //First property is inherited from Q_OBJECT so start at index 1
    for(int i = 1; metaObject->propertyCount() > i; i++) {
        QMetaProperty prop = metaObject->property(i);
        query.append(", " + QString(prop.name()));
        switch(prop.type()) {
        case QVariant::String:
            query.append(" text");
            break;
        case QVariant::Int:
            query.append(" integer");
            break;
        case QVariant::UInt:
            query.append(" integer");
            break;
        default:
            qDebug()<<"DataBase::createTableFromProperties: Cannot add property " << prop.name();
        }
    }
    qDebug()<<query;
}
