#ifndef COMENTARIO_H
#define COMENTARIO_H
#include <vector>
#include <string>

class Comentario
{
private:
    std::string comentario;
    int puntaje=0;
    std::vector<Comentario *> subcomentarios;
public:
    Comentario(std::string comentario,int puntaje);
    int getPuntaje() const {
            return puntaje;
        }


};

#endif // COMENTARIO_H
