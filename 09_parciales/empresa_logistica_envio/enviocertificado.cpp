#include "enviocertificado.h"

EnvioCertificado::EnvioCertificado(char * codigo, double montoFijo, int km): Envio (codigo,montoFijo)
{
    this->km = km;
}



double EnvioCertificado::getMonto()
{
    this->monto  = getMontoFijo() + (km  * 10);
    return this->monto;
}

std::ostream& operator<<(std::ostream& os, const EnvioCertificado& dt)
{
    os << "Codigo "<< dt.getCodigo() << " Monto " << dt.monto;
    return os;
}
