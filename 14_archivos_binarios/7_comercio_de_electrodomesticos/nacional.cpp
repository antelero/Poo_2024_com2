#include "nacional.h"

Nacional::Nacional(int codigo, string nombre, string marca, double precio)
    : Producto(codigo,nombre,marca,precio){}

void Nacional::actualizarPrecio(double){
    precio *= 1.02;          // +2%
}

char Nacional::getTipo() const{
    return 'N';
}
