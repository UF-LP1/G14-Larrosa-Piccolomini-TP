#include "headers.h"

#ifndef _CPRODUCTO_H
#define _CPRODUCTO_H

class cProducto {
private:
    double precio;
    const string medidas;
    bool envoltorio;

public:    
    cProducto(double Precio, const string Medidas, bool envoltorio);
    cProducto(const cProducto& otro);
    ~cProducto();
    double getPrecio();
    void setPrecio(double Precio);
    void setEnvoltorio(bool newEnvol);
    bool getEnvoltorio();
    
    friend class cArtCerraje;
};


#endif //_CPRODUCTO_H