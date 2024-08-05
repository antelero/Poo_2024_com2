#ifndef ENVIOCOMUN_H
#define ENVIOCOMUN_H
#include <iostream>

#include "envio.h"

//Envíos comunes, los cuales tienen un monto fijo.

class EnvioComun : public Envio
{
private:

    double monto = 0;
public:
    EnvioComun(char * codigo, double montoFijo);
    double getMonto();
    friend std::ostream& operator<<(std::ostream& os, const EnvioComun& dt);
};

#endif // ENVIOCOMUN_H
