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
#include "cArtBazar.h"
#include "cArtCerraje.h"
#include "cArtElect.h"
#include "cArtFerre.h"
#include "cArtHerramientas.h"


int main(void) {

	// Primero inicializamos el local (abierto) y su inventario con su lista de productos
	// El inventario de por si ya estara cargado con los datos iniciales
	cFerreteria* ferreteriaBala = new cFerreteria("Carlitos Bala", "Calle Falsa 123", "08002090", "bala@ferreteria.com", "balaferre.com.ar", true); 
	cInventario* inventarioBala = new cInventario(5, 9, 4, 4, 3, 3);
	ferreteriaBala->setInventario(inventarioBala);
	vector<cProducto*> listaBala;
	ferreteriaBala->setListaInventario(listaBala);

	// Ahora vamos con el personal del local, primero el duenyo y jefe
	cEmpleado* jefe = new cDuenyo(1500, "1000", "Wario", "10001", "jefe@ferreteria.com", "av1");

	// Un plomero que se llama mario... muy original lo mio
	cEmpleado* plomero = new cPlomero(1200, "1001", "Mario", "10002", "plumber@ferreteria.com", "av2");

	// Ahora el despachante, hermano de mario
	cEmpleado* despachante = new cDespachante(1000, "1002", "Luigi", "10002", "delivery@ferreteria.com", "av3");

	// Por ultimo el cerrajero, amigo de mario, con la autorizacion negada desde el principio
	cEmpleado* cerrajero = new cCerrajero(false, 1300, "1003", "Toad", "10003", "cerrajero@ferreteria.com", "av4");



	// Ahora comenzamos armando todos los objetos que representen productos del local
	// Primero los de baño
	cProducto* barralCortina1 = new cArtBanyo(barralesCortina, 300, "Gris, 2,2 metros de largo, fijacion por sopapas");
	cProducto* cepilloLimpieza1 = new cArtBanyo(cepilloLimpieza, 200, "Blanco, pelo grueso y duro");
	cProducto* paqueteVirulana1 = new cArtBanyo(virulana, 50, "Ultrafina, 6 unidades");
	cProducto* paqueteVirulana2 = new cArtBanyo(virulana, 60, "Fina, 6 unidades");
	cProducto* paqueteLanaMetal1 = new cArtBanyo(lanaMetal, 70, "Gruesa, 4 unidades");

	ferreteriaBala->agregarAlListado(barralCortina1);
	ferreteriaBala->agregarAlListado(cepilloLimpieza1);
	ferreteriaBala->agregarAlListado(paqueteVirulana1);
	ferreteriaBala->agregarAlListado(paqueteVirulana2);
	ferreteriaBala->agregarAlListado(paqueteLanaMetal1);

	// Los de bazar
	cProducto* tenderRopa1 = new cArtBazar(tenderesRopa, 250, "Blanco, de metal");
	cProducto* tenderRopa2 = new cArtBazar(tenderesRopa, 200, "Blanco, de plastico");
	cProducto* tablasPlanchar1 = new cArtBazar(tablasPlanchar, 280, "Gris, 35cm de ancho y 145cm de largo");
	cProducto* soga1 = new cArtBazar(sogas, 50, "Nylon, 1 metro, fina");
	cProducto* soga2 = new cArtBazar(sogas, 50, "Nylon, 1 metro, gruesa");
	cProducto* soga3 = new cArtBazar(sogas, 45, "Cuerda, 1 metro, fina");
	cProducto* tablasInodoro1 = new cArtBazar(tablasInodoro, 100, "Blanca");
	cProducto* tablasInodoro2 = new cArtBazar(tablasInodoro, 100, "Negra");
	cProducto* impBanyera1 = new cArtBazar(impBanyera, 70, "Jabonera");

	ferreteriaBala->agregarAlListado(tenderRopa1);
	ferreteriaBala->agregarAlListado(tenderRopa2);
	ferreteriaBala->agregarAlListado(tablasPlanchar1);
	ferreteriaBala->agregarAlListado(soga1);
	ferreteriaBala->agregarAlListado(soga2);
	ferreteriaBala->agregarAlListado(soga3);
	ferreteriaBala->agregarAlListado(tablasInodoro1);
	ferreteriaBala->agregarAlListado(tablasInodoro2);
	ferreteriaBala->agregarAlListado(impBanyera1);

	// Los de cerrajeria (todos de tipo cArtCerraje, tiene un constructor por copia)
	cArtCerraje* llaveSimple1 = new cArtCerraje(llaveSimple, 100, "Bronce, mango redondo");
	cArtCerraje* llaveSimple2 = new cArtCerraje(*llaveSimple1);
	cArtCerraje* llaveDobleTamb1 = new cArtCerraje(llaveDobleTambor, 100, "Bronce, mango cuadrado");
	cArtCerraje* llaveCod1 = new cArtCerraje(llaveCod, 150, "Acero, mango cuadrado");

	ferreteriaBala->agregarAlListado(llaveSimple1);
	ferreteriaBala->agregarAlListado(llaveSimple2);
	ferreteriaBala->agregarAlListado(llaveDobleTamb1);
	ferreteriaBala->agregarAlListado(llaveCod1);

	// Los de electricidad
	cProducto* cable1 = new cArtElect(cables, 25, "20 metros de largo, 1 cm de grueso");
	cProducto* lampara1 = new cArtElect(lamparas, 165, "30 cm de alto");
	cProducto* portaLampara1 = new cArtElect(portalamparas, 20, "10 cm de alto x 3 cm de radio");
	cProducto* enchufe1 = new cArtElect(enchufes, 30, "5 cm de alto x 7 cm de largo");

	ferreteriaBala->agregarAlListado(cable1);
	ferreteriaBala->agregarAlListado(lampara1);
	ferreteriaBala->agregarAlListado(portaLampara1);
	ferreteriaBala->agregarAlListado(enchufe1);

	// Los de ferreteria generica
	cProducto* paqueteClavos1 = new cArtFerre(clavos, 5, "50 Clavos de hierro");
	cProducto* paqueteTarugos1 = new cArtFerre(tarugos, 10, "15 tarugos de hierro");
	cProducto* paqueteTornillos1 = new cArtFerre(tornillos, 20, "30 tornillos de hierro");

	ferreteriaBala->agregarAlListado(paqueteClavos1);
	ferreteriaBala->agregarAlListado(paqueteTarugos1);
	ferreteriaBala->agregarAlListado(paqueteTornillos1);

	// Por ultimo, las herramientas caras
	cProducto* amoladora1 = new cArtHerramientas(amoladora, 1000, "Roja,con bateria,marca Milwaukee");
	cProducto* lijadora1 = new cArtHerramientas(lijadora, 900, "Verde,con bateria,marca Husqvarna");
	cProducto* perforadora1 = new cArtHerramientas(perforadora, 2000, "Negra,con bateria,marca deWalt");

	ferreteriaBala->agregarAlListado(amoladora1);
	ferreteriaBala->agregarAlListado(lijadora1);
	ferreteriaBala->agregarAlListado(perforadora1);
	
	// Ahora vamos a inicializar 4 clientes
	// Uno con mucho dinero
	cPersona* cliente1 = new cCliente(false, false, false, false, "123", 1500, "321", "Mateo", "666", "pumas@hotmail.com", "av5");
	// Uno pobre como yo
	cPersona* cliente2 = new cCliente(false, false, false, false, "321", 50, "123", "Matias", "42069", "PC@hotmail.com", "av6");
	// Uno que trae un articulo roto
	cPersona* cliente3 = new cCliente(true, false, true, false, "777", 2000, "6969", "2pac", "894", "california@love.com", "av7");
	// Uno que quiere cambiar una compra previa
	cPersona* cliente4 = new cCliente(false, false, false, true, "888", 2000, "1234", "Grando Smokio", "555", "groove@street.com", "av8");

	// Vamos con la lista de compras del cliente1


	delete ferreteriaBala;
	delete inventarioBala;

	delete jefe;
	delete plomero;
	delete despachante;
	delete cerrajero;

	delete barralCortina1;
	delete cepilloLimpieza1;
	delete paqueteVirulana1;
	delete paqueteVirulana2;
	delete paqueteLanaMetal1;

	delete tenderRopa1;
	delete tenderRopa2;
	delete tablasPlanchar1;
	delete soga1;
	delete soga2;
	delete soga3;
	delete tablasInodoro1;
	delete tablasInodoro2;
	delete impBanyera1;

	delete llaveSimple1;
	delete llaveSimple2;
	delete llaveDobleTamb1;
	delete llaveCod1;

	delete cable1;
	delete lampara1;
	delete portaLampara1;
	delete enchufe1;

	delete amoladora1;
	delete lijadora1;
	delete perforadora1;

	delete cliente1;
	delete cliente2;
	delete cliente3;
	delete cliente4;

	return 0;
}
