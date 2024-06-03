#include <iostream>
#include <liquidador.h>
#include <empleadonormal.h>
#include <empleadoencargadodepartamento.h>
#include <empleadovendedor.h>

using namespace std;

int main()
{
    Liquidador *liquidador = new Liquidador();
    EmpleadoNormal *leo= new EmpleadoNormal(25907286,"leo","brambi",1020.0);
    EmpleadoNormal *jose= new EmpleadoNormal(25907281,"jose","de ser",10070.0);

    liquidador->addEmpleado(leo);
    liquidador->addEmpleado(jose);

    EmpleadoEncargadoDepartamento *manu= new EmpleadoEncargadoDepartamento(25907282,"manu","gino",700, 5);
    EmpleadoEncargadoDepartamento *pepe= new EmpleadoEncargadoDepartamento(25907283,"pepe","mujica",4000,2);

    liquidador->addEmpleado(manu);
    liquidador->addEmpleado(pepe);

    EmpleadoVendedor *pepa= new EmpleadoVendedor(25907284,"pepa","pig",700,80);
    EmpleadoVendedor *rober= new EmpleadoVendedor(25907285,"rober","deniro",800,50);

    liquidador->addEmpleado(pepa);
    liquidador->addEmpleado(rober);

    int cantidad = liquidador->getCantidad();
    Empleado * gPtr;
    for(int i=0;i<cantidad;i++){
        //cout <<  i << " " << lis->getGasto(i)->descripcion()<< " " <<  lis->getGasto(i)->getImporte()<< endl;
        gPtr = (liquidador->getEmpleado(i));
        //gPtr = (g->getObjeto(i))->;

        cout<<  i << " - " << (gPtr->calculaSueldo()) << " - " << (gPtr->getApellido())<< " - " << (gPtr->getNombre())<< " - " << (gPtr->getCuil())<< endl;//area() <<endl;
        //cout << &gPtr << curso->getAlumno(i) << endl;

     };
    return 0;
}
