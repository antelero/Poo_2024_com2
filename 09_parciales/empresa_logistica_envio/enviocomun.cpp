#include "enviocomun.h"

EnvioComun::EnvioComun(char * codigo, double montoFijo): Envio (codigo, montoFijo)
{

}

double EnvioComun::getMonto()
{
    this->monto = this->getMontoFijo();
    return this->monto;
}
std::ostream& operator<<(std::ostream& os, const EnvioComun& dt)
{
    os << "Codigo "<< dt.getCodigo() << " Monto " << dt.monto;
    return os;
}
