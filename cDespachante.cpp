#include "cDespachante.h"

//creo constructor de despachante
cDespachante::cDespachante() : cPersona(Dni, Name, Tel, Email, Adress)
{}

bool cDespachante::entregaDomicilio(void const string, void const string) {
    return false;
}