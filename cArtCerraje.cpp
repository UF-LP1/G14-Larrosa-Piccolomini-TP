#include "cArtCerraje.h"

// Se aclara el tipo de articulo de Cerrajeria como atributo
cArtCerraje::cArtCerraje(eArtCerraje Tipo, double Precio, const string Medidas) : cProducto(Precio, Medidas, true) {
	this->tipo = Tipo;
}

cArtCerraje::cArtCerraje(const cArtCerraje& nuevaLlave) : cProducto(nuevaLlave), tipo(nuevaLlave.tipo) 
{
	//this->tipo = nuevaLlave.tipo;
		
}

cArtCerraje::~cArtCerraje() {
}
