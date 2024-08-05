#include "doblementeenlazada.h"

DoblementeEnlazada::DoblementeEnlazada(): head(nullptr), tail(nullptr), size(0) {}

// a. Saber cuántos elementos tiene.
int DoblementeEnlazada::getSize() {
    return size;
}

// b. Agregar un elemento.
void DoblementeEnlazada::addElement(int value) {
    Nodo* newNode = new Nodo(value);
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
    void DoblementeEnlazada::impPrimeroUltimo() {
        Nodo* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // d. Imprimir la lista del último al primero.
    void DoblementeEnlazada::impUltimoPrimero() {
        Nodo* current = tail;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->prev;
        }
        std::cout << std::endl;
    }


