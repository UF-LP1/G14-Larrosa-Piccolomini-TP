#include "cArtBazar.h"

cArtBazar::cArtBazar(eArtBazar Tipo, double Precio, const string Medidas) : cProducto(Precio,Medidas) {
	this->tipo = Tipo;
}

cArtBazar::~cArtBazar() {
}
