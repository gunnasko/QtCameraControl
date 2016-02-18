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
    QList<QSharedPointer<QObject> > getObjects(const QString tableName, const QMetaObject &metaObject);


    bool open();
    void close();

private:
    void fillObject(QObject& objectToFill, QSqlQuery result) const;

    void error(const QSqlQuery &query) const;
    QSqlDatabase db_;

    QString createColumnsFromProperties(const QMetaObject &metaObject);
    QString createColumnsAndTypesFromProperties(const QMetaObject &metaObject);
    QString createBindColumnsFromProperties(const QMetaObject &metaObject);
    QString createBindColumnsForIdFromProperties(const QMetaProperty id, const QMetaObject &metaObject);

    QSqlQuery queryObject(const QString tableName, QMetaProperty id, const QObject &object);
    QSqlQuery queryObjects(const QString tableName, const QMetaObject &metaObject);
};

#endif // DATABASE_H
