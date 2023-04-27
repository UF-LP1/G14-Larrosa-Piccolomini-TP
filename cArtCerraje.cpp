#include "cArtCerraje.h"

// Se aclara el tipo de articulo de Cerrajeria como atributo
cArtCerraje::cArtCerraje(eArtCerraje Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas) {
	this->tipo = Tipo;
}

cArtCerraje::~cArtCerraje() {
}
