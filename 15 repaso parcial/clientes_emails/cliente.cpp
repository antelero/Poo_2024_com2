#include "cliente.h"

Cliente::Cliente(int id, string nombre)
    : id(id), nombre(nombre){}

int Cliente::getId() const {
    return this->id;
}

string Cliente::getNombre() const {
    return this->nombre;
}

vector<string> Cliente::getEmails() const{
    return this->emails;
}

void Cliente::agregarEmail(const string &mail){
    this->emails.push_back(mail);
}

int Cliente::cantidadEmails() const{
    return this->emails.size();
}
