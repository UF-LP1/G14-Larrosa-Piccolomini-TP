#include "cArtCerraje.h"

// Se aclara el tipo de articulo de Cerrajeria como atributo
cArtCerraje::cArtCerraje(eArtCerraje Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas, true) {
	this->tipo = Tipo;
}

cArtCerraje::cArtCerraje(const cArtCerraje& nuevaLlave) : cProducto(nuevaLlave)
{
	this->tipo = nuevaLlave.tipo;
}

cArtCerraje::~cArtCerraje() {
}

void cArtCerraje::imprimir()
{
	cout << "\n" << tipo << "\t" << precio << "\t" << medidas << "\n";
}

