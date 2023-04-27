#include "cArtHerramientas.h"

// Se aclara el tipo de articulo de Herramienta cara como atributo
cArtHerramientas::cArtHerramientas(eArtHerramientas Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas) {
	this->tipo = Tipo;
}

cArtHerramientas::~cArtHerramientas() {
}
