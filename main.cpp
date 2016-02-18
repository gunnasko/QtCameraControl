#include "mainwindow.h"
#include <QApplication>

#include "database.h"
#include "camerarepository.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    auto db = QSharedPointer<DataBase>(new DataBase());
    if(!db->open())
        return 1;

    MainWindow w(db);
    w.show();

    return a.exec();
}
