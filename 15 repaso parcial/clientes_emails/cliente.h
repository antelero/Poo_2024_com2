#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cliente{
private:
    int id;
    string nombre;
    vector<string> emails;

public:
    Cliente(int id, string nombre);
    int getId() const;
    string getNombre() const;
    vector<string> getEmails() const;
    void agregarEmail(const string &mail);
    int cantidadEmails() const;
};

#endif // CLIENTE_H
