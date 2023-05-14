#include "cDuenyo.h"

cDuenyo::cDuenyo(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress) : cEmpleado(sueldo, Dni, Name, Tel, Email, Adress) {
	this->listaRecibos.push_back(nullptr);
	this->recaudaciones = 0.0;
}

cDuenyo::~cDuenyo() {
}


cRecibo* cDuenyo::generarRecibo() {

}

void cDuenyo::atenderCliente(cCliente*) {

}

//Dueño cumple la funcion de cajero y realiza en tiempo de ejecucion
float cDuenyo::cobrarPago(vector <cProducto*> listaCompras)
{
	if (listaCompras.empty()) {
		//no cobro monto nulo
		return;
	}
	float montoTotal = 0.0;
	for (int i = 0; i < listaCompras.size(); i++)
	{
		montoTotal += listaCompras[i]->getPrecio();
	}
	return montoTotal; //monto será sumado a fondos de ferreteria y restado a fondos de cliente
}

//tres opciones. metodo de pago online. no hay vuelto. dinero? entonces vuelvo.
void cDuenyo::calcularVuelto(float montoCompra) {

}

vector<cRecibo*> cDuenyo::getListaRecibos() {
	return this->listaRecibos;
}

void cDuenyo::setListaRecibos(vector<cRecibo*> newListado) {
	this->listaRecibos = newListado;
}

float cDuenyo::getRecaudaciones() {
	return this->recaudaciones;
}

void cDuenyo::setRecaudaciones(double newRecaudaciones) {
	this->recaudaciones = newRecaudaciones;
}

