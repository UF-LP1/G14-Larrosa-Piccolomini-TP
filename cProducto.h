/**
 * Project Untitled
 */


#ifndef _CPRODUCTO_H
#define _CPRODUCTO_H

class cProducto {
public: 
    
double getPrecio();
    
/**
 * @param double
 */
void setPrecio(void double);
    
bool getEnvoltorio();
private: 
    double precio;
    const string medidas;
    bool envoltorio;
};

#endif //_CPRODUCTO_H