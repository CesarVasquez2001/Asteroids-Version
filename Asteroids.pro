#-------------------------------------------------
#
#
#
#-------------------------------------------------

QT       += core gui \
            multimedia \
            network widgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Asteroids
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    player.cpp \
    bullet.cpp \
    rocks.cpp \
    networkplayer.cpp

HEADERS  += mainwindow.h \
    player.h \
    bullet.h \
    rocks.h \
    networkplayer.h


FORMS    += mainwindow.ui \
    mainwindow.ui


RESOURCES += \
    resource.qrc
