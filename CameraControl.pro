#-------------------------------------------------
#
# Project created by QtCreator 2016-02-11T10:39:59
#
#-------------------------------------------------

contains( CONFIG, RPI ) {
    target.path = /home/root
    INSTALLS += target
}

QT       += core gui qml quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

unix:!macx{
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
macx{
    LIBS += -F$$PWD/third-party_libs/vlc-qt/osx-build/install/lib/ -framework VLCQtCore -framework VLCQtWidgets
    #DYLD_LIBRARY_PATH += $$PWD/third-party_libs/vlc-qt/osx-build/install/lib/
    INCLUDEPATH += $$PWD/third-party_libs/vlc-qt/linux-build/install/include
    DEPENDPATH += $$PWD/third-party_libs/vlc-qt/linux-build/install/include
}

include (cameras/cameras.pri)
include (repository/repository.pri)

CONFIG += c++11

TARGET = CameraControl
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    appsettingsdialog.cpp

HEADERS  += mainwindow.h \
    settingskeys.h \
    appsettingsdialog.h

RESOURCES += \
    images.qrc \
    qml.qrc

