#include "cRecibo.h"

cRecibo::cRecibo(eTiposPago tipoPago, unsigned int Cuotas) {
    this->metodoPago = tipoPago;
    this->cuotas = Cuotas;
}

cRecibo::~cRecibo() {
}

unsigned int cRecibo::getCuotas() {
    return this->cuotas;
}

void cRecibo::setCuotas(unsigned int Cuotas) {
    this->cuotas = Cuotas;
}

eTiposPago cRecibo::getTipoPago() {
    return this->metodoPago;
}