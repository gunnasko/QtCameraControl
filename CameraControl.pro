#-------------------------------------------------
#
# Project created by QtCreator 2016-02-11T10:39:59
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

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
    cameraviewwidget.cpp \
    cameranamelabel.cpp \
    camerasettingsdialog.cpp \
    cameracontrolwidget.cpp \
    localcameraview.cpp

HEADERS  += mainwindow.h \
    abstractcamera.h \
    localcamera.h \
    cameras.h \
    cameramodel.h \
    cameraselectwidget.h \
    cameraviewwidget.h \
    cameranamelabel.h \
    camerasettingsdialog.h \
    cameracontrolwidget.h \
    localcameraview.h

RESOURCES += \
    images.qrc
