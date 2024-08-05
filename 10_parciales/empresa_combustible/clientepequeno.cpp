#include "clientepequeno.h"

ClientePequeno::ClientePequeno(int id, const char* nombre, int litrosConsumidos)
    : Cliente(id, nombre, litrosConsumidos) {}

double ClientePequeno::calcularMontoAPagar() const {
    return litrosConsumidos * 220.0;
}
