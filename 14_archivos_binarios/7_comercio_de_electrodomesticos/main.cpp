#include "comercio.h"
#include <iostream>

using namespace std;

int main(){

    Comercio comercio;
    //comercio.crearProductos();
    comercio.leerArchivo("productos.dat");
    comercio.listarProductos();
    double aumentoDolar;

    cout << "Ingrese porcentaje de aumento del dolar: ";
    cin >> aumentoDolar;

    comercio.actualizarProductos(aumentoDolar);

    comercio.guardarArchivo("productos.dat");
    comercio.listarProductos();
    cout << "Precios actualizados correctamente." << endl;

    return 0;
}
