#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>

class Persona {
private:
    std::string nombre;
    int edad;
    int dni;
public:
    Persona(std::string nombre, int edad, int dni);

    //++ Preincremento
    Persona& operator++();

    //++ Postincremento
    Persona operator++(int);

    void mostrar() const;
};

#endif // PERSONA_H
