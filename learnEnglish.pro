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
    utils.cpp \
    verbdialog.cpp

HEADERS  += mainwindow.h \
    transdialog.h \
    utils.h \
    verbdialog.h

FORMS    += mainwindow.ui \
    transdialog.ui \
    verbdialog.ui

OTHER_FILES += \
    dataword.csv

DISTFILES += \
    dataverb.csv \
    saves.csv \
    ../../../../../Ethminer/icon1.png \
    icon1.png \
    british-icon.png
