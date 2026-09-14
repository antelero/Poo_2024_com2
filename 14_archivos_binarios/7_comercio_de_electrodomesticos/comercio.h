#ifndef COMERCIO_H
#define COMERCIO_H
#include <iomanip>
#include "producto.h"
#include <vector>
#include <fstream>
#include <cstring>

struct ProductoBin{
    int codigo;
    char nombre[50];
    char marca[20];
    char tipo;      // N = Nacional, I = Importado, J = Jardín
    double precio;
};


class Comercio{

private:

    vector<Producto*> productos;

public:
    ~Comercio(){
        for(auto p : productos)
            delete p;
    }
    void leerArchivo(const string &archivo);
    void actualizarProductos(double porcentajeDolar);
    void guardarArchivo(const string &archivo);
    void listarProductos() const;
    void crearProductos();
};

#endif // COMERCIO_H
