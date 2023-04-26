#include "cArtFerre.h"

cArtFerre::cArtFerre(eArtFerre Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas) {
	tipo = Tipo;
}

cArtFerre::~cArtFerre() {
}
