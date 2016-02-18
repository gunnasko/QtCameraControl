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
    bool openDatabase();

private:
    QString createColumnsFromProperties(const QMetaObject &metaObject);
    void execute(QSqlQuery &query);
    QSqlDatabase db_;
};

#endif // DATABASE_H
