#include "cArtCerraje.h"

cArtCerraje::cArtCerraje(eArtCerraje Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas) {
	this->tipo = Tipo;
}

cArtCerraje::~cArtCerraje() {
}
