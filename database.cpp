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

bool DataBase::open()
{
    db_ = QSqlDatabase::addDatabase("QSQLITE");
    db_.setDatabaseName(DB_NAME);

    if (!db_.open()) {
        QMessageBox::critical(0, "Cannot open database",
            "Unable to establish a database connection.\n"
                     "This program needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit.", QMessageBox::Cancel);
        return false;
    }

    return true;
}

void DataBase::close()
{
    db_.close();
}

QString DataBase::createBindColumnsForIdFromProperties(const QMetaProperty id, const QMetaObject &metaObject)
{
    QString query;
    QString idName = QString(id.name());
    //First property is inherited from Q_OBJECT so start at index 1
    for(int i = 1; metaObject.propertyCount() > i; i++) {
        auto prop = metaObject.property(i);
        QString propName = QString(prop.name());
        if(QString::compare(idName, propName) != 0)
            query.append("," + propName + "=:" + propName);
    }
    query.append(" where " + idName + "=:" + idName);
    return query;

}

QString DataBase::createBindColumnsFromProperties(const QMetaObject &metaObject)
{
    QString query;
    //First property is inherited from Q_OBJECT so start at index 1
    for(int i = 1; metaObject.propertyCount() > i; i++) {
        auto prop = metaObject.property(i);
        query.append(", :" + QString(prop.name()));
    }
    return query;
}

QString DataBase::createColumnsFromProperties(const QMetaObject &metaObject)
{
    QString query;
    //First property is inherited from Q_OBJECT so start at index 1
    for(int i = 1; metaObject.propertyCount() > i; i++) {
        auto prop = metaObject.property(i);
        query.append(", " + QString(prop.name()));
    }
    return query;
}

QString DataBase::createColumnsAndTypesFromProperties(const QMetaObject &metaObject)
{
    QString query;
    //First property is inherited from Q_OBJECT so start at index 1
    for(int i = 1; metaObject.propertyCount() > i; i++) {
        auto prop = metaObject.property(i);
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
    return query;
}

void DataBase::createTableFromProperties(const QString tableName, const QMetaObject &metaObject)
{
    QString query = "create table if not exists " + tableName + "(TableId integer primary key autoincrement";
    query.append(createColumnsAndTypesFromProperties(metaObject));
    query.append(")");
    qDebug() << "DataBase::createTableFromProperties: " << query;
    QSqlQuery createTableQuery(db_);
    createTableQuery.prepare(query);
    execute(createTableQuery);
}

void DataBase::bindAllPropertiesToQuery(QSqlQuery &queryStatement, const QObject &object) const
{
     auto metaObject = object.metaObject();
     //First property is inherited from Q_OBJECT so start at index 1
     for(int i = 1; metaObject->propertyCount() > i; i++)
     {
         auto prop = metaObject->property(i);
         auto value = prop.read(&object);
         queryStatement.bindValue(QString(":") + prop.name(), value);
     }
}

bool DataBase::execute(QSqlQuery &query)
{
    if(!query.exec()) {
        error(query);
        return false;
    }
    return true;
}

bool DataBase::saveObject(const QString tableName, const QMetaProperty id, const QObject &object)
{
    if(!db_.isOpen())
        return false;
    QSqlQuery result = queryObject(tableName, id, object);
    QString query;
    auto metaObject = object.metaObject();
    if(result.first()) {
        query.append("update " + tableName + "set TableId=:TableId");
        query.append(createBindColumnsForIdFromProperties(id, *metaObject));
    }
    else {
        query.append("insert into " + tableName + "(TableId");
        query.append(createColumnsFromProperties(*metaObject));
        query.append(") values (:TableId");
        query.append(createBindColumnsFromProperties(*metaObject));
        query.append(")");
    }

    QSqlQuery saveQuery(db_);
    saveQuery.prepare(query);
    bindAllPropertiesToQuery(saveQuery, object);
    if(!execute(saveQuery))
        return false;

    return true;
}

void DataBase::fillObject(QObject &objectToFill, QSqlQuery result) const
{
    if(!db_.isOpen())
        return;

    for(int i = 0; result.record().count() > i; i++) {
        auto propName = result.record().fieldName(i).toStdString().c_str();
        auto value = result.value(i);
        if(!objectToFill.setProperty(propName, value))
            qDebug() << "DataBase::fillObject() setProperty failed: " << propName << ":" << value;
    }

}

QSqlQuery DataBase::queryObject(const QString tableName, const QMetaProperty id, const QObject &object)
{
    QString query = "select TableId";
    auto metaObject = object.metaObject();
    query.append(createColumnsFromProperties(*metaObject));
    query.append(" from ");
    query.append(tableName);
    query.append(" where ");

    auto idName = QString(id.name());
    query.append(idName + "=:" + idName);
    QSqlQuery results(db_);
    results.prepare(query);
    execute(results);
    return results;
}

bool DataBase::getObject(const QString tableName, const QMetaProperty id, QObject &objectToFill)
{
    if(!db_.isOpen())
        return false;
    QSqlQuery results = queryObject(tableName, id, objectToFill);
    fillObject(objectToFill, results);
    return true;
}

void DataBase::error(const QSqlQuery &query) const
{
    qDebug() << "Last DB Error: " << db_.lastError();
    qDebug() << "Last query error: " << query.lastError();
    qDebug() << "Last query: " << query.lastQuery();
}
