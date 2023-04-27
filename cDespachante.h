#ifndef _CDESPACHANTE_H
#define _CDESPACHANTE_H

#include "cEmpleado.h"


class cDespachante: public cEmpleado {
public: 
    cDespachante(const string Dni, const string Name, string Tel, string Email, string Adress);
    bool entregaDomicilio(const string, const string);
};

#endif //_CDESPACHANTE_H