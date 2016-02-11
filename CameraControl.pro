#-------------------------------------------------
#
# Project created by QtCreator 2016-02-11T10:39:59
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = CameraControl
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    localcamera.cpp \
    cameras.cpp

HEADERS  += mainwindow.h \
    abstractcamera.h \
    localcamera.h \
    cameras.h
