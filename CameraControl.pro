#-------------------------------------------------
#
# Project created by QtCreator 2016-02-11T10:39:59
#
#-------------------------------------------------

contains( CONFIG, RPI ) {
    target.path = /home/root
    INSTALLS += target
}

QT       += sql core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

unix{
    LIBS += -L$$_PRO_FILE_PWD_/vlc-qt/linux-build/install/lib -lVLCQtCore -lVLCQtWidgets
    INCLUDEPATH += $$_PRO_FILE_PWD_/vlc-qt/linux-build/install/include
    LIBS += -L/usr/local/lib
}
win32{
    LIBS += -L"C:/Program Files/VideoLAN/VLC/sdk/lib"
    INCLUDEPATH += $$_PRO_FILE_PWD_/vlc-qt/win-build/install/include

    CONFIG(debug, debug|release) {
        LIBS += -L"$$_PRO_FILE_PWD_/vlc-qt/win-build-debug/install/lib"
        LIBS += -L"$$_PRO_FILE_PWD_/vlc-qt/win-build-debug/install/bin" -lVLCQtCore -lVLCQtWidgets
    }
    CONFIG(release, debug|release){
        LIBS += -L"$$_PRO_FILE_PWD_/vlc-qt/win-build/install/lib"
        LIBS += -L"$$_PRO_FILE_PWD_/vlc-qt/win-build/install/bin" -lVLCQtCore -lVLCQtWidgets
    }
}

CONFIG += c++11

TARGET = CameraControl
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    abstractcamera.cpp \
    localcamera.cpp \
    cameras.cpp \
    cameramodel.cpp \
    cameraselectwidget.cpp \
    cameranamelabel.cpp \
    camerasettingsdialog.cpp \
    cameracontrolwidget.cpp \
    localcameraview.cpp \
    database.cpp \
    camerarepository.cpp \
    appsettingsdialog.cpp \
    cameraselectdelegate.cpp \
    abstractcameraview.cpp \
    qtnetworkcamera.cpp \
    qtnetworkcameraview.cpp \
    vlcnetworkcamera.cpp \
    vlcnetworkcameraview.cpp

HEADERS  += mainwindow.h \
    abstractcamera.h \
    localcamera.h \
    cameras.h \
    cameramodel.h \
    cameraselectwidget.h \
    cameranamelabel.h \
    camerasettingsdialog.h \
    cameracontrolwidget.h \
    localcameraview.h \
    database.h \
    camerarepository.h \
    appsettingsdialog.h \
    settingskeys.h \
    cameraselectdelegate.h \
    abstractcameraview.h \
    qtnetworkcameraview.h \
    qtnetworkcamera.h \
    vlcnetworkcamera.h \
    vlcnetworkcameraview.h

RESOURCES += \
    images.qrc
