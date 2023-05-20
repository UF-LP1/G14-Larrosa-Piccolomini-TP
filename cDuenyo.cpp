#include "cDuenyo.h"

cDuenyo::cDuenyo(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress) : cEmpleado(sueldo, Dni, Name, Tel, Email, Adress) {
	// La lista de recibos comienza con nullptr y dicha a posicion se le va a asignar el recibo del primer cliente
	this->listaRecibos.push_back(nullptr);
	this->recaudaciones = 0.0;
}

cDuenyo::~cDuenyo() {
}

void cDuenyo::setLocal(cFerreteria* temp) {
	this->local = temp;
}

cFerreteria* cDuenyo::getLocal() {
	return this->local;
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

double cDuenyo::generarPresupuesto(vector<cProducto*> ListaCompras) {
	double suma = 0;
	for (int i = 0; i < ListaCompras.size(); i++) {
		suma += ListaCompras[i]->getPrecio();
	}
	return suma;
}

void cDuenyo::comprarProducto(cCliente* clienteAtendido) {
	double aPagar = generarPresupuesto(clienteAtendido->listaCompras);
	if (aPagar > clienteAtendido->getFondos()) {
		// NO SE QUE TENEMOS QUE TIRAR, PERO ESTA LA IDEA
		// EL CATCH SE HACE EN EL MAIN
		throw ComentarioException("No hay fondos suficientes");
	}
	pagarPresupuesto(aPagar, clienteAtendido);

	// Hay que hacer que en lista se queden todos los productos que NO pudo comprar el cliente
	// Puede ser un metodo separado
}

// Puede que precio varie. si precio+caro. cliente paga diferencia. si precio+barato yo se la pongo DESARROLLAR
void cDuenyo::cambiarProd(/*cFerreteria**/cCliente* clienteAtendido) {

	int j = 0;

	if (!clienteAtendido->getCambio() || (!clienteAtendido->getFoto() && !clienteAtendido->getArtRoto())) {
		// get y set son para usarlos fuera de la clase FUNCIONALIDAD

		throw ComentarioException("No es posible la devolución");
		// opcion1 throw string y recibir en main de una O crear custom excepction
		return;
	}


	/* ESTO ROMPE EL CODIGO NO SABEMOS PORQUE
	for (int i = 0; i < clienteAtendido->listaCompras.size(); i++) {	
		for (int j = 0; j < local->getListaInventario().size(); j++) {
			if (clienteAtendido->listaCompras[i] == local->getListaInventario()[j]) {
				clienteAtendido->listaComprados.push_back(local->getListaInventario()[j]);
			}
		}
	}
	*/


	/*
	** Hacer una sobrecarga en cProd de == donde:
	** se comparen todos los atributos de los objetos
	** retorne false si alguno distinto
	** retorne true si todos atb son iguales
	** acá podemos implementar TRYCATCH.
	** si cliente no posee ninguno. entonces imposible el repuesto
	*/
}

void cDuenyo::comprarRepuesto(cCliente* clienteAtendido) {
	if (!clienteAtendido->getBuscarRepuesto())
		if (clienteAtendido->getFondos() > 0)
			return;
}

void cDuenyo::pagarPresupuesto(double temp, cCliente* clienteAtendido) {
	clienteAtendido->setFondos(clienteAtendido->getFondos() - temp);
}


void cDuenyo::alquilarProducto(cArtHerramientas* paraAlquilar, cCliente* clienteAtendido) {
	// Alquiler por dia
	double HerrSeguro = 0.0;

	// getListaCompras().push_back(paraAlquilar); ESTO ES VALIDO pero ya creamos una funcion para hacer lo mismo
	clienteAtendido->agregarProducto(paraAlquilar);
	// Ahora genero presupuesto*= producto + seguro
	double presuTotal = 0.0;
	presuTotal = generarPresupuesto(clienteAtendido->listaCompras) + HerrSeguro;
	pagarPresupuesto(presuTotal, clienteAtendido);
}

cRecibo* cDuenyo::generarRecibo() {
	// A desarrollar
	return nullptr;
}

void cDuenyo::atenderCliente() {
	/*
	** que quiere: producto, servicio, o que lo coja?
	*/
}

// Dueño cumple la funcion de cajero y realiza en tiempo de ejecucion
double cDuenyo::cobrarPago(cCliente* alguien) {
	if (alguien->listaCompras.empty()) {
		// No cobro monto nulo
		return 0.0;
	}
	double montoTotal = 0.0;
	for (int i = 0; i < alguien->listaCompras.size(); i++) {
		montoTotal += alguien->listaCompras[i]->getPrecio();
	}

	// calcularVuelto(montoTotal, alguien);
	return montoTotal;
	// Monto será sumado a fondos de ferreteria y restado a fondos de cliente
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