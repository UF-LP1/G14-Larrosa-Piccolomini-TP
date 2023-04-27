#ifndef _CARTHERRAMIENTAS_H
#define _CARTHERRAMIENTAS_H

#include "cProducto.h"

class cArtHerramientas: public cProducto {
private:
    eArtHerramientas tipo;
public:
    cArtHerramientas(eArtHerramientas Tipo, double Precio, const string Medidas);
    ~cArtHerramientas();
};

#endif //_CARTHERRAMIENTAS_H