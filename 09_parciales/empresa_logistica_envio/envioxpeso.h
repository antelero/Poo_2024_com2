#ifndef ENVIOXPESO_H
#define ENVIOXPESO_H
#include <iostream>
#include "envio.h"

//Envios por peso, es un monto fijo más un plus por peso del paquete

class EnvioXPeso : public Envio
{
private:
    double monto = 0;
    double peso = 0.0;
public:
    EnvioXPeso(char * codigo, double montoFijo, double peso);
    double getMonto() ;
    friend std::ostream& operator<<(std::ostream& os, const EnvioXPeso& dt);
};

#endif // ENVIOXPESO_H
