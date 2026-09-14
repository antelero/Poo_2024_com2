#ifndef SISTEMAMARKETING_H
#define SISTEMAMARKETING_H

#include "cliente.h"
#include <fstream>
#include <cstring>
#include <map>
#include <algorithm>
#include <numeric>
#include <set>

//Structs
struct ClienteBin{
    int id;
    char nombre[200];
};

struct EmailBin{
    int id_cliente;
    char email[200];
};


class SistemaMarketing{
private:
    vector<Cliente> clientes;
public:
    //Para generar un lote de prueba
    void crearDatos();

    void leerClientes(const string &archivo);
    void leerEmails(const string &archivo);

    vector<Cliente> getClientes();
    void generarMensajes();
    void listarClientes() const;

    //Punto 3
    //A) Cliente(s) con mayor cantidad de emails
    vector<Cliente> clientesConMasEmails();
    //B) Emails repetidos
    vector<string> emailsRepetidos();
    //C) Clientes sin email cargado
    vector<Cliente> clientesSinMail();
    //D) Total de emails utilizando transform y accumulate
    int totalEmails();
};

#endif // SISTEMAMARKETING_H
