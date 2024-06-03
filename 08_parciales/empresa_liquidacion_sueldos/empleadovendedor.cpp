#include "empleadovendedor.h"

EmpleadoVendedor::EmpleadoVendedor(long cuil, char * nombre, char * apellido, double montoFijo, double montoVendido):Empleado(cuil, nombre, apellido)
{
    this->montoFijo = montoFijo;
    this->montoVendido = montoVendido;
}

double EmpleadoVendedor::calculaSueldo()
{
    return this->montoFijo + this->montoVendido * 1.02;
}
