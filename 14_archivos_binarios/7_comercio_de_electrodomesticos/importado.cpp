#include "importado.h"


Importado::Importado(int codigo, string nombre, string marca, double precio)
    : Producto(codigo,nombre,marca,precio){}

void Importado::actualizarPrecio(double dolar){
    precio *= (1 + dolar/100.0);
}

char Importado::getTipo() const{
    return 'I';
}
