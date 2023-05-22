#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H

#include "cPersona.h"

class cEmpleado: public cPersona {
private:
    double sueldo;
public: 
    cEmpleado(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress);
    ~cEmpleado();

    virtual void imprimir() = 0;

    double getSueldo();
    void setSueldo(double Sueldo);
    void cobrarSueldo(double Cobro);
};
#endif //_CEMPLEADO_H