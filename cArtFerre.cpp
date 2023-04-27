#include "cArtFerre.h"

// Se aclara el tipo de articulo de Ferreteria como atributo
cArtFerre::cArtFerre(eArtFerre Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas) {
	this->tipo = Tipo;
}

cArtFerre::~cArtFerre() {
}
