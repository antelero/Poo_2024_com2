#ifndef PRODUCTO_H
#define PRODUCTO_H


#include <iostream>
#include <string>
using namespace std;

class Producto{
protected:
    int codigo;
    string nombre;
    string marca;
    double precio;

public:
    Producto(int codigo, string nombre, string marca, double precio);
    virtual void actualizarPrecio(double porcentajeDolar)=0;
    virtual char getTipo() const =0;
    double getPrecio() const;
    int getCodigo() const;
    string getNombre() const;
    string getMarca() const;
    virtual ~Producto(){}
};

#endif // PRODUCTO_H
