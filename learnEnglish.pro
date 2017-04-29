#-------------------------------------------------
#
# Project created by QtCreator 2017-04-29T19:23:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = learnEnglish
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    transdialog.cpp \
    mot.cpp \
    verbe.cpp \
    utils.cpp \
    listeverbe.cpp \
    listemot.cpp

HEADERS  += mainwindow.h \
    transdialog.h \
    verbe.h \
    mot.h \
    utils.h \
    listemot.h \
    listeverbe.h

FORMS    += mainwindow.ui \
    transdialog.ui

OTHER_FILES += \
    dataword.csv
