TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cliente.cpp \
        clienteextra.cpp \
        clientemediano.cpp \
        clientepequeno.cpp \
        main.cpp \
        sistemadecobro.cpp

HEADERS += \
    cliente.h \
    clienteextra.h \
    clientemediano.h \
    clientepequeno.h \
    sistemadecobro.h
