#ifndef _CCERRAJERO_H
#define _CCERRAJERO_H

#include "cEmpleado.h"
#include "cArtCerraje.h"

class cCerrajero: public cEmpleado {

private:
    bool autorizacionMag;
public: 
    cCerrajero(bool AutorizacionMag, double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress);
    ~cCerrajero();
    cArtCerraje* hacerLlave();
    void setAutorizacionMag(bool autorizo);
    bool getAutorizacionMag();
    cArtCerraje* hacerLlaveMag();

};

#endif //_CCERRAJERO_H