#include "headers.h"

#ifndef _CPRODUCTO_H
#define _CPRODUCTO_H

class cProducto {
private:
    double precio;
    const string medidas;
    bool envoltorio;
    unsigned int stock;

public:    
    cProducto(double Precio, const string Medidas);
    ~cProducto();
    double getPrecio();
    void setPrecio(double Precio);
    void setEnvoltorio(bool newEnvol);
    bool getEnvoltorio();
};

#endif //_CPRODUCTO_H