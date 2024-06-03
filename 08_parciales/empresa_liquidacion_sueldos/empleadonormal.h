#ifndef EMPLEADONORMAL_H
#define EMPLEADONORMAL_H
#include <empleado.h>

class EmpleadoNormal:public Empleado
{
private:
    double montoFijo;
public:
    EmpleadoNormal(long cuil, char * nombre, char * apellido, double montoFijo);
    double calculaSueldo();
};

#endif // EMPLEADONORMAL_H
