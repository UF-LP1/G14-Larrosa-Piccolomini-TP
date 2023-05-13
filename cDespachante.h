#ifndef _CDESPACHANTE_H
#define _CDESPACHANTE_H

#include "cEmpleado.h"


class cDespachante: public cEmpleado {
public: 
    cDespachante(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress);
    ~cDespachante();
    bool entregaDomicilio(const string, const string);
    
};

#endif //_CDESPACHANTE_H