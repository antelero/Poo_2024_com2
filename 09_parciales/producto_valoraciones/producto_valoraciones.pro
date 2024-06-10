TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        comentario.cpp \
        empresa.cpp \
        main.cpp \
        producto.cpp

HEADERS += \
    comentario.h \
    empresa.h \
    producto.h

DISTFILES += \
    test.txt
