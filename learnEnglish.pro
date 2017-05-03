#-------------------------------------------------
#
# Project created by QtCreator 2017-04-29T19:23:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = learnEnglish
TEMPLATE = app


SOURCES += sources/main.cpp\
        sources/mainwindow.cpp \
    sources/transdialog.cpp \
    sources/utils.cpp \
    sources/verbdialog.cpp

HEADERS  += headers/mainwindow.h \
    headers/transdialog.h \
    headers/utils.h \
    headers/verbdialog.h

FORMS    += forms/mainwindow.ui \
    forms/transdialog.ui \
    forms/verbdialog.ui

OTHER_FILES += \
    databases/dataword.csv

DISTFILES += \
    databases/dataverb.csv \
    databases/saves.csv \
    resources/icon.png \
    resources/british-icon.png
