#ifndef EMPLEADOVENDEDOR_H
#define EMPLEADOVENDEDOR_H

#include "empleado.h"

class EmpleadoVendedor : public Empleado
{
private:
    double montoFijo;
    double montoVendido;
public:
    EmpleadoVendedor(long cuil, char * nombre, char * apellido, double montoFijo, double montoVendido);
    double calculaSueldo();
};

#endif // EMPLEADOVENDEDOR_H
