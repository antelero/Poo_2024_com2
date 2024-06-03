#include <iostream>
#include <oracion.h>

using namespace std;

int main()
{
    Oracion * ora = new Oracion("Es una oracion");
    cout << " "<< ora->getCantidad() << endl;
    cout <<" "<< ora->getCantLetras()<< endl;
    cout << *ora << endl;


    Oracion * otraOra = new Oracion("Es otra una oracion");
    cout << " "<< otraOra->getCantidad() << endl;
    cout <<" "<< otraOra->getCantLetras()<< endl;
    cout << *otraOra << endl;
    return 0;
}
