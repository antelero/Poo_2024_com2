#include "liquidador.h"

int Liquidador::getCantidad() const
{
    return cantidad;
}

Liquidador::Liquidador()
{

}

void Liquidador::addEmpleado(Empleado *emp)
{
    if (this->cantidad<50)
    {
        this->empleados[cantidad] = emp;
        this->cantidad++;
    }
}

Empleado * Liquidador::getEmpleado(int pos)
{
    return empleados[pos];
}
