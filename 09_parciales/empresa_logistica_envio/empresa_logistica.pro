TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        envio.cpp \
        enviocertificado.cpp \
        enviocomun.cpp \
        envioxpeso.cpp \
        gestor.cpp \
        main.cpp

HEADERS += \
    envio.h \
    enviocertificado.h \
    enviocomun.h \
    envioxpeso.h \
    gestor.h
