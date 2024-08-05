#ifndef CLIENTEMEDIANO_H
#define CLIENTEMEDIANO_H

#include "Cliente.h"

class ClienteMediano : public Cliente {
public:
    ClienteMediano(int id, const char* nombre, int litrosConsumidos);
    double calcularMontoAPagar() const override;
};

#endif // CLIENTEMEDIANO_H
