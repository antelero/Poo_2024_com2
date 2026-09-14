#ifndef JARDIN_H
#define JARDIN_H

#include "producto.h"

class Jardin : public Producto{
public:

    Jardin(int codigo,string nombre,string marca,double precio);

    void actualizarPrecio(double) override;

    char getTipo() const override;
};

#endif // JARDIN_H
