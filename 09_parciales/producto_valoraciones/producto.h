#ifndef PRODUCTO_H
#define PRODUCTO_H
#include "comentario.h"
#include <vector>
class Producto
{
private:
    std::string nombre;
    std::vector<Comentario> comments; //coments<*Comentario>; // * comentario = new Comentario("aaaaaaaaaaaaaaa1", 5);
public:
    Producto();

    void agregarComentario(Comentario& comentario);
    const std::string &getNombre() const;
    Producto(const std::string &nombre);
    //void agregarComentario(Comentario comentario);
    const std::string &getNombre();
    const std::vector<Comentario> getComentarios();
    std::vector<Comentario> getComments() const;
};

#endif // PRODUCTO_H
