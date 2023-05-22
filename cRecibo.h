#ifndef _CRECIBO_H
#define _CRECIBO_H

#include "headers.h"

class cRecibo {
private:
    double pago;
    eTiposPago metodoPago;
    unsigned int cuotas;
public:
    // Constructor por parametro
    cRecibo(double Pago, eTiposPago tipoPago);
    // Constructor por copia
    // Duenyo se queda con el original, cliente con la copia
    cRecibo(const cRecibo& paraCopiar);
    ~cRecibo();
    
    void imprimir();

    double getPago();

    eTiposPago getTipoPago();
    void setipoPago(eTiposPago tipoPago);

    unsigned int getCuotas();
};
#endif //_CRECIBO_H