#ifndef _CDUENYO_H
#define _CDUENYO_H

#include "cEmpleado.h"
#include "cCliente.h"
#include "cRecibo.h"

class cDuenyo : public cEmpleado {
	vector<cRecibo*> listaRecibos;
	double recaudaciones;
public:
	cDuenyo(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress);
	~cDuenyo();

	cRecibo* generarRecibo();
	void atenderCliente(cCliente*);
	float cobrarPago(vector <cProducto*> listaCompras);
	void calcularVuelto(float montoCompra);

	vector<cRecibo*> getListaRecibos();
	void setListaRecibos(vector<cRecibo*> newListado);

	float getRecaudaciones();
	void setRecaudaciones(double newRecaudaciones);
};

#endif //_CDUENYO_H
