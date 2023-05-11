#include "cDespachante.h"

//creo constructor de despachante
cDespachante::cDespachante(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress) : cEmpleado(sueldo, Dni, Name, Tel, Email, Adress) {
    atendido = nullptr;
}

cDespachante::~cDespachante() {
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