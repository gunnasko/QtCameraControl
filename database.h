#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QtSql>
#include <QSqlDatabase>

class DataBase
{
public:
    DataBase();

    void createTableFromProperties(const QString tableName, const QMetaObject &metaObject);
    void bindAllPropertiesToQuery(QSqlQuery &queryStatement,const QObject &object) const;
    bool execute(QSqlQuery &query);

    bool saveObject(const QString tableName, const QMetaProperty id, const QObject &object);
    bool getObject(const QString tableName, QMetaProperty id, QObject &objectToFill);


    bool open();
    void close();

private:
    QSqlQuery queryObject(const QString tableName, QMetaProperty id, const QObject &object);
    void fillObject(QObject& objectToFill, QSqlQuery result) const;

    QString createColumnsFromProperties(const QMetaObject &metaObject);
    void error(const QSqlQuery &query) const;
    QSqlDatabase db_;
    QString createColumnsAndTypesFromProperties(const QMetaObject &metaObject);
    QString createBindColumnsFromProperties(const QMetaObject &metaObject);
    QString createBindColumnsForIdFromProperties(const QMetaProperty id, const QMetaObject &metaObject);
};

#endif // DATABASE_H
