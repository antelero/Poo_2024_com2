#include "oracion.h"

int Oracion::getCantidad() const
{
    int cant = 0;
    while (oracion[cant] != '\0')
    {
        cant++;
    };
    return cant;
}

int Oracion::getCantLetras() const
{
    int cant = 0;
    int cantLetras = 1;
    while (oracion[cant] != '\0')
    {
        if(oracion[cant]==' ')
           cantLetras++;
        cant++;
    };
    return cantLetras;
}

char *Oracion::getOracion() const
{
    return this->oracion;
}

Oracion::Oracion(char * orac)
{
    this->oracion = orac;
}

ostream& operator<<(ostream& os, const Oracion& oraci)
{
    os << oraci.getOracion();
    return os;
}
