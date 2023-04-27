#include "cArtElect.h"

cArtElect::cArtElect(eArtElect Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas) {
	this->tipo = Tipo;
}

cArtElect::~cArtElect() {
}
