    #include "headers.h"

#ifndef _CINVENTARIO_H
#define _CINVENTARIO_H

class cInventario {
private: 

    static int cant; // Cuenta productos en total
    int sArtFerre;
    int sArtElect;
    int sArtBazar;
    int sArtBanyo;
    int sArtCerraje;
    int sArtHerramientas;

public:
    cInventario(int ArtBanyo, int ArtBazar, int ArtCarraje, int ArtElect, int ArtFerre, int ArtHerram);
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