

#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H

#include "cPersona.h"


class cEmpleado: public cPersona {
public: 
    cEmpleado(const string Dni, const string Name, string Tel, string Email, string Adress, double sueldo)
    {}
    

void cEmpleado(void double, void string);
    
double getSueldo();
 
void setSueldo(void double);
    

void cobrarSueldo(void double);
protected: 
    
void cEmpleado();
private: 
    double sueldo;
};

#endif //_CEMPLEADO_H