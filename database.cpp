#include "database.h"
#include <QMetaProperty>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

#define DB_NAME "cameracontrol.db"

DataBase::DataBase()
{
}

bool DataBase::openDatabase()
{
    db_ = QSqlDatabase::addDatabase("QSQLITE");
    db_.setDatabaseName(DB_NAME);

    if (!db_.open()) {
        QMessageBox::critical(0, "Cannot open database",
            "Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit.", QMessageBox::Cancel);
        return false;
    }

    return true;
}

QString DataBase::createColumnsFromProperties(const QMetaObject &metaObject)
{
    QString query;
    //First property is inherited from Q_OBJECT so start at index 1
    for(int i = 1; metaObject.propertyCount() > i; i++) {
        QMetaProperty prop = metaObject.property(i);
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
            qDebug() << "DataBase::createTableStringFromProperties: Cannot add property " << prop.name();
        }
    }
    query.append(")");
    return query;
}

void DataBase::createTableFromProperties(const QString tableName, const QMetaObject &metaObject)
{
    QString query = "create table if not exists " + tableName + "(TableId integer primary key autoincrement";
    query.append(createColumnsFromProperties(metaObject));
    qDebug() << "DataBase::createTableFromProperties: " << query;
    QSqlQuery createTableQuery(query, db_);
    execute(createTableQuery);
}

void DataBase::execute(QSqlQuery &query)
{
    if(!query.exec())
        qDebug()<<"Database::execute: Failed to execute query - " << query.lastError();
}
