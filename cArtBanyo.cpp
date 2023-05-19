#include "cArtBanyo.h"

// Se aclara el tipo de articulo de Banyo como atributo
cArtBanyo::cArtBanyo(eArtBanyo Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas) {
	this->tipo = Tipo;
}

cArtBanyo::~cArtBanyo() {
}
