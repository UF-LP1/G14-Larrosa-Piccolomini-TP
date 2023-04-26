/**
 * Project Untitled
 */


#ifndef _CCERRAJERO_H
#define _CCERRAJERO_H

#include "cEmpleado.h"


class cCerrajero: public cEmpleado {
public: 
    
cArtCerraje hacerLlave();
    
/**
 * @param bool
 */
void setAutorizacionMag(void bool);
    
bool getAutorizacionMag();
    
/**
 * @param bool
 */
cArtCerraje hacerLlaveMag(void bool);
private: 
    bool atorizacionMag;
};

#endif //_CCERRAJERO_H