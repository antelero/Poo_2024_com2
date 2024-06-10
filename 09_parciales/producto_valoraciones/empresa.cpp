#include "empresa.h"
#include <fstream>
#include <iostream>


Empresa::Empresa()
{

}

std::vector<Producto *> Empresa::leerArchivo()
{
    std::ifstream archivo("debug/test.txt");
    std::string linea;    
    Producto* productoActual = nullptr;

    std::cout << "-" <<std::endl;
    if (archivo.is_open()) {
        std::cout << "Opening file" <<std::endl;
        while (std::getline(archivo, linea)) {
            if (linea.empty()) {
                std::cout << "Blanco" <<std::endl;
                continue;
            };
            if (linea[0] != '-') {
                if (productoActual) {
                    Productos.push_back(productoActual);
                    productoActual = nullptr;
                }
                // Es un nombre de producto
                productoActual = new Producto(linea);
                std::cout << "Producto: " << productoActual->getNombre() << std::endl;
            } else if (productoActual) {
                std::cout << "Comentario: " << linea << std::endl;
                int puntaje;
                std::string comentarioTexto;
                size_t nivel = linea.find_first_not_of('-');
                size_t pos = linea.find(':');
                if (pos != std::string::npos) {
                    comentarioTexto = linea.substr(nivel, pos - nivel);
                    puntaje = std::stoi(linea.substr(pos + 1));
                } else {
                    comentarioTexto = linea.substr(nivel);
                    puntaje = 0;
                }
                //std::cout << "Crea Comentario: " << comentarioTexto << std::endl;
                Comentario comentario(comentarioTexto, puntaje);
                productoActual->agregarComentario(comentario);
                //std::cout << productoActual->getComentarios().size() << "Agrega Comentario: " << comentarioTexto << std::endl;
            }
        } //while
        archivo.close();

    } else {
        // show message:
        std::cout << "Error opening file"<<std::endl;
     }
};

int Empresa::getSize()
{
    return Productos.size();
};

