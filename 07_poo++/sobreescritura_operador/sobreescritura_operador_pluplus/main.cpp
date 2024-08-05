#include "persona.h"

int main() {
    Persona persona("Juan Perez", 30, 25907280);

    std::cout << "Inicial: ";
    persona.mostrar();

    ++persona; // Pre-incremento
    std::cout << "Luego del preincremento: ";
    persona.mostrar();

    persona++; // Post-incremento
    std::cout << "Luego del postincremento: ";
    persona.mostrar();

    return 0;
}
