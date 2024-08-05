#include <iostream>
#include "doblementeenlazada.cpp"

using namespace std;

int main()
{
    DoblementeEnlazada<int> deint;
    deint.addElement(5);
    deint.addElement(10);
    deint.addElement(15);
    deint.addElement(20);

    std::cout << "Elementos: " << deint.getSize() << std::endl;

    std::cout << "Primero -> ultimo: ";
    deint.impPrimeroUltimo();

    std::cout << "Ultimo -> primero: ";
    deint.impUltimoPrimero();

    DoblementeEnlazada<char> dechar;
    dechar.addElement('a');
    dechar.addElement('b');
    dechar.addElement('c');
    dechar.addElement('d');

    std::cout << "Elementos: " << dechar.getSize() << std::endl;

    std::cout << "Primero -> ultimo: ";
    dechar.impPrimeroUltimo();

    std::cout << "Ultimo -> primero: ";
    dechar.impUltimoPrimero();
    return 0;
}
