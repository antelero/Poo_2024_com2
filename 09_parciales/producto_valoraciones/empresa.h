#ifndef EMPRESA_H
#define EMPRESA_H
#include <vector>

#include "producto.h"

class Empresa
{
private:
    std::string nombre;
    std::vector<Producto*> Productos;
public:
    Empresa();
    std::vector<Producto*> leerArchivo();
    int getSize();
};

#endif // EMPRESA_H
