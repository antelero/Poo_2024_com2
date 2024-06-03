#include "empleadoencargadodepartamento.h"

EmpleadoEncargadoDepartamento::EmpleadoEncargadoDepartamento(long cuil, char * nombre, char * apellido, double montoFijo, int objetivos):Empleado(cuil, nombre, apellido)
{
    this->montoFijo = montoFijo;
    this->objetivos = objetivos;
}

double EmpleadoEncargadoDepartamento::calculaSueldo()
{
    return this->montoFijo + this->objetivos * 1000;
}
