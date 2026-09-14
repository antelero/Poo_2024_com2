#include "producto.h"



Producto::Producto(int codigo, string nombre, string marca, double precio)
    : codigo(codigo), nombre(nombre), marca(marca), precio(precio){}

double Producto::getPrecio() const{
    return precio;
}

int Producto::getCodigo() const{
    return codigo;
}

string Producto::getNombre() const{
    return nombre;
}

string Producto::getMarca() const{
    return marca;
}
