#include "cArtBazar.h"

// Se aclara el tipo de articulo de Bazar como atributo
cArtBazar::cArtBazar(eArtBazar Tipo, double Precio, const string Medidas) : cProducto(Precio,Medidas) {
	this->tipo = Tipo;
}

cArtBazar::~cArtBazar() {
}
