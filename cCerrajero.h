#ifndef _CCERRAJERO_H
#define _CCERRAJERO_H

#include "cEmpleado.h"


class cCerrajero: public cEmpleado {

private:
    bool autorizacionMag;

public: 
    cCerrajero(bool autorizacionMag, const string Dni, const string Name, string Tel, string Email, string Adress)
    {}
    
cArtCerraje hacerLlave();
 
void setAutorizacionMag(void bool);
    
bool getAutorizacionMag();
    
cArtCerraje hacerLlaveMag(void bool);

};

#endif //_CCERRAJERO_H