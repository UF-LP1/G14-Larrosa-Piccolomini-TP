#ifndef _CARTBAZAR_H
#define _CARTBAZAR_H

#include "cProducto.h"

class cArtBazar: public cProducto {
private:
    eArtBazar tipo;
public:
    cArtBazar(eArtBazar Tipo, double Precio, const string Medidas);
    ~cArtBazar();
};

#endif //_CARTBAZAR_H