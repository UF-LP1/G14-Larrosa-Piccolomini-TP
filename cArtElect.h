#ifndef _CARTELECT_H
#define _CARTELECT_H

#include "cProducto.h"


class cArtElect: public cProducto {
private:
    eArtElect tipo;
public:
    cArtElect(eArtElect Tipo, double Precio, const string Medidas);
    ~cArtElect();
};

#endif //_CARTELECT_H