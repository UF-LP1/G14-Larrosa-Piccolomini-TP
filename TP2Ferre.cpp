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
	cDuenyo* jefe = new cDuenyo(1500, "1000", "Bowser", "10001", "jefe@ferreteria.com", "av1");

	// Un plomero que se llama mario... muy original lo mio
	cPlomero* plomero = new cPlomero(1200, "1001", "Mario", "10002", "plumber@ferreteria.com", "av2");

	// Ahora el despachante, hermano de mario
	cDespachante* despachante = new cDespachante(1000, "1002", "Luigi", "10002", "delivery@ferreteria.com", "av3");

	// Por ultimo el cerrajero, amigo de mario, con la autorizacion negada desde el principio
	cCerrajero* cerrajero = new cCerrajero(false, 1300, "1003", "Toad", "10003", "cerrajero@ferreteria.com", "av4");

	// Ahora comenzamos armando todos los objetos que representen productos del local
	// Primero los de baño
	cArtBanyo* barralCortina1 = new cArtBanyo(barralesCortina, 300, "Gris, 2,2 metros de largo, fijacion por sopapas");
	cArtBanyo* cepilloLimpieza1 = new cArtBanyo(cepilloLimpieza, 200, "Blanco, pelo grueso y duro");
	cArtBanyo* paqueteVirulana1 = new cArtBanyo(virulana, 50, "Ultrafina, 6 unidades");
	cArtBanyo* paqueteVirulana2 = new cArtBanyo(virulana, 60, "Fina, 6 unidades");
	cArtBanyo* paqueteLanaMetal1 = new cArtBanyo(lanaMetal, 70, "Gruesa, 4 unidades");

	ferreteriaBala->agregarAlListado(barralCortina1);
	ferreteriaBala->agregarAlListado(cepilloLimpieza1);
	ferreteriaBala->agregarAlListado(paqueteVirulana1);
	ferreteriaBala->agregarAlListado(paqueteVirulana2);
	ferreteriaBala->agregarAlListado(paqueteLanaMetal1);

	// Los de bazar
	cArtBazar* tenderRopa1 = new cArtBazar(tenderesRopa, 250, "Blanco, de metal");
	cArtBazar* tenderRopa2 = new cArtBazar(tenderesRopa, 200, "Blanco, de plastico");
	cArtBazar* tablasPlanchar1 = new cArtBazar(tablasPlanchar, 280, "Gris, 35cm de ancho y 145cm de largo");
	cArtBazar* soga1 = new cArtBazar(sogas, 50, "Nylon, 1 metro, fina");
	cArtBazar* soga2 = new cArtBazar(sogas, 50, "Nylon, 1 metro, gruesa");
	cArtBazar* soga3 = new cArtBazar(sogas, 45, "Cuerda, 1 metro, fina");
	cArtBazar* tablasInodoro1 = new cArtBazar(tablasInodoro, 100, "Blanca");
	cArtBazar* tablasInodoro2 = new cArtBazar(tablasInodoro, 100, "Negra");
	cArtBazar* impBanyera1 = new cArtBazar(impBanyera, 70, "Jabonera");

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
	cArtElect* cable1 = new cArtElect(cables, 25, "20 metros de largo, 1 cm de grueso");
	cArtElect* lampara1 = new cArtElect(lamparas, 165, "30 cm de alto");
	cArtElect* portaLampara1 = new cArtElect(portalamparas, 20, "10 cm de alto x 3 cm de radio");
	cArtElect* enchufe1 = new cArtElect(enchufes, 30, "5 cm de alto x 7 cm de largo");

	ferreteriaBala->agregarAlListado(cable1);
	ferreteriaBala->agregarAlListado(lampara1);
	ferreteriaBala->agregarAlListado(portaLampara1);
	ferreteriaBala->agregarAlListado(enchufe1);

	// Los de ferreteria generica
	cArtFerre* paqueteClavos1 = new cArtFerre(clavos, 5, "50 Clavos de hierro");
	cArtFerre* paqueteTarugos1 = new cArtFerre(tarugos, 10, "15 tarugos de hierro");
	cArtFerre* paqueteTornillos1 = new cArtFerre(tornillos, 20, "30 tornillos de hierro");

	ferreteriaBala->agregarAlListado(paqueteClavos1);
	ferreteriaBala->agregarAlListado(paqueteTarugos1);
	ferreteriaBala->agregarAlListado(paqueteTornillos1);

	// Por ultimo, las herramientas caras
	cArtHerramientas* amoladora1 = new cArtHerramientas(amoladora, 1000, "Roja,con bateria,marca Milwaukee");
	cArtHerramientas* lijadora1 = new cArtHerramientas(lijadora, 900, "Verde,con bateria,marca Husqvarna");
	cArtHerramientas* perforadora1 = new cArtHerramientas(perforadora, 2000, "Negra,con bateria,marca deWalt");

	ferreteriaBala->agregarAlListado(amoladora1);
	ferreteriaBala->agregarAlListado(lijadora1);
	ferreteriaBala->agregarAlListado(perforadora1);

	// Ahora vamos a inicializar 4 clientes
	// Uno con mucho dinero
	cCliente* cliente1 = new cCliente(false, false, false, false, "123", 1500, "321", "Mateo", "666", "pumas@hotmail.com", "av5");
	// Uno pobre como yo
	cCliente* cliente2 = new cCliente(false, false, false, false, "321", 150, "123", "Matias", "42069", "PC@hotmail.com", "av6");
	// Uno que trae un articulo roto
	cCliente* cliente3 = new cCliente(true, false, true, false, "777", 500, "6969", "2pac", "894", "california@love.com", "av7");
	// Uno que quiere cambiar una compra previa
	cCliente* cliente4 = new cCliente(false, false, false, true, "888", 500, "1234", "Grando Smokio", "555", "groove@street.com", "av8");
	// Uno que quiere una llave magnetica
	cCliente* cliente5 = new cCliente(false, false, false, false, "456", 1500, "654", "CJ", "472", "train@allyouhad.com", "av9");

	// cliente1: Vamos con la lista de compras
	vector<cProducto*> listaCL1;
	cliente1->setListaCompras(listaCL1);
	cArtBanyo* paqueteVirulanaCL1 = new cArtBanyo(virulana, 60, "Fina, 6 unidades");
	cArtBazar* sogaCL1 = new cArtBazar(sogas, 50, "Nylon, 1 metro, gruesa");
	cArtBazar* impBanyeraCL1 = new cArtBazar(impBanyera, 70, "Jabonera");
	cArtElect* lamparaCL1 = new cArtElect(lamparas, 165, "30 cm de alto");

	cliente1->agregarProducto(paqueteVirulanaCL1);
	cliente1->agregarProducto(sogaCL1);
	cliente1->agregarProducto(impBanyeraCL1);
	cliente1->agregarProducto(lamparaCL1);

	// cliente2: Lista de compras
	vector<cProducto*> listaCL2;
	cliente1->setListaCompras(listaCL2);
	cArtBanyo* paqueteVirulanaCL2 = new cArtBanyo(virulana, 50, "Ultrafina, 6 unidades");
	cArtElect* cableCL2 = new cArtElect(cables, 25, "20 metros de largo, 1 cm de grueso");
	cArtCerraje* llaveCodCL2 = new cArtCerraje(llaveCod, 150, "Acero, mango cuadrado");

	cliente2->agregarProducto(paqueteVirulanaCL2);
	cliente2->agregarProducto(cableCL2);
	cliente2->agregarProducto(llaveCodCL2);

	// cliente3: Unico producto roto que quiere cambiar
	vector<cProducto*> listaCL3;
	cliente1->setListaCompras(listaCL3);
	// Este enchufe esta roto
	cArtElect* enchufeCL3 = new cArtElect(enchufes, 30, "5 cm de alto x 7 cm de largo");
	cliente3->agregarProducto(enchufeCL3);

	// cliente4: Unico producto que quiere alquilar
	cArtHerramientas* perforadoraCL4 = new cArtHerramientas(perforadora, 2000, "Negra,con bateria,marca deWalt");
	cliente4->agregarProducto(perforadoraCL4);

	// cliente5: Solo quiere una llave magnetica
	cliente5->agregarProducto(perforadoraCL4);

	// Desarrollo del dia de trabajo
	cArtCerraje* llaveSolicitada = (cerrajero->hacerLlaveMag());

	//actualizacion
	
	try {

		cliente4->cambiarProd(ferreteriaBala);
			//funcion a prueba
	}
	catch (ComentarioException e)
	{
		e.what();
	};
	// Deletes de la Ferreteria
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

	// Deletes de los Clientes
	delete cliente1;
	delete cliente2;
	delete cliente3;
	delete cliente4;
	delete cliente5;

	delete paqueteVirulanaCL1;
	delete sogaCL1;
	delete impBanyeraCL1;
	delete lamparaCL1;

	delete paqueteVirulanaCL2;
	delete cableCL2;
	delete llaveCodCL2;

	delete enchufeCL3;

	delete perforadoraCL4;

	delete llaveSolicitada;

	return 0;
}