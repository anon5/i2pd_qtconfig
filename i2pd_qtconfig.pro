#-------------------------------------------------
#
# Project created by QtCreator 2016-03-25T08:08:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = i2pd_qtconfig
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

CONFIG += mobility
MOBILITY = 

DISTFILES += \
    Anke_2200px.jpg \
    LICENSE \
    README.md

RESOURCES = i2pd_qtconfig.qrc \
    i2pd_qtconfig.qrc
