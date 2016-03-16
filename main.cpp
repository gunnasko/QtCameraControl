#define QT_SHAREDPOINTER_TRACK_POINTERS
#include <QApplication>

#include "repository/database.h"
#include "cameras/camerasmodel.h"

//#define WIDGETS

#ifdef WIDGETS
#include "mainwindow.h"
#else
#include <QQmlApplicationEngine>
#include <QQmlContext>
#endif

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("Data Respons AS");
    QCoreApplication::setOrganizationDomain("datarespons.no");
    QCoreApplication::setApplicationName("Camera Control");

    auto db = QSharedPointer<DataBase>(new DataBase());
    if(!db->open())
        return 1;

    auto cameras = QSharedPointer<CamerasModel>(new CamerasModel(db));
    cameras->searchAndAddLocalCameras();

#ifdef WIDGETS
    MainWindow w(cameras, db);
    w.show();
#else
    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("cameras", cameras.data());


    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));
#endif
    return a.exec();
}
