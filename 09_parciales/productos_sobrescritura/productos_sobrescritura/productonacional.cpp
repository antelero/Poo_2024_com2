#include "productonacional.h"

ProductoNacional::ProductoNacional(const std::string& nombre, double precioActual)
    : Producto(nombre, precioActual) {}

double ProductoNacional::calcularPrecioAjustado() const {
    return precioActual * 1.1; // Aumento del 10% para productos nacionales
}


// Sobrecarga del operador <<
std::ostream& operator<<(std::ostream& os, const ProductoNacional& producto) {
    os << "Producto: " << producto.nombre;// << " | " << producto.getCodigoProducto();
    return os;
}
