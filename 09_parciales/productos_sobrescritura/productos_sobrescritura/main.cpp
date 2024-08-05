#include <iostream>
#include <producto.h>
#include <productonacional.h>
#include <productocompuesto.h>
#include <productointernacional.h>
using namespace std;

int main()
{
    Producto *productos[50];

    Producto *productoNacA = new ProductoNacional("Producto Nac A", 50);
    Producto *productoNacB = new ProductoNacional("Producto Nac B", 100);
    Producto *productoNacC = new ProductoNacional("Producto Nac C", 150);
    Producto *productoNacD = new ProductoNacional("Producto Nac D", 200);

    productos[0] = productoNacA;
    productos[1] = productoNacB;
    productos[2] = productoNacC;
    productos[3] = productoNacD;

    Producto *productoIntA = new ProductoInternacional("Producto Int A", 50, 10);
    Producto *productoIntB = new ProductoInternacional("Producto Int B", 100, 10);
    Producto *productoIntC = new ProductoInternacional("Producto Int C", 150, 10);
    Producto *productoIntD = new ProductoInternacional("Producto Int D", 200, 10);

    productos[4] = productoIntA;
    productos[5] = productoIntB;
    productos[6] = productoIntC;
    productos[7] = productoIntD;
    cout << "Hello World!" << endl;

   // Producto *productoCompA;
    ProductoCompuesto *productoCompA = new ProductoCompuesto("Compuesto A");
    productoCompA->agregarProducto(productoNacA);
    productoCompA->agregarProducto(productoIntA);

    productos[8] = productoCompA;

    // Producto *productoCompB;
    ProductoCompuesto *productoCompB = new ProductoCompuesto("Compuesto B");
    productoCompB->agregarProducto(productoNacB);
    productoCompB->agregarProducto(productoIntB);
    productos[9] = productoCompB;
    Producto *producto;
    for (int i=0; i<=9; i++)
    {
        cout << "Precio ajustado: " << (productos[i])->calcularPrecioAjustado() << endl;
    };
    return 0;
}
