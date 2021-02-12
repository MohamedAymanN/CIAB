#-------------------------------------------------
#
# Project created by QtCreator 2019-01-01T17:36:19
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChemistryInABox
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        ciab.cpp \
    mainwindow.cpp \
    periodictable.cpp \
    molecularweight.cpp \
    dailycompounds.cpp \
    my_window.cpp

HEADERS += \
        ciab.h \
    mainwindow.h \
    mainwindow.h \
    info.h \
    periodictable.h \
    molecularweight.h \
    dailycompounds.h \
    my_window.h

FORMS += \
        ciab.ui \
    mainwindow.ui \
    periodictable.ui \
    molecularweight.ui \
    dailycompounds.ui \
    mywindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
