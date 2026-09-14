#ifndef IMPORTADO_H
#define IMPORTADO_H
#include "producto.h"

class Importado : public Producto{
public:

    Importado(int codigo,string nombre,string marca,double precio);

    void actualizarPrecio(double dolar) override;

    char getTipo() const override;
};

#endif // IMPORTADO_H
