#include "envioxpeso.h"

EnvioXPeso::EnvioXPeso(char * codigo, double montoFijo, double peso): Envio(codigo, montoFijo)
{
    this->peso = peso;
}

double EnvioXPeso::getMonto()
{
    this->monto = getMontoFijo() + (peso  * 50);
    return this->monto;
}
std::ostream& operator<<(std::ostream& os, const EnvioXPeso& dt)
{
    os << "Codigo "<< dt.getCodigo() << " Monto " << dt.monto;
    return os;
}
