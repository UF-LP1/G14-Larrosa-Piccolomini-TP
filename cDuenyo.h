#ifndef _CDUENYO_H
#define _CDUENYO_H

#include "cEmpleado.h"
#include "cProducto.h"
#include "cRecibo.h"
#include "cCliente.h"

class cDuenyo : public cEmpleado {
	vector<cRecibo*> listaRecibos;
	double recaudaciones;
public:
	cDuenyo(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress);
	~cDuenyo();

	virtual void imprimir();

	double generarPresupuesto(vector<cProducto*> ListaCompras);
	void comprarProducto(cCliente* clienteAtendido);
	void comprarRepuesto(cCliente* clienteAtendido);
	void cambiarProd(cCliente* clienteAtendido);
	double obtenerPrecio(vector <cProducto*> listToCompare, int pos);
	void pagarPresupuesto(double temp, cCliente* clienteAtendido);
	void alquilarProducto(cArtHerramientas* paraAlquilar, cCliente* clienteAtendido);

	// El duenyo imprime original y copia, del recibo de compra
	// Se queda con el original, y la copia es asignada al ciente atendido
	void generarRecibo(cCliente* clienteAtendido);

	vector<cRecibo*> getListaRecibos();
	void setListaRecibos(vector<cRecibo*> newListado);

	double getRecaudaciones();
	void setRecaudaciones(double newRecaudaciones);

	friend class cFerreteria;
};
#endif //_CDUENYO_H
