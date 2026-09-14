#include "sistemamarketing.h"
#include <iostream>

using namespace std;

int main(){

    SistemaMarketing sistema;

    sistema.crearDatos(); //Crear ambos archivos
    sistema.leerClientes("clientes.dat");
    sistema.leerEmails("emails.dat");

    sistema.generarMensajes();
    sistema.listarClientes();
    cout << "Total de emails: "
         << sistema.totalEmails()
         << endl;
    vector<string> rep = sistema.emailsRepetidos();
    cout << "\nEmails repetidos:\n";
    for (const auto &mail : rep)
        cout << " - " << mail << endl;

    vector<Cliente> sinMail = sistema.clientesSinMail();

    cout << "\nClientes sin email:\n";
    for (const auto &c : sinMail)
    {
        cout << c.getId() << " - " << c.getNombre() << endl;
    }
    return 0;
}
