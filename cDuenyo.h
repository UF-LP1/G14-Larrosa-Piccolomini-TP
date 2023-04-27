
#ifndef _CDUENYO_H
#define _CDUENYO_H

#include "cEmpleado.h"
#include "cCliente.h"
#include "cRecibo.h"

class cDuenyo: public cEmpleado {
public:
    cDuenyo(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress);
    ~cDuenyo();
    void venderProd(cProducto, cCliente);
    void cobrarProd(cProducto);
    void archivarRecibo(cRecibo);
    void atenderCliente(cCliente);
};

#endif //_CDUENYO_H