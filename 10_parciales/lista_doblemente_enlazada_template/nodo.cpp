#include "nodo.h"
template <typename T>
Nodo<T>::Nodo()
{

}
template <typename T>
Nodo<T>::Nodo(T value) : data(value), next(nullptr), prev(nullptr) {}
