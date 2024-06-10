#include <iostream>

#include "producto.h"
#include <map>
#include "empresa.h"

using namespace std;

int main()
{
    cout << "x1 " << endl;
    Empresa * emp = new Empresa();
    cout << "x2 " << endl;
    emp->leerArchivo();

    cout << "xxxx " << emp->getSize() << endl;
    /*std::map<std::string, int> totalPuntajes;
    std::map<std::string, int> totalComentarios;
    std::map<std::string, int> totalComentariosNegativos;
    */

    cout << "Salio " << endl;
    return 0;
}
