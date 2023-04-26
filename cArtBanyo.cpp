#include "cArtBanyo.h"

cArtBanyo::cArtBanyo(eArtBanyo Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas) {
	tipo = Tipo;
}

cArtBanyo::~cArtBanyo() {
}
