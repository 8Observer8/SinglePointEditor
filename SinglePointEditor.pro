#-------------------------------------------------
#
# Project created by QtCreator 2014-08-18T12:49:02
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SinglePointEditor
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    SceneWindow.cpp \
    ControlWindow.cpp \
    Color.cpp \
    Scene.cpp

HEADERS  += MainWindow.h \
    SceneWindow.h \
    ControlWindow.h \
    Color.h \
    Scene.h

FORMS    += MainWindow.ui \
    SceneWindow.ui \
    ControlWindow.ui

RESOURCES += \
    shaders.qrc
