#include "envio.h"

double Envio::getMontoFijo() const
{
    return montoFijo;
}

char *Envio::getCodigo() const
{
    return codigo;
}

Envio::Envio(char * codigo, double montoFijo)
{
    this->codigo = codigo;
    this->montoFijo = montoFijo;
}
