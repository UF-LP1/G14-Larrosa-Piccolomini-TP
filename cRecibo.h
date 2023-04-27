#ifndef _CRECIBO_H
#define _CRECIBO_H

#include "headers.h"

class cRecibo {
private:
    eTiposPago metodoPago;
    unsigned int cuotas;
public:
    cRecibo(eTiposPago tipoPago, unsigned int Cuotas);
    ~cRecibo();
    eTiposPago getTipoPago();
    unsigned int getCuotas();
    void setCuotas(unsigned int Cuotas);

};

#endif //_CRECIBO_H