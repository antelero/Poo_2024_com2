#ifndef CLIENTEPEQUENO_H
#define CLIENTEPEQUENO_H

#include "cliente.h"

class ClientePequeno : public Cliente {
public:
    ClientePequeno(int id, const char* nombre, int litrosConsumidos);
    double calcularMontoAPagar() const override;
};

#endif // CLIENTEPEQUENO_H
