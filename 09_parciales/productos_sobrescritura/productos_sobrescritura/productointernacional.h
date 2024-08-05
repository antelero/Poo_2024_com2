#ifndef PRODUCTOINTERNACIONAL_H
#define PRODUCTOINTERNACIONAL_H
#include <string>
#include "producto.h"
#include <iostream>
class ProductoInternacional : public Producto
{
private:
    double porcentaje;
    void generarCodigoProducto();
    std::string getCodigoProducto() const;
public:
    ProductoInternacional(const std::string& nombre, double precioActual, double porcentaje);
    double calcularPrecioAjustado() const override;
    // Sobrecarga del operador <<
    friend std::ostream& operator<<(std::ostream& os, const ProductoInternacional& producto);
};

#endif // PRODUCTOINTERNACIONAL_H


