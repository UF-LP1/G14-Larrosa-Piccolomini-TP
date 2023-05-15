#ifndef _CRECIBO_H
#define _CRECIBO_H

#include "headers.h"

// El duenyo va a generar un recibo, y el cliente recibira una copia del mismo
class cRecibo {
private:
    float pago;
    eTiposPago metodoPago;
    unsigned int cuotas;
public:
    // Constructor por parametro
    cRecibo(float Pago, eTiposPago tipoPago);

    // Constructor por copia
    // (duenyo se queda con el original, cliente con la copia)
    cRecibo(const cRecibo& paraCopiar);
    ~cRecibo();
    
    float getPago();
    void setPago(float newPago);

    eTiposPago getTipoPago();
    void setTipoPago(eTiposPago newTipoPago);

    unsigned int getCuotas();

    void imprimir() {
        cout << pago << "\t" << metodoPago << "\t" << cuotas << endl;
    }
};

#endif //_CRECIBO_H