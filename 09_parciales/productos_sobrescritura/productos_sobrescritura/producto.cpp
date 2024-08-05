#include "producto.h"
#include <iostream>

Producto::Producto(const std::string& nombre, double precioActual)
    : nombre(nombre), precioActual(precioActual), precioAjustado(precioActual) {}

void Producto::imprimir() const {
    std::cout << "Nombre: " << nombre << ", Precio Actual: " << precioActual << ", Precio Ajustado: " << precioAjustado << std::endl;
}

std::string Producto::getNombre()
{
    return this->nombre;
}
