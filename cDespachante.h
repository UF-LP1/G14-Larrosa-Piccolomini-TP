#ifndef _CDESPACHANTE_H
#define _CDESPACHANTE_H

#include "cEmpleado.h"
#include "cCliente.h"

// Despachante solo entrega de a un articulo, y es solo compras
class cDespachante: public cEmpleado {
private:
    cCliente* atendido;
public: 
    cDespachante(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress);
    ~cDespachante();
    
    virtual void imprimir();

    void entregaDomicilio();

    cCliente* getAtendido();
    void setAtendido(cCliente* newAtendido);

};
#endif //_CDESPACHANTE_H