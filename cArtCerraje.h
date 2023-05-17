#ifndef _CARTCERRAJE_H
#define _CARTCERRAJE_H

#include "cProducto.h"

class cArtCerraje: public cProducto {
private:
    eArtCerraje tipo;
public:
    cArtCerraje(eArtCerraje Tipo, double Precio, const string Medidas);
    cArtCerraje(const cArtCerraje& paraCopiar);
    ~cArtCerraje();

};

#endif //_CARTCERRAJE_H