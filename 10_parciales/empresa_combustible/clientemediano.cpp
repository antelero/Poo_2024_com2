#include "clientemediano.h"

ClienteMediano::ClienteMediano(int id, const char* nombre, int litrosConsumidos)
    : Cliente(id, nombre, litrosConsumidos) {}

double ClienteMediano::calcularMontoAPagar() const {
    return litrosConsumidos * 200.0;
}
