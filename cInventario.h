#include "headers.h"

#ifndef _CINVENTARIO_H
#define _CINVENTARIO_H

class cInventario {
private: 
    int sArtFerre;
    int stockArtElect;
    int stockArtBazar;
    int stockArtBanyo;
    int stockArtCerraje;
    int stockArtHerramientas;

public:
    cInventario();
    ~cInventario();
    void getStocks();
};

#endif //_CINVENTARIO_H