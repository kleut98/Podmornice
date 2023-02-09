#-------------------------------------------------
#
# Project created by QtCreator 2021-05-02T23:30:55
#
#-------------------------------------------------

QT       += core gui

DEFINES+="MY_TST_MAC=1" "MY_MAC_KIH=1" "MY_TST_MAC_KRENIIGRU=1"

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PodmorniceGUI
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

QMAKE_CXXFLAGS += -g

SOURCES += \
        main.cpp \
        #podmornicegui.cpp \
    kreniigru.cpp
    #pobeda.cpp \
    #gubitak.cpp

HEADERS += \
        #podmornicegui.h \
    kreniigru.h \
    #pobeda.h \
    #gubitak.h

#FORMS += \
#        podmornicegui.ui \
#    kreniigru.ui \
#    pobeda.ui \
#    gubitak.ui

DISTFILES +=
