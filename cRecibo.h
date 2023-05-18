#ifndef _CRECIBO_H
#define _CRECIBO_H

#include "headers.h"

// El duenyo va a generar un recibo, y el cliente recibira una copia del mismo
class cRecibo {
private:
    double pago;
    eTiposPago metodoPago;
    unsigned int cuotas;
public:
    // Constructor por parametro
    cRecibo(double Pago, eTiposPago tipoPago);
    // Constructor por copia
   // (duenyo se queda con el original, cliente con la copia)
    cRecibo(const cRecibo& paraCopiar);
    ~cRecibo();
    
    void imprimir();

    float getPago();
    void setPago(float newPago);

    eTiposPago getTipoPago();
    void setipoPago(eTiposPago tipoPago);

    unsigned int getCuotas();

};

#endif //_CRECIBO_H