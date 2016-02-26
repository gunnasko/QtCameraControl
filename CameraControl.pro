#-------------------------------------------------
#
# Project created by QtCreator 2016-02-11T10:39:59
#
#-------------------------------------------------

contains( CONFIG, RPI ) {
    target.path = /home/root
    INSTALLS += target
}

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

unix{
    LIBS += -L$$_PRO_FILE_PWD_/third-party_libs/vlc-qt/linux-build/install/lib -lVLCQtCore -lVLCQtWidgets
    INCLUDEPATH += $$_PRO_FILE_PWD_/third-party_libs/vlc-qt/linux-build/install/include
    LIBS += -L/usr/local/lib
}
win32{
    LIBS += -L"$$_PRO_FILE_PWD_/third-party_libs/vlc-sdk/windows/64bit/sdk"
    INCLUDEPATH += $$_PRO_FILE_PWD_/third-party_libs/vlc-qt/win-build/install/include

    CONFIG(debug, debug|release) {
        LIBS += -L"$$_PRO_FILE_PWD_/third-party_libs/vlc-qt/win-build-debug/install/lib"
        LIBS += -L"$$_PRO_FILE_PWD_/third-party_libs/vlc-qt/win-build-debug/install/bin" -lVLCQtCore -lVLCQtWidgets
    }
    CONFIG(release, debug|release){
        LIBS += -L"$$_PRO_FILE_PWD_/third-party_libs/vlc-qt/win-build/install/lib"
        LIBS += -L"$$_PRO_FILE_PWD_/third-party_libs/vlc-qt/win-build/install/bin" -lVLCQtCore -lVLCQtWidgets
    }
}

include (cameras/cameras.pri)
include (dialogs/dialogs.pri)
include (models/models.pri)
include (repository/repository.pri)
include (widgets/widgets.pri)

CONFIG += c++11

TARGET = CameraControl
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    settingskeys.h

RESOURCES += \
    images.qrc
