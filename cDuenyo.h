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

	double generarPresupuesto(vector<cProducto*> ListaCompras);
	void comprarProducto(cCliente* clienteAtendido);
	double comprarRepuesto(cCliente* clienteAtendido);
	void cambiarProd(cCliente* clienteAtendido);
	double obtenerPrecio(vector <cProducto*> listToCompare, int pos);
	void pagarPresupuesto(double temp, cCliente* clienteAtendido);
	void alquilarProducto(cArtHerramientas* paraAlquilar, cCliente* clienteAtendido);
	
	cRecibo* generarRecibo(); //imprime los datos como si en papel
	//borro atenderCliente. se implementa como menu en main
	double cobrarPago(cCliente* alguien);

	vector<cRecibo*> getListaRecibos();
	void setListaRecibos(vector<cRecibo*> newListado);

	double getRecaudaciones();
	void setRecaudaciones(double newRecaudaciones);

	friend class cFerreteria;
};
#endif //_CDUENYO_H
