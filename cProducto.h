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
    cProducto(const cProducto& otro);
    ~cProducto();

    double getPrecio();
    void setPrecio(double Precio);
    string getMedidas();

    void setEnvoltorio(bool newEnvol);
    bool getEnvoltorio();
    
    //sobrecarga del operador ==
    bool operator==(const cProducto& otro) const {
        return (precio == otro.precio) && (medidas == otro.medidas) && (envoltorio == otro.envoltorio);
    }
    //Para sobrecargar el operador de comparación en cada clase,
    //función operator== correspondiente en cada una de ellas.

    friend class cArtCerraje;
    friend class cArtBanyo;
    friend class cArtBazar;
    friend class cArtElect;
    friend class cArtFerre;
    friend class cArtHerramientas;
};
#endif //_CPRODUCTO_H