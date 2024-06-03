#ifndef LIQUIDADOR_H
#define LIQUIDADOR_H

#include <empleado.h>

class Liquidador
{
private:
    Empleado * empleados[50];
    int cantidad = 0;

public:
    Liquidador();
    void addEmpleado(Empleado * emp);
    Empleado * getEmpleado(int pos);
    int getCantidad() const;
};

#endif // LIQUIDADOR_H
