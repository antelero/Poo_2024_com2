#include <iostream>
#include "doblementeenlazada.h"

using namespace std;

int main()
{
    DoblementeEnlazada dl;
    dl.addElement(5);
    dl.addElement(10);
    dl.addElement(15);
    dl.addElement(20);

    std::cout << "Elementos: " << dl.getSize() << std::endl;

    std::cout << "Primero -> ultimo: ";
    dl.impPrimeroUltimo();

    std::cout << "Ultimo -> primero: ";
    dl.impUltimoPrimero();

    return 0;
}
