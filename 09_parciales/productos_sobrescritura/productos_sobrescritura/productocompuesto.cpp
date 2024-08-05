#include "productocompuesto.h"


// Constructor
ProductoCompuesto::ProductoCompuesto(const std::string& nombre) : Producto(nombre, 0) {
    for(int i = 0; i < 10; i++) {
        productos[i] = nullptr;
    }
}

// Destructor
ProductoCompuesto::~ProductoCompuesto() {
    for(int i = 0; i < cantidad; i++) {
        delete productos[i];
    }
}

// Calcular Precio Ajustado
double ProductoCompuesto::calcularPrecioAjustado() const {
    double precioTotal = 0.0;
    for(int i = 0; i < cantidad; i++) {
        if (productos[i] != nullptr) {
            precioTotal += productos[i]->calcularPrecioAjustado();
        }
    }
    return precioTotal;
}

// Agregar Producto
void ProductoCompuesto::agregarProducto(Producto* producto) {
    if (cantidad < 10) {
        productos[cantidad] = producto;
        cantidad++;
    }
}

// Obtener Tamaño
int ProductoCompuesto::getSize() {
    return cantidad;
}

// Sobrecarga del operador <<
std::ostream& operator<<(std::ostream& os, const ProductoCompuesto& producto) {
    os << "Producto: " << producto.nombre;// << " | " << producto.getCodigoProducto();
    return os;
}
