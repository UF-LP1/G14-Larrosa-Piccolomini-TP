#include "cCerrajero.h"

// Por default la autorizacion no la tiene
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

void cCerrajero::setAutorizacionMag(bool Auto) {
    this->autorizacionMag = Auto;
}

bool cCerrajero::getAutorizacionMag() {
    return false;
}

cArtCerraje* cCerrajero::hacerLlaveMag() {
    setAutorizacionMag(true);
    cArtCerraje* llaveMag = nullptr;
    return llaveMag;
}