#include "jardin.h"


Jardin::Jardin(int codigo, string nombre, string marca, double precio)
    : Producto(codigo,nombre,marca,precio){}

void Jardin::actualizarPrecio(double){
    precio *= (1 + 0.10/12);
}

char Jardin::getTipo() const{
    return 'J';
}
