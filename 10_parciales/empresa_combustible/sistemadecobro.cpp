#include "sistemadecobro.h"

SistemaDeCobro::SistemaDeCobro() : size(0), capacity(1) {
    clientes = new Cliente*[capacity];
}

SistemaDeCobro::~SistemaDeCobro() {
    for (int i = 0; i < size; ++i) {
        delete clientes[i];
    }
    delete[] clientes;
}

int SistemaDeCobro::getSize() const
{
    return size;
}

void SistemaDeCobro::expandCapacity() {
    capacity += 1; // Incrementar de a uno
    Cliente** newClientes = new Cliente*[capacity];
    for (int i = 0; i < size; ++i) {
        newClientes[i] = clientes[i];
    }
    delete[] clientes;
    clientes = newClientes;
}

void SistemaDeCobro::agregarCliente(Cliente* cliente) {
    if (size == capacity) {
        expandCapacity();
    }
    clientes[size++] = cliente;
}

void SistemaDeCobro::ordenarClientesPorMonto() {
    // Implementación de ordenamiento por burbuja
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (clientes[j]->calcularMontoAPagar() < clientes[j + 1]->calcularMontoAPagar()) {
                Cliente* temp = clientes[j];
                clientes[j] = clientes[j + 1];
                clientes[j + 1] = temp;
            }
        }
    }
}

void SistemaDeCobro::imprimirClientes() {
    ordenarClientesPorMonto();
    for (int i = 0; i < size; ++i) {
        std::cout << *clientes[i] << "\n";
    }
}

void SistemaDeCobro::guardarEnArchivoBinario(const char* filename) {
    std::ofstream file(filename, std::ios::binary);
    for (int i = 0; i < size; ++i) {
        file.write(reinterpret_cast<char*>(clientes[i]), sizeof(*clientes[i]));
    }
    file.close();
}

Cliente* SistemaDeCobro::getCliente(int index) const {
        if (index < 0 || index >= this->size) return nullptr;
        return clientes[index];
    }
