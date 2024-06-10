#include "producto.h"
#include <string>
#include "comentario.h"


Producto::Producto()
{

}
Producto::Producto(const std::string& nombre)
{
    this->nombre = nombre;
}

void Producto::agregarComentario(Comentario& comentario) {
    this->comments.push_back(comentario);
}

const std::string& Producto::getNombre()  {
    return nombre;
}

const std::vector<Comentario> Producto::getComentarios()  {
    return comments;
}
