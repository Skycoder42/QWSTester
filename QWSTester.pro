#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T13:47:52
#
#-------------------------------------------------

QT       += core gui websockets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QWSTester
TEMPLATE = app

include(./QPathEdit/qpathedit.pri)
include(./QtUtils/QUrlValidator/qurlvalidator.pri)

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
