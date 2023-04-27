#include "cCerrajero.h"

// Por default la autorizacion no la tiene avalada
cCerrajero::cCerrajero(bool AutorizacionMag, double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress) : cEmpleado(sueldo, Dni, Name, Tel, Email, Adress) {
    this->autorizacionMag = false;
}

cCerrajero::~cCerrajero() {
}

// A esto le falta desarrollo, no se especifica el tipo de llave por ejemplo
cArtCerraje* cCerrajero::hacerLlave() {
    cArtCerraje* llave = nullptr;
    return llave;
}

// Setea si esta avalada o no la autorizacion por parametro
void cCerrajero::setAutorizacionMag(bool Auto) {
    this->autorizacionMag = Auto;
}

// Retorna el valor de la autorizacion en booleano
bool cCerrajero::getAutorizacionMag() {
    return this->autorizacionMag;
}

// Setea la autorizacion como valida, y 
cArtCerraje* cCerrajero::hacerLlaveMag() {
    setAutorizacionMag(true);
    cArtCerraje* llaveMag = nullptr;
    return llaveMag;
}