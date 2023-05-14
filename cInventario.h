#include "headers.h"

#ifndef _CINVENTARIO_H
#define _CINVENTARIO_H

class cInventario {
private: 
    // Cant contará la cantidad de productos que hay en total
    static int cant;
    int sArtFerre;
    int sArtElect;
    int sArtBazar;
    int sArtBanyo;
    int sArtCerraje;
    int sArtHerramientas;

public:
    cInventario(int ArtFerre, int ArtElect, int ArtBazar, int ArtBanyo, int ArtCerraje, int ArtHerramientas);
    ~cInventario();

    int getArtFerre();
    int getArtElect();
    int getArtBazar();
    int getArtBanyo();
    int getArtCerraje();
    int getArtHerramientas();

    void setArtFerre(int newArt);
    void setArtElect(int newArt);
    void setArtBazar(int newArt);
    void setArtBanyo(int newArt);
    void setArtCerraje(int newArt);
    void setArtHerramientas(int newArt);

    static int getCant();
};

#endif //_CINVENTARIO_H