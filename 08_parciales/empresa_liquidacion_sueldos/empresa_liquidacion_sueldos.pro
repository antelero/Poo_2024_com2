TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        empleado.cpp \
        empleadoencargadodepartamento.cpp \
        empleadonormal.cpp \
        empleadovendedor.cpp \
        liquidador.cpp \
        main.cpp

HEADERS += \
    empleado.h \
    empleadoencargadodepartamento.h \
    empleadonormal.h \
    empleadovendedor.h \
    liquidador.h
