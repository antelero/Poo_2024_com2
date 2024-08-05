#include "SistemaDeCobro.h"
#include "ClientePequeno.h"
#include "ClienteMediano.h"
#include "ClienteExtra.h"
#include <fstream>

Cliente* crearCliente(int id, const char* nombre, int litrosConsumidos) {
    if (litrosConsumidos < 1000) {
        return new ClientePequeno(id, nombre, litrosConsumidos);
    } else if (litrosConsumidos < 5000) {
        return new ClienteMediano(id, nombre, litrosConsumidos);
    } else {
        return new ClienteExtra(id, nombre, litrosConsumidos);
    }
}

int main() {
    SistemaDeCobro sistema;
    // Archivo de  "consumos.txt"
    std::ifstream infile("consumos.txt");
    if (!infile) {
        std::cerr << "Error al abrir el archivo TXT" << std::endl;
        return 1;
    }

    int id, litrosConsumidos;
    char nombre[250];

    while (infile >> id >> std::ws && infile.getline(nombre, 250) && infile >> litrosConsumidos) {
        Cliente* cliente = crearCliente(id, nombre, litrosConsumidos);
        sistema.agregarCliente(cliente);
    }

    infile.close();
    Cliente *pCli;

    int cantidad = sistema.getSize();
    std::cout << "imprime"<<std::endl;
    for(int i = 0; i < cantidad; i++) {
           pCli = sistema.getCliente(i);
           if (pCli) {
               std::cout << " Orden " << i << " ." << (*pCli) << std::endl;
           }
     };
   // sistema.guardarEnArchivoBinario("respaldo.bin");

    return 0;
}
