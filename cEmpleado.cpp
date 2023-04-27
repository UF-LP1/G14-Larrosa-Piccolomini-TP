#include "cEmpleado.h"

cEmpleado::cEmpleado(double Sueldo, const string Dni, const string Name, string Tel, string Email, string Adress) : cPersona(Dni, Name, Tel, Email, Adress) {
    this->sueldo = Sueldo;
}

cEmpleado::~cEmpleado() {
}

double cEmpleado::getSueldo() {
    return this->sueldo;
}

void cEmpleado::setSueldo(double newSueldo) {
    this->sueldo = newSueldo;
}

void cEmpleado::cobrarSueldo(double Cobro) {
    setSueldo(Cobro);
}