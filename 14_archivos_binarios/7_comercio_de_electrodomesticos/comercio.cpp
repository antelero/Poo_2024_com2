#include "comercio.h"
#include "importado.h"
#include "jardin.h"
#include "nacional.h"

void Comercio::leerArchivo(const string &archivo){
    ifstream f(archivo, ios::binary);
    ProductoBin reg;
    while(f.read((char*)&reg,sizeof(reg))){
        switch(reg.tipo){
            case 'N':
                productos.push_back(
                    new Nacional(reg.codigo,reg.nombre,reg.marca,reg.precio));
                break;
            case 'I':
                productos.push_back(
                    new Importado(reg.codigo,reg.nombre,reg.marca,reg.precio));
                break;
            case 'J':
                productos.push_back(
                    new Jardin(reg.codigo,reg.nombre,reg.marca,reg.precio));
                break;
        }
    }
    f.close();
}

void Comercio::actualizarProductos(double porcentajeDolar){
    for(auto p : productos){
        p->actualizarPrecio(porcentajeDolar);
    }
}

void Comercio::guardarArchivo(const string &archivo){
    ofstream f(archivo, ios::binary);
    ProductoBin reg;
    for(auto p : productos){
        reg.codigo = p->getCodigo();
        memset(reg.marca,0,sizeof(reg.marca));
        strncpy(reg.nombre,p->getNombre().c_str(),49);
        strncpy(reg.marca,p->getMarca().c_str(),19);
        reg.tipo = p->getTipo();
        reg.precio = p->getPrecio();
        f.write((char*)&reg,sizeof(reg));
    }
    f.close();
}

void Comercio::listarProductos() const
{
    cout << left
         << setw(8)  << "CODIGO"
         << setw(30) << "NOMBRE"
         << setw(15) << "MARCA"
         << setw(8)  << "TIPO"
         << right << setw(12) << "PRECIO" << endl;

    cout << string(75, '-') << endl;

    for (auto p : productos)
    {
        cout << left
             << setw(8)  << p->getCodigo()
             << setw(30) << p->getNombre()
             << setw(15) << p->getMarca()
             << setw(8)  << p->getTipo()
             << right << fixed << setprecision(2)
             << setw(12) << p->getPrecio()
             << endl;
    }
}

void Comercio::crearProductos()
{
    ofstream f("productos.dat", ios::binary);
    if (!f) {
        cout << "Error al crear productos.dat" << endl;
        return;
    }
    vector<ProductoBin> productos = {
        {1001, "Heladera No Frost", "BGH", 'N', 850000},
        {1002, "Lavarropas Automatico", "Drean", 'N', 620000},
        {1003, "Cocina Multigas", "Escorial", 'N', 390000},

        {2001, "Smart TV 55 Pulgadas", "Samsung", 'I', 980000},
        {2002, "Microondas Digital", "LG", 'I', 280000},
        {2003, "Aire Acondicionado Inverter", "Philips", 'I', 1150000},

        {3001, "Cortadora de Cesped", "Black+Decker", 'J', 340000},
        {3002, "Bordeadora Electrica", "Gamma", 'J', 175000},
        {3003, "Motosierra", "Stihl", 'J', 560000},
        {3004, "Hidrolavadora", "Karcher", 'J', 420000}
    };
    for (const auto &p : productos)
    {
        ProductoBin reg = p;
        f.write((char*)(&reg), sizeof(reg));
    }
    f.close();
    cout << "Archivo productos.dat creado con "
         << productos.size()
         << " productos." << endl;
}
