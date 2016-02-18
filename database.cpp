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
    bool firstEntry = true;
    //First property is inherited from Q_OBJECT so start at index 1
    for(int i = 1; metaObject.propertyCount() > i; i++) {
        auto prop = metaObject.property(i);
        QString propName = QString(prop.name());
        if(QString::compare(idName, propName) != 0) {
            if(firstEntry) {
                query.append(propName + "=:" + propName);
                firstEntry = false;
            } else {
                query.append("," + propName + "=:" + propName);
            }
        }
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
        if(i == 1)
            query.append(":" + QString(prop.name()));
        else
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
        if(i == 1)
            query.append(QString(prop.name()));
        else
            query.append(", " + QString(prop.name()));
    }
    return query;
}

QString DataBase::createColumnsAndTypesFromProperties(const QMetaProperty primaryKey, const QMetaObject metaObject)
{
    QString query;
    //First property is inherited from Q_OBJECT so start at index 1
    for(int i = 1; metaObject.propertyCount() > i; i++) {
        auto prop = metaObject.property(i);
        if(i == 1)
            query.append(QString(prop.name()));
        else
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

        if(strcmp(prop.name(), primaryKey.name()) == 0)
            query.append(" primary key");

    }
    return query;
}

void DataBase::createTableFromProperties(const QString tableName, const QMetaProperty primaryKey, const QMetaObject metaObject)
{
    QString query = "create table if not exists " + tableName + "(";
    query.append(createColumnsAndTypesFromProperties(primaryKey, metaObject));
    query.append(")");
    qDebug()<<query;
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
    auto metaObject = object.metaObject();
    QSqlQuery result = queryObject(tableName, id, object);
    QString query;
    if(result.first()) {
        query.append("update " + tableName + " set ");
        query.append(createBindColumnsForIdFromProperties(id, *metaObject));
    }
    else {
        query.append("insert into " + tableName + " (");
        query.append(createColumnsFromProperties(*metaObject));
        query.append(") values (");
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

    //Start at 1 to ignore TableID
    auto metaObject = objectToFill.metaObject();
    for(int i = 1; result.record().count() > i; i++) {
        auto propName = result.record().fieldName(i).toStdString().c_str();
        auto value = result.value(i);

        auto propIndex = metaObject->indexOfProperty(propName);
        auto prop = metaObject->property(propIndex);

        if(prop.isWritable()) {
            if(!objectToFill.setProperty(propName, value)) {
                qDebug() << "DataBase::fillObject() setProperty failed: " << propName << ":" << value;
            }
        }
    }

}

QSqlQuery DataBase::queryObjects(const QString tableName, const QMetaObject &metaObject)
{
    QString query = "select ";
    query.append(createColumnsFromProperties(metaObject));
    query.append(" from ");
    query.append(tableName);

    QSqlQuery results(db_);
    results.prepare(query);
    execute(results);
    return results;
}

QSqlQuery DataBase::queryObject(const QString tableName, const QMetaProperty id, const QObject &object)
{
    auto metaObject = object.metaObject();
    QString query = "select ";
    query.append(createColumnsFromProperties(*metaObject));
    query.append(" from ");
    query.append(tableName);
    query.append(" where ");
    auto idName = QString(id.name());
    query.append(idName + "=:" + idName);

    QSqlQuery results(db_);
    results.prepare(query);
    results.bindValue(":" + idName, object.property(idName.toStdString().c_str()));
    execute(results);
    return results;
}

QList<QSharedPointer<QObject>> DataBase::getObjects(const QString tableName, const QMetaObject &metaObject)
{
    QList<QSharedPointer<QObject>> ret;
    auto results = queryObjects(tableName, metaObject);
    while(results.next()) {
        auto object = QSharedPointer<QObject>(new QObject());
        fillObject(*object, results);
        ret.append(object);
    }
    return ret;
}

bool DataBase::getObject(const QString tableName, const QMetaProperty id, QObject &objectToFill)
{
    if(!db_.isOpen())
        return false;
    QSqlQuery results = queryObject(tableName, id, objectToFill);
    if(!results.first())
        return false;
    fillObject(objectToFill, results);
    return true;
}

void DataBase::error(const QSqlQuery &query) const
{
    qDebug() << "Last DB Error: " << db_.lastError();
    qDebug() << "Last query error: " << query.lastError();
    qDebug() << "Last query: " << query.lastQuery();
    qDebug() << "Bound values: " << query.boundValues();
}
