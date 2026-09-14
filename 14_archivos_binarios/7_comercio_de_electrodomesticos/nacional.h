#ifndef NACIONAL_H
#define NACIONAL_H
#include "producto.h"

class Nacional : public Producto{
public:

    Nacional(int codigo,string nombre,string marca,double precio);

    void actualizarPrecio(double) override;

    char getTipo() const override;
};
#endif // NACIONAL_H
