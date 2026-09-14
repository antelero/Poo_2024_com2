#include "sistemamarketing.h"

void SistemaMarketing::crearDatos()
{
    ofstream fc("clientes.dat", ios::binary);
    if (!fc) {
        cout << "Error al crear clientes.dat" << endl;
        return;
    }
    vector<Cliente> clis;
    clis.emplace_back(1, "Uno");
    clis.emplace_back(2, "Dos");
    clis.emplace_back(3, "Tres");
    clis.emplace_back(4, "Cuatro");
    ClienteBin reg;
    for (const auto &cliente : clis)
    {
        reg.id = cliente.getId();
        // Copiar el nombre al arreglo de 200 caracteres
        strncpy(reg.nombre, cliente.getNombre().c_str(), sizeof(reg.nombre) - 1);
        fc.write((char*)(&reg), sizeof(reg));
    }
    fc.close();
    cout << "Archivo clientes.dat creado correctamente." << endl;
    ofstream f("emails.dat", ios::binary);
    if (!f) {
        cout << "Error al crear emails.dat" << endl;
        return;
    }
    vector<EmailBin> emails = {
        {1, "uno@gmail.com"},
        {1, "uno@yahoo.com"},
        {2, "dos@gmail.com"},
        {2, "dos@gmail.com"},
        {3, "tres@gmail.com"},
        {3, "tres@hotmail.com"},
        {3, "tres@empresa.com"}
    };
    for (const auto &e : emails)
    {
        EmailBin reg;
        reg.id_cliente = e.id_cliente;
        strncpy(reg.email, e.email, sizeof(reg.email) - 1);
        f.write((char*)(&reg), sizeof(reg));
    }
    f.close();
    cout << "Archivo emails.dat creado correctamente." << endl;
}

void SistemaMarketing::leerClientes(const string &archivo){
    ifstream f(archivo, ios::binary);
    ClienteBin reg;
    while(f.read((char*)&reg, sizeof(reg))){
        clientes.emplace_back(reg.id, reg.nombre);
    }
    f.close();
}

void SistemaMarketing::leerEmails(const string &archivo)
{
    ifstream f("emails.dat", ios::binary);
    if (!f)
    {
        cout << "Error al abrir emails.dat" << endl;
        return;
    }
    EmailBin reg;
    while (f.read((char*)&reg, sizeof(reg)))
    {
        for (auto &c : clientes)
        {
            if (c.getId() == reg.id_cliente)
            {
                c.agregarEmail(reg.email);
                break;
            }
        }
    }
    f.close();
}
vector<Cliente> SistemaMarketing::getClientes(){
    return clientes;
}

void SistemaMarketing::generarMensajes(){

    for(const auto &cliente : this->clientes){

        for(const auto &mail : cliente.getEmails()){

            ofstream archivo(mail + ".txt");

            archivo << "Hola "
                    << cliente.getNombre()
                    << "! Bienvenido al sistema de notificaciones.";

            archivo.close();
        }

    }

}

void SistemaMarketing::listarClientes() const
{
    cout << "\n===== LISTADO DE CLIENTES =====\n";

    for (const auto &cliente : clientes)
    {
        cout << "ID: " << cliente.getId()
             << " - Nombre: " << cliente.getNombre() << endl;

        if (cliente.getEmails().empty())
        {
            cout << "   Sin emails cargados." << endl;
        }
        else
        {
            cout << "   Emails:" << endl;

            for (const auto &mail : cliente.getEmails())
            {
                cout << "      - " << mail << endl;
            }
        }

        cout << "----------------------------------------" << endl;
    }
}

vector<Cliente> SistemaMarketing::clientesConMasEmails(){

    auto maximo = max_element(
                clientes.begin(),
                clientes.end(),
                [](const Cliente &a, const Cliente &b){
        return a.cantidadEmails() < b.cantidadEmails();
    });

    vector<Cliente> resultado;

    if(maximo == clientes.end())
        return resultado;

    int mayor = maximo->cantidadEmails();

    copy_if(clientes.begin(), clientes.end(),
            back_inserter(resultado),
            [mayor](const Cliente &c){
        return c.cantidadEmails() == mayor;
    });

    return resultado;
}

vector<string> SistemaMarketing::emailsRepetidos()
{
    vector<string> resultado;
    map<string, int> contador;
    for (auto &cliente : clientes)
    {
        for (auto &mail : cliente.getEmails())
        {
            contador[mail]++;
        }
    }
    for (auto &e : contador)
    {
        if (e.second > 1)
        {
            resultado.emplace_back(e.first);
            //resultado.emplace(e.first);
        }
    }
    return resultado;
}

vector<Cliente> SistemaMarketing::clientesSinMail(){

    vector<Cliente> resultado;

    copy_if(clientes.begin(),
            clientes.end(),
            back_inserter(resultado),
            [](const Cliente &c){
        return c.cantidadEmails() == 0;
    });

    return resultado;
}

int SistemaMarketing::totalEmails(){
    vector<int> cantidades;

    transform(clientes.begin(),
              clientes.end(),
              back_inserter(cantidades),
              [](const Cliente &c){
        return c.cantidadEmails();
    });

    return accumulate(cantidades.begin(),
                      cantidades.end(),
                      0);
}
