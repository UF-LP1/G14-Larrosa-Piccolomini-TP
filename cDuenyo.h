
#ifndef _CDUENYO_H
#define _CDUENYO_H

#include "cEmpleado.h"
#include "cEmpleado.h"


class cDuenyo: public cEmpleado, public cEmpleado {
public: 
    cDuenyo(const string Dni, const string Name, string Tel, string Email, string Adress)
    {}

void venderProd(void cProducto, void cCliente);
    
void cobrarProd(void cProducto);

void archivarRecibo(void Recibo);

void atenderCliente(void cCliente);
};

#endif //_CDUENYO_H