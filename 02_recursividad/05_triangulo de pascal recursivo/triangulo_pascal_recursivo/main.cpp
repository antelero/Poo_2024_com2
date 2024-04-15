#include <iostream>
using namespace std;

// Función recursiva para calcular el valor en la posición (fila, columna) del triángulo de Pascal
int calcularValorPascal(int fila, int columna) {
    // Caso base: los bordes del triángulo de Pascal son siempre 1
    if (columna == 1 || columna == fila) {
        return 1;
    } else {
        // El valor es la suma de los dos valores superiores
        return calcularValorPascal(fila - 1, columna - 1) + calcularValorPascal(fila - 1, columna);
    }
}

int main() {
    // Ejemplo de uso
    int fila = 4;
    int columna = 2;
    int valor = calcularValorPascal(fila, columna);

    cout << "El valor en la fila " << fila << " y columna " << columna << " del triángulo de Pascal es: " << valor << endl;

    return 0;
}
