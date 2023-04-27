#include "cArtHerramientas.h"

cArtHerramientas::cArtHerramientas(eArtHerramientas Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas) {
	this->tipo = Tipo;
}

cArtHerramientas::~cArtHerramientas() {
}
