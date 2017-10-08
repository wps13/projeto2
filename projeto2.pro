TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Screen.cpp \
    FiguraGeometrica.cpp \
    retangulo.cpp \
    reta.cpp \
    circulo.cpp

HEADERS += \
    Screen.h \
    FiguraGeometrica.h \
    retangulo.h \
    reta.h \
    circulo.h
