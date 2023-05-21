#include "cDespachante.h"

//creo constructor de despachante
cDespachante::cDespachante(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress) : cEmpleado(sueldo, Dni, Name, Tel, Email, Adress) {
    atendido = nullptr;
}

cDespachante::~cDespachante() {
}

void cDespachante::imprimir() {
    cout << getDni() << "\t" << getName() << "\t" << getTel() << "\t" << getEmail() << "\t" << getAdress() << "\n";
    cout << "Cobra: " << getSueldo() << endl;
    if (getAtendido() != nullptr) {
        cout << "Cliente atendido:" << endl;
        getAtendido()->imprimir();
    }
    cout << endl;
}

void cDespachante::entregaDomicilio() {
    if (atendido->getAdress() != "") {

    }
}

cCliente* cDespachante::getAtendido() {
    return atendido;
}

void cDespachante::setAtendido(cCliente* newAtendido) {
    atendido = newAtendido;
}