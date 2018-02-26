#-------------------------------------------------
#
# Project created by QtCreator 2018-02-11T20:44:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hotelmange
TEMPLATE = app


SOURCES += main.cpp\
        menucard.cpp \
    seconddialog.cpp \
    thirddialog.cpp

HEADERS  += menucard.h \
    seconddialog.h \
    thirddialog.h

FORMS    += menucard.ui \
    seconddialog.ui \
    thirddialog.ui

RESOURCES += \
    resource.qrc
