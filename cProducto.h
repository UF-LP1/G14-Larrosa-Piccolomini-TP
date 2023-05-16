#include "headers.h"

#ifndef _CPRODUCTO_H
#define _CPRODUCTO_H

class cProducto {
private:

    double precio;
    const string medidas;
    bool envoltorio;

public:
    cProducto(double Precio, const string Medidas);
    cProducto(const cProducto& paraCopíar);
    ~cProducto();

    double getPrecio();
    void setPrecio(double Precio);

    void setEnvoltorio(bool newEnvol);
    bool getEnvoltorio();

    friend class cArtBanyo;
    friend class cArtBazar;
    friend class cArtCerraje;
    friend class cArtElect;
    friend class cArtFerre;
    friend class cArtGerramientas;
};

#endif //_CPRODUCTO_H