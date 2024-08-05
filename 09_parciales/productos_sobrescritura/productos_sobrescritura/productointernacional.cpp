#include "productointernacional.h"


ProductoInternacional::ProductoInternacional(const std::string& nombre, double precioActual, double porcentaje)
    : Producto(nombre, precioActual) {
    this->porcentaje = porcentaje;
}

double ProductoInternacional::calcularPrecioAjustado() const {
    return precioActual * this->porcentaje; // Aumento del 10% para productos nacionales
}

// Sobrecarga del operador <<
std::ostream& operator<<(std::ostream& os, const ProductoInternacional& producto) {
    os << "Producto: " << producto.nombre;// << " | " << producto.getCodigoProducto();
    return os;
}
