#include "persona.h"

Persona::Persona(std::string nombre, int edad, int dni){
    this->nombre = nombre;
    this->edad = edad;
    this->dni=dni;
}

// Sobrecarga del operador ++ para preincremento
//La función miembro Persona& operator++() incrementa la edad
//y retorna una referencia al objeto actual.
Persona& Persona::operator++() {
    ++edad;
    return *this;
}

// Sobrecarga del operador ++ para postincremento
//Crea una copia temporal del objeto, incrementa la edad
//y retorna la copia temporal.
Persona Persona::operator++(int) {
    Persona temp = *this;
    ++edad;
    return temp;
}

void Persona::mostrar() const {
    std::cout << "Nombre: " << nombre << " DNI: " << dni << ", Edad: " << edad << std::endl;
}
