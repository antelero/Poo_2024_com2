#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto {
public:
    Producto(const std::string& nombre, double precioActual);
    virtual ~Producto() {}

    virtual double calcularPrecioAjustado() const = 0;
    virtual void imprimir() const;
    std::string getNombre();
protected:
    std::string nombre;
    double precioActual;
    double precioAjustado;
};

#endif // PRODUCTO_H
