#ifndef ENVIOCERTIFICADO_H
#define ENVIOCERTIFICADO_H

#include <iostream>
#include "envio.h"

//Envíos certificados, es un monto fijo, más un seguro por kilómetros.

class EnvioCertificado : public Envio
{
private:
    int km = 0;
    double monto = 0;
public:
    EnvioCertificado(char * codigo, double montoFijo, int km);
    double getMonto() ;

    friend std::ostream& operator<<(std::ostream& os, const EnvioCertificado& dt);
};

#endif // ENVIOCERTIFICADO_H
