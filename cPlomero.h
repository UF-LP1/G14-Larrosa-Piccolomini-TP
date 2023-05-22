#ifndef _CPLOMERO_H
#define _CPLOMERO_H

#include "cEmpleado.h"

// No nos piden nada del plomero en el TP, de ahi que la clase esta vacia
class cPlomero: public cEmpleado {
public:

	virtual void imprimir();

	cPlomero(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress);
	~cPlomero();
};
#endif //_CPLOMERO_H