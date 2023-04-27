#include "cArtElect.h"

// Se aclara el tipo de articulo de Electricidad como atributo
cArtElect::cArtElect(eArtElect Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas) {
	this->tipo = Tipo;
}

cArtElect::~cArtElect() {
}
