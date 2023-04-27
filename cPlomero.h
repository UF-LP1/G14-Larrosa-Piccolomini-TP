#ifndef _CPLOMERO_H
#define _CPLOMERO_H

#include "cEmpleado.h"

class cPlomero: public cEmpleado {
public:
	cPlomero(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress);
	~cPlomero();
};

#endif //_CPLOMERO_H