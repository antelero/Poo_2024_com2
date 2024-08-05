#ifndef ENVIO_H
#define ENVIO_H


class Envio
{
private:
    char * codigo;
    double montoFijo = 0;
public:
    Envio(char * codigo, double montoFijo);

    virtual double getMonto()=0;
    double getMontoFijo() const;
    char *getCodigo() const;
};

#endif // ENVIO_H
