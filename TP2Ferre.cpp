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
	cEmpleado* jefe = new cDuenyo(1500, "1000", "Wario", "10001", "jefe@ferreteria.com", "av1");

	// Un plomero que se llama mario... muy original lo mio
	cEmpleado* plomero = new cPlomero(1200, "1001", "Mario", "10002", "plumber@ferreteria.com", "av2");

	// Ahora el despachante, hermano de mario
	cEmpleado* despachante = new cDespachante(1000, "1002", "Luigi", "10002", "delivery@ferreteria.com", "av3");

	// Por ultimo el cerrajero, amigo de mario, con la autorizacion negada desde el principio
	cEmpleado* cerrajero = new cCerrajero(false, 1300, "1003", "Toad", "10003", "cerrajero@ferreteria.com", "av4");

	// Ahora vamos a inicializar 4 clientes
	// Uno con mucho dinero
	cPersona* cliente1 = new cCliente(false, false, false, false, "123", 15000, "321", "Mateo", "666", "pumas@hotmail.com", "av5");
	// Uno pobre como yo
	cPersona* cliente2 = new cCliente(false, false, false, false, "321", 150, "123", "Matias", "42069", "PC@hotmail.com", "av6");
	// Uno que trae un articulo roto
	cPersona* cliente3 = new cCliente(true, false, true, false, "777", 2000, "6969", "2pac", "894", "california@love.com", "av7");
	// Uno que quiere cambiar una compra previa
	cPersona* cliente4 = new cCliente(false, false, false, true, "888", 2000, "1234", "Grando Smokio", "555", "groove@street.com", "av8");


	delete ferreteriaBala;
	delete inventarioBala;

	delete jefe;
	delete plomero;
	delete despachante;
	delete cerrajero;

	delete cliente1;
	delete cliente2;
	delete cliente3;
	delete cliente4;

	return 0;
}
