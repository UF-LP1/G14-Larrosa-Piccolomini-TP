/**
 * Project Untitled
 */


#ifndef _CRECIBO_H
#define _CRECIBO_H

class cRecibo {
public: 
    
/**
 * @param TiposPago
 * @param int
 * @param double
 * @param double
 * @param bool
 */
void emitir(void TiposPago, void int, void double, void double, void bool);
    
/**
 * @param TiposPago
 */
void getTipoPago(void TiposPago);
    
/**
 * @param Cuotas
 */
void setCuotas(void Cuotas);
private: 
    eTiposPago metodoPago;
    unsigned int cuotas;
    cProducto objetoComprado;
};

#endif //_CRECIBO_H