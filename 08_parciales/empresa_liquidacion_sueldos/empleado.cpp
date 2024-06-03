#include "empleado.h"

Empleado::Empleado(long cuil, char * nombre, char * apellido)
{
    this->cuil = cuil;
    this->nombre = nombre;
    this->apellido=apellido;
}

long Empleado::getCuil()
{
    return this->cuil;
}

char *Empleado::getNombre()
{
     return this->nombre;
}

char *Empleado::getApellido()
{
     return this->apellido;
}
