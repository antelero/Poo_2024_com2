#ifndef PRODUCTO_COMPUESTO_H
#define PRODUCTO_COMPUESTO_H

#include "producto.h"
#include <string>
#include <iostream>

class ProductoCompuesto : public Producto {
private:
    Producto *productos[50];
    int cantidad = 0;

public:
    ProductoCompuesto(const std::string& nombre);
    ~ProductoCompuesto();
    double calcularPrecioAjustado()  const override ;
    void agregarProducto(Producto* producto);
    void removerProducto(int indice);
    int getSize();

    void generarCodigoProducto();
    std::string getCodigoProducto() const;

    // Sobrecarga del operador <<
    friend std::ostream& operator<<(std::ostream& os, const ProductoCompuesto& producto);
};

#endif // PRODUCTO_COMPUESTO_H
