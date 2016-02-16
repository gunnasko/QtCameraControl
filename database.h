#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QSqlDatabase>

class DataBase
{
public:
    DataBase();

    void createTableFromProperties(const QString tableName, const QObject *object);

private:
    bool openDatabase();
    QSqlDatabase db_;
};

#endif // DATABASE_H
