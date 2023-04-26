/**
 * Project Untitled
 */


#ifndef _CDUENYO_H
#define _CDUENYO_H

#include "cEmpleado.h"
#include "cEmpleado.h"


class cDuenyo: public cEmpleado, public cEmpleado {
public: 
    void Attribute1;
    
/**
 * @param cProducto
 * @param cCliente
 */
void venderProd(void cProducto, void cCliente);
    
/**
 * @param cProducto
 */
void cobrarProd(void cProducto);
    
/**
 * @param Recibo
 */
void archivarRecibo(void Recibo);
    
/**
 * @param cCliente
 */
void atenderCliente(void cCliente);
};

#endif //_CDUENYO_H