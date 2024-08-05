#include "doblementeenlazada.h"

template <typename T>
DoblementeEnlazada<T>::DoblementeEnlazada(){
    head = nullptr;
    tail = nullptr;
    size = 0;
}

// a. Saber cuántos elementos tiene.
template <typename T>
int DoblementeEnlazada<T>::getSize() {
    return size;
}

// b. Agregar un elemento.
template <typename T>
void DoblementeEnlazada<T>::addElement(T value) {
    Nodo<T>* newNode = new Nodo<T>(value);
    if (head == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    size++;
}

// c. Imprimir la lista del primero al último.
template <typename T>
void DoblementeEnlazada<T>::impPrimeroUltimo() {
        Nodo<T>* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

// d. Imprimir la lista del último al primero.
template <typename T>
void DoblementeEnlazada<T>::impUltimoPrimero() {
        Nodo<T>* current = tail;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->prev;
        }
        std::cout << std::endl;

}


