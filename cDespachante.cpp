#include "cDespachante.h"

//creo constructor de despachante
cDespachante::cDespachante(double sueldo, const string Dni, const string Name, string Tel, string Email, string Adress) : cEmpleado(sueldo, Dni, Name, Tel, Email, Adress) {
}

bool cDespachante::entregaDomicilio(const string,const string) {
    return false;
}