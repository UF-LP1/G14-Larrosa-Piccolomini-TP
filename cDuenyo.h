#ifndef _CDUENYO_H
#define _CDUENYO_H

#include "cEmpleado.h"
#include "cProducto.h"
#include "cRecibo.h"
#include "cCliente.h"

class cFerreteria; // Declaración anticipada de la clase cFerreteria

class cDuenyo : public cEmpleado {
	vector<cRecibo*> listaRecibos;
	double recaudaciones;
public:
	cDuenyo(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress);
	~cDuenyo();

	virtual void imprimir();

	// Funciones importadas desde cliente
	double generarPresupuesto(vector<cProducto*> ListaCompras);
	void comprarProducto(cCliente* clienteAtendido);
	void comprarRepuesto(cCliente* clienteAtendido);
	void cambiarProd(cCliente* clienteAtendido);
	void pagarPresupuesto(double temp, cCliente* clienteAtendido);
	void alquilarProducto(cArtHerramientas* paraAlquilar, cCliente* clienteAtendido);
	
	cRecibo* generarRecibo();
	void atenderCliente();
	double cobrarPago(cCliente* alguien);

	vector<cRecibo*> getListaRecibos();
	void setListaRecibos(vector<cRecibo*> newListado);

	double getRecaudaciones();
	void setRecaudaciones(double newRecaudaciones);

	friend class cFerreteria;
};

#endif //_CDUENYO_H
