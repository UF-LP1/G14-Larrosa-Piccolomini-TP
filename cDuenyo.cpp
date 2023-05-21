#include "cDuenyo.h"

cDuenyo::cDuenyo(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress) : cEmpleado(sueldo, Dni, Name, Tel, Email, Adress) {
	// La lista de recibos comienza con nullptr y dicha a posicion se le va a asignar el recibo del primer cliente
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
void cDuenyo::cambiarProd(cCliente* clienteAtendido) {

	int j = 0;

	if (!clienteAtendido->getCambio() || (!clienteAtendido->getFoto() && !clienteAtendido->getArtRoto())) {
		// get y set son para usarlos fuera de la clase: FUNCIONALIDAD

		throw ComentarioException("Rechazado. Brinde foto o artículo roto");
		// opcion1 throw string y recibir en main de una O crear custom excepction
		return;
	}

	// ... Trabaja con la listaInventario como sea necesario ...
	for (int i = 0; i < clienteAtendido->listaCompras.size(); i++) {	
		for (int j = 0; j < clienteAtendido->getListaInventario().size(); j++) {
			if (clienteAtendido->listaCompras[i] == clienteAtendido->getListaInventario()[j]) {
				clienteAtendido->listaComprados.push_back(clienteAtendido->getListaInventario()[j]);

				/*condición lo encontró.producto puede aparecer una única vez en la listaInventario aka folleto
				**se dá que JUSTO la listaInvetario es = a la listaInventario usual
				**deberia usar iteradores?---------------------------------------
				**NECESITO COMPARAR EL PRECIO DE UN PRODUCTO ENTRE LAS DOS LISTAS
				**CREO METODO RECIBA UNA LISTA TIPO VECTOR CPRODUCTO, RESCATO EL DOUBLE DE PRECIO
				*/

				//si quisiese modular y generar nueva funcion con el desarrollo,
				//deberia crear varibale pos y mandarla como parametro
				double precioOG = obtenerPrecio(clienteAtendido->getListaCompras(), i);
				double precioFerre = obtenerPrecio(clienteAtendido->getListaInventario(), j);
				if (precioFerre > precioOG)
				{
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

double cDuenyo::obtenerPrecio(vector<cProducto*> listToCompare, int pos)
{
	cProducto *PrecioProd = listToCompare.operator[](1);
	double precio = PrecioProd->getPrecio();
	
	return precio;
}

double cDuenyo::comprarRepuesto(cCliente* clienteAtendido) {
	if (!clienteAtendido->getBuscarRepuesto())
		return 0.0;
	if(!clienteAtendido->getFoto() && !clienteAtendido->getArtRoto())
		throw ComentarioException("Rechazado. Brinde foto o artículo roto");
	if (clienteAtendido->getFondos() > 0)
		throw ComentarioException("Fondos insuficientes");

	double precioRepu = generarPresupuesto(clienteAtendido->listaCompras);

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

	// calcularVuelto(montoTotal, alguien); buscar en historial pusheos
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