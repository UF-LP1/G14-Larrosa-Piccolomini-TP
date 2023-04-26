/**
 * Project Untitled
 */


#ifndef _CCLIENTE_H
#define _CCLIENTE_H

#include "cPersona.h"


class cCliente: public cPersona {
public: 
    
/**
 * @param bool
 * @param cProducto
 */
bool comprarProd(void bool, void cProducto);
    
/**
 * @param bool
 * @param cProducto
 */
void cambiarProd(void bool, void cProducto);
    
/**
 * @param bool
 * @param cProducto
 */
void alquilarProducto(void bool, void cProducto);
    
/**
 * @param bool
 */
double pagarProd(void bool);
    
/**
 * @param string
 * @param cFerreteria
 */
void getPrecioArt(void string, void cFerreteria);
    
/**
 * @param string
 */
void setTarjeta(void string);
    
/**
 * @param double
 */
void setFondos(void double);
    
double getFondos();
    
/**
 * @param cRecibo
 */
void setRecibo(void cRecibo);
private: 
    cProducto objeto;
    bool buscaRepuesto;
    bool foto;
    bool artRoto;
    bool cambio;
    string tarjeta;
    double fondos;
    cRecibo reciboCliente;
    bool alquilerProducto;
};

#endif //_CCLIENTE_H