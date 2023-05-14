#include "headers.h"

#include "cFerreteria.h"
#include "cPersona.h"
#include "cProducto.h"
#include "cEmpleado.h"
#include "cInventario.h"
#include "cRecibo.h"

#include "cDuenyo.h"
#include "cPlomero.h"
#include "cDespachante.h"
#include "cCerrajero.h"
#include "cCliente.h"

#include "cArtBanyo.h"
#include "cArtBanyo.h"
#include "cArtCerraje.h"
#include "cArtElect.h"
#include "cArtFerre.h"
#include "cArtHerramientas.h"


int main(void) {
	// Primero inicializamos el local (abierto) y su inventario
	// El inventario de por si ya estara con 10 de cada tipo de articulo
	cFerreteria* ferreteriaBala = new cFerreteria("Carlitos Bala", "Calle Falsa 123", "08002090", "bala@ferreteria.com", "balaferre.com.ar", true /*abierta*/);
	cInventario* inventarioBala = new cInventario(10, 10, 10, 10, 10, 10);
	ferreteriaBala->setInventario(inventarioBala);

	// Ahora vamos con el personal del local, primero el duenyo y jefe
	cEmpleado* jefe = new cDuenyo(1500, "1000", "Carlitos", "10001", "jefe@ferreteria.com", "av1");

	// Un plomero que se llama mario... muy original lo mio
	cEmpleado* plomero = new cPlomero(1200, "1001", "Mario", "10002", "plumber@ferreteria.com", "av2");

	// Ahora el despachante
	cEmpleado* despachante = new cDespachante(1000, "1002", "Luigi", "", "", "");


	delete ferreteriaBala;
	delete inventarioBala;

	delete jefe;
	delete plomero;
	delete despachante;

	return 0;
}
