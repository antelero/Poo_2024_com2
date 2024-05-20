#include <iostream>
#include "vectordinamico.h"
using namespace std;
/*

4. Realice una clase VectorDinamico que permita representar un vector dínamico de enteros.
Esta clase debe permitir:
a) Saber cuantos elementos hay en el vector
b) Agregar un elemento al vector
c) Remover un elemento del vector
d) Calcular el promedio de los elementos
e) Saber el mayor elemento
f) Saber el menor elemento

*/
int main(){
    int vec[] = {5, 1, 2, 3, 1};
    VectorDinamico vec1 = VectorDinamico(vec, 5);
    cout << vec1.toString() << "Size: " << vec1.getSize() << endl;
    vec1.add(3);
    //vec1.add(4);
    cout << vec1.toString() << "Size: " << vec1.getSize() << endl;
    vec1.add(4);
    cout << vec1.toString() << "Size: " << vec1.getSize() << endl;
    vec1.remove(4);
    cout << vec1.toString() << "Size: " << vec1.getSize() << endl;
    cout << vec1.toString() << "AVG: " <<  vec1.avg() << endl;
    cout << vec1.toString() << "Max: " <<  vec1.max() << endl;
    cout << vec1.toString() << "Min: " <<  vec1.min() << endl;
    return 0;
}
