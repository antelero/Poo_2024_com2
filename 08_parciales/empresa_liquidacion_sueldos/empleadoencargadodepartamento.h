#ifndef EMPLEADOENCARGADODEPARTAMENTO_H
#define EMPLEADOENCARGADODEPARTAMENTO_H

#include "empleado.h"

class EmpleadoEncargadoDepartamento : public Empleado
{
private:
    double montoFijo;
    int objetivos;
public:
    EmpleadoEncargadoDepartamento(long cuil, char * nombre, char * apellido, double montoFijo, int objetivos);
    double calculaSueldo();
};

#endif // EMPLEADOENCARGADODEPARTAMENTO_H
