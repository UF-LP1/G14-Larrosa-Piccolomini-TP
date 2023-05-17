#include "cRecibo.h"

cRecibo::cRecibo(double Pago, eTiposPago tipoPago) {
    this->pago = Pago;
    this->metodoPago = tipoPago;

    // Dejamos cuotas como un atributo default, dependiendo solo del tipo de pago
    if (metodoPago == mercadoPago || metodoPago == efectivo) {
        this->cuotas = 1;
    }
    else {
        this->cuotas = 6;
    }
}

cRecibo::cRecibo(const cRecibo& paraCopiar)
{
    this->pago = paraCopiar.pago;
    this->metodoPago = paraCopiar.metodoPago;
    this->cuotas = paraCopiar.cuotas;
}

cRecibo::~cRecibo() {
}

double cRecibo::getPago()
{
    return this->pago;
}

void cRecibo::setPago(double newPago)
{
    this->pago = newPago;
}

unsigned int cRecibo::getCuotas() {
    return this->cuotas;
}

eTiposPago cRecibo::getTipoPago() {
    return this->metodoPago;
}

void cRecibo::setipoPago(eTiposPago newTipoPago)
{
    this->cuotas = newTipoPago;
}
