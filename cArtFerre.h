#ifndef _CARTFERRE_H
#define _CARTFERRE_H

#include "cProducto.h"

class cArtFerre : public cProducto {
private:
    eArtFerre tipo;
public:
    cArtFerre(eArtFerre Tipo, double Precio, const string Medidas);
    ~cArtFerre();
};

#endif //_CARTELECT_H