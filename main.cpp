#define QT_SHAREDPOINTER_TRACK_POINTERS
#include "mainwindow.h"
#include <QApplication>

#include "database.h"
#include "camerarepository.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("Data Respons AS");
    QCoreApplication::setOrganizationDomain("datarespons.no");
    QCoreApplication::setApplicationName("Camera Control");

    auto db = QSharedPointer<DataBase>(new DataBase());
    if(!db->open())
        return 1;

    MainWindow w(db);
    w.show();

    return a.exec();
}
