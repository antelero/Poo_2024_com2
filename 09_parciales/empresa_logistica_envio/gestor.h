#ifndef GESTOR_H
#define GESTOR_H

#include <envio.h>

class Gestor
{
private:
    Envio * envios[30];
    int cantidad=0;

public:
    Gestor();

    void addEnvio(Envio *env);
    int getCantidad() const;
    Envio *getEnvio(int pos);
};

#endif // GESTOR_H
