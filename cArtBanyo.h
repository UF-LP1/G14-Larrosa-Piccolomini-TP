#ifndef _CARTBANYO_H
#define _CARTBANYO_H

#include "cProducto.h"

class cArtBanyo: public cProducto {
private: 
    eArtBanyo tipo;
public:
    cArtBanyo(eArtBanyo Tipo, double Precio, const string Medidas);
    ~cArtBanyo();
};

#endif //_CARTBANYO_H