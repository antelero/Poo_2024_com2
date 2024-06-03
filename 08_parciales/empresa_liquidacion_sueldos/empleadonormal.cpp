#include "empleadonormal.h"

EmpleadoNormal::EmpleadoNormal(long cuil, char * nombre, char * apellido, double montoFijo):Empleado(cuil, nombre, apellido)
{
    this->montoFijo = montoFijo;
}

double EmpleadoNormal::calculaSueldo()
{
    return this->montoFijo;
}
