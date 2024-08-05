#ifndef NODO_H
#define NODO_H


template <typename T>
class Nodo
{
public:
    Nodo();

    T data;
    Nodo* next;
    Nodo* prev;

    Nodo(T value);
};

#endif // NODO_H
