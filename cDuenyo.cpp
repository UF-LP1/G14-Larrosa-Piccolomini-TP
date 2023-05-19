#include "cDuenyo.h"

cDuenyo::cDuenyo(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress) : cEmpleado(sueldo, Dni, Name, Tel, Email, Adress) {
	// La lista de recibos comienza con nullptr
	// y Dicha a posicion se le va a asignar el recibo del primer cliente
	this->listaRecibos.push_back(nullptr);
	this->recaudaciones = 0.0;
}

cDuenyo::~cDuenyo() {
}

void cDuenyo::imprimir() {
	cout << getDni() << "\t" << getName() << "\t" << getTel() << "\t" << getEmail() << "\t" << getAdress() << "\n";
	cout << "Cobra: " << getSueldo() << "\tTiene Recaudado: " << getRecaudaciones() << endl;
	int i = 0;
	if (this->listaRecibos[0] != nullptr) {
		for (i = 0; i < this->listaRecibos.size(); i++) {
			this->listaRecibos[i]->imprimir();
		}
	}
	cout << endl;
}

/*
cRecibo* cDuenyo::generarRecibo() {

}
*/

void cDuenyo::atenderCliente() {

}

//Dueño cumple la funcion de cajero y realiza en tiempo de ejecucion
double cDuenyo::cobrarPago(vector<cProducto*> listaCompras) {
	if (listaCompras.empty()) {
		//no cobro monto nulo
		return 0.0;
	}
	double montoTotal = 0.0;
	for (int i = 0; i < listaCompras.size(); i++)
	{
		montoTotal += listaCompras[i]->getPrecio();
	}
	return montoTotal; //monto será sumado a fondos de ferreteria y restado a fondos de cliente
}

// Tres opciones. metodo de pago online. no hay vuelto. dinero? entonces vuelvo.
void cDuenyo::calcularVuelto(float montoCompra) {

}

vector<cRecibo*> cDuenyo::getListaRecibos() {
	return this->listaRecibos;
}

void cDuenyo::setListaRecibos(vector<cRecibo*> newListado) {
	this->listaRecibos = newListado;
}

double cDuenyo::getRecaudaciones() {
	return this->recaudaciones;
}

void cDuenyo::setRecaudaciones(double newRecaudaciones) {
	this->recaudaciones = newRecaudaciones;
}