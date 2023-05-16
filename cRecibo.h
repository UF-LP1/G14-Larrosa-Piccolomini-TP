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
   // (duenyo se queda con el original, cliente con la copia)
    cRecibo(const cRecibo& paraCopiar);
    ~cRecibo();

    double getPago();
    void setPago(double newPago);

    eTiposPago getTipoPago();
    void setipoPago(eTiposPago tipoPago);

    unsigned int getCuotas();

    void imprimir() {
        cout << pago << "\t" << metodoPago << "\t" << cuotas << endl;
    }
};

#endif //_CRECIBO_H