#ifndef PRODUCTO_NACIONAL_H
#define PRODUCTO_NACIONAL_H
#include <string>
#include "producto.h"
#include <iostream>
class ProductoNacional : public Producto {
private:
    void generarCodigoProducto();
    std::string getCodigoProducto() const;
public:
    ProductoNacional(const std::string& nombre, double precioActual);
    double calcularPrecioAjustado() const override;
    // Sobrecarga del operador <<
    friend std::ostream& operator<<(std::ostream& os, const ProductoNacional& producto);
};

#endif // PRODUCTO_NACIONAL_H
