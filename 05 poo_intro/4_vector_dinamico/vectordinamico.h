#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H
#include <iostream>
using namespace std;

class VectorDinamico{
private:
    int *vec = new (int);
    int size;
public:
    VectorDinamico(int *vec, int size);
    //a) Saber cuantos elementos hay en el vector
    int getSize() const;
    //b) Agregar un elemento al vector
    void add(int);
    //c) Remover un elemento del vector
    void remove(int);
    //d) Calcular el promedio de los elementos
    float avg();
    //e) Saber el mayor elemento
    int max();
    //f) Saber el menor elemento
    int min();
    int find(int);


    const string toString();

};

#endif // VECTORDINAMICO_H
