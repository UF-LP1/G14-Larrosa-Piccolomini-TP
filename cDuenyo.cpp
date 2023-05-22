#include "cDuenyo.h"

cDuenyo::cDuenyo(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress) : cEmpleado(sueldo, Dni, Name, Tel, Email, Adress) {
	// La lista de recibos comienza con nullptr,
	// A dicha posicion se le va a asignar el recibo del primer cliente
	this->listaRecibos.push_back(nullptr);
	this->recaudaciones = 0.0;
}

cDuenyo::~cDuenyo() {
	int i = 0;
	for (i = 0; i < this->listaRecibos.size(); i++) {
		delete this->listaRecibos[i];
	}
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

	if (ListaCompras.empty()) {
		// No cobro monto nulo
		return 0.0;
	}
	double suma = 0;
	for (int i = 0; i < ListaCompras.size(); i++) {
		suma += ListaCompras[i]->getPrecio();
	}
	return suma;
}

void cDuenyo::comprarProducto(cCliente* clienteAtendido) {
	double aPagar = generarPresupuesto(clienteAtendido->listaCompras);
	if (aPagar > clienteAtendido->getFondos()) {
		throw ComentarioException("No hay fondos suficientes");
	}
	pagarPresupuesto(aPagar, clienteAtendido);
}

// Puede que precio varie. si precio+caro. cliente paga diferencia. si precio+barato cobra la ferre
void cDuenyo::cambiarProd(cCliente* clienteAtendido) {

	int j = 0;

	if (!clienteAtendido->getCambio() || (!clienteAtendido->getFoto() && !clienteAtendido->getArtRoto())) {
		// get y set son para usarlos fuera de la clase: FUNCIONALIDAD

		throw ComentarioException("Rechazado. Brinde foto o articulo roto");
		// opcion1 throw string y recibir en main de una O crear custom excepction
		return;
	}

	// ... Trabaja con la listaInventario como sea necesario ...
	for (int i = 0; i < clienteAtendido->listaCompras.size(); i++) {	
		for (int j = 0; j < clienteAtendido->getListaInventario().size(); j++) {
			if (clienteAtendido->listaCompras[i] == clienteAtendido->getListaInventario()[j]) {
				clienteAtendido->listaComprados.push_back(clienteAtendido->getListaInventario()[j]);

				//Condición lo encontró.producto puede aparecer una única vez en la listaInventario aka folleto

				// Si quisiese modular y generar nueva funcion con el desarrollo,
				// Deberia crear varibale pos y mandarla como parametro
				double precioOG = obtenerPrecio(clienteAtendido->getListaCompras(), i);
				double precioFerre = obtenerPrecio(clienteAtendido->getListaInventario(), j);
				if (precioFerre > precioOG) {
					//cliente paga la diferencia
					pagarPresupuesto(precioFerre, clienteAtendido);
				}
				else {
					double diferencia = precioFerre - precioOG;
					clienteAtendido->setFondos(diferencia);
				}

			}
		}
	}

	/*
	** Hacer una sobrecarga en cProd de == donde:
	** se comparen todos los atributos de los objetos
	** retorne false si alguno distinto
	** retorne true si todos atb son iguales
	** acá podemos implementar TRYCATCH.
	** si cliente no posee ninguno. entonces imposible el repuesto
	*/
}

double cDuenyo::obtenerPrecio(vector<cProducto*> listToCompare, int pos) {
	cProducto* PrecioProd = listToCompare.operator[](1);
	double precio = PrecioProd->getPrecio();
	
	return precio;
}

void cDuenyo::comprarRepuesto(cCliente* clienteAtendido) {
	if (!clienteAtendido->getBuscarRepuesto()) {
		return;
	}
	if (!clienteAtendido->getFoto() && !clienteAtendido->getArtRoto()) {
		throw ComentarioException("Rechazado. Brinde foto o artículo roto");
	}
	if (clienteAtendido->getFondos() > 0) {
		throw ComentarioException("Fondos insuficientes");
	}
	generarPresupuesto(clienteAtendido->getListaCompras());
}

//restamos presu de la billetera de cliente
void cDuenyo::pagarPresupuesto(double temp, cCliente* clienteAtendido) {
	clienteAtendido->setFondos(clienteAtendido->getFondos() - temp);
}

void cDuenyo::alquilarProducto(cArtHerramientas* paraAlquilar, cCliente* clienteAtendido) {
	// Alquiler por dia
	double HerrSeguro = 0.0;

	time_t current = time(0);
	// Obtener la cantidad de segundos en una semana
	time_t unDia= 24 * 60 * 60;  // 24 horas * 60 minutos * 60 segundos
	//logica: si cliente conserva herramienta fuera de los términos. se cobra el día extra

	clienteAtendido->agregarProducto(paraAlquilar);
	double presuTotal = 0.0;
	presuTotal = generarPresupuesto(clienteAtendido->listaCompras) + HerrSeguro;
	pagarPresupuesto(presuTotal, clienteAtendido);
}

void cDuenyo::generarRecibo(cCliente* clienteAtendido) {
	double dinero = generarPresupuesto(clienteAtendido->getListaComprados());
	unsigned int temp = rand() % 4;
	eTiposPago tipo;

	switch (temp) {
	case 1:
		tipo = mercadoPago;
		break;
	case 2:
		tipo = efectivo;
		break;
	case 3:
		tipo = tarjetaCredito;
		break;
	default:
		tipo = tarjetaDebito;
		break;
	}

	cRecibo* reciboGenerado = new cRecibo(dinero, tipo);
	cRecibo* reciboCopia = new cRecibo(*reciboGenerado);

	this->listaRecibos.push_back(reciboGenerado);
	clienteAtendido->setRecibo(reciboCopia);
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