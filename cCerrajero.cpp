#include "cCerrajero.h"

// Por default la autorizacion no la tiene avalada
cCerrajero::cCerrajero(bool AutorizacionMag, double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress) : cEmpleado(sueldo, Dni, Name, Tel, Email, Adress) {
    this->autorizacionMag = false;
}

cCerrajero::~cCerrajero() {
}

cArtCerraje* cCerrajero::copiarLlave(const cArtCerraje& paraCopiar) {
     //especificar tipo de llave
    cArtCerraje* nuevaLlave = nullptr;
    nuevaLlave = new cArtCerraje(paraCopiar);
    return nuevaLlave;
}

// Setea si esta avalada o no la autorizacion por parametro
void cCerrajero::setAutorizacionMag(bool Auto) {
    this->autorizacionMag = Auto;
}

// Retorna el valor de la autorizacion en booleano
bool cCerrajero::getAutorizacionMag() {
    return this->autorizacionMag;
}

// Setea la autorizacion como valida, y genera una llave mag desde 0
cArtCerraje* cCerrajero::hacerLlaveMag() {
    setAutorizacionMag(true);
    cArtCerraje* llaveMag = nullptr;
    llaveMag = new cArtCerraje(llaveMagne, 200, "Llave magnetica solicitada");
    return llaveMag;
}

void cCerrajero::imprimir() {
    string temp = "";

    if (getAutorizacionMag())
        temp = "Si";
    else
        temp = "No";

    cout << getDni() << "\t" << getName() << "\t" << getTel() << "\t" << getEmail() << "\t" << getAdress() << "\n";
    cout << "Cobra: " <<  getSueldo() << "\t" << "Esta autorizado a fabricar una llave magnetica: " << temp << endl << endl;
}
