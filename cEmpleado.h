/**
 * Project Untitled
 */


#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H

#include "cPersona.h"


class cEmpleado: public cPersona {
public: 
    
/**
 * @param double
 * @param string
 */
void cEmpleado(void double, void string);
    
double getSueldo();
    
/**
 * @param double
 */
void setSueldo(void double);
    
/**
 * @param double
 */
void cobrarSueldo(void double);
protected: 
    
void cEmpleado();
private: 
    double sueldo;
};

#endif //_CEMPLEADO_H