#include "cArtCerraje.h"

// Se aclara el tipo de articulo de Cerrajeria como atributo
cArtCerraje::cArtCerraje(eArtCerraje Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas, true) {
	this->tipo = Tipo;
}

cArtCerraje::cArtCerraje(const cArtCerraje& paraCopiar) : cProducto(paraCopiar) {
	this->tipo = paraCopiar.tipo;
}

cArtCerraje::~cArtCerraje() {
}