#ifndef EMPLEADO_H
#define EMPLEADO_H


class Empleado
{
private:
    long cuil;
    char * nombre;
    char * apellido;

public:    
    Empleado(long cuil, char * nombre, char * apellido);
    long getCuil();
    char * getNombre();
    char * getApellido();
    virtual double calculaSueldo()=0;
};

#endif // EMPLEADO_H

