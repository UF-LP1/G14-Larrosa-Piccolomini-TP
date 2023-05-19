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

cRecibo::cRecibo(const cRecibo& paraCopiar) {
    this->pago = paraCopiar.pago;
    this->metodoPago = paraCopiar.metodoPago;
    this->cuotas = paraCopiar.cuotas;
}

cRecibo::~cRecibo() {
}

void cRecibo::imprimir() {
    string temp = "";
    switch (getTipoPago()) {
    case 0:
        temp = "Tarjeta Debito";
        break;
    case 1:
        temp = "Mercado Pago";
        break;
    case 2:
        temp = "Efectivo";
        break;
    case 3:
        temp = "Tarjeta Credito";
        break;
    default:
        temp = "No tiene";
        break;
    }
    cout << "Monto del Recibo: " << getPago() << "\tTipo de pago: " << temp << "\tCantidad de cuotas: " << getCuotas() << endl << endl;
}

double cRecibo::getPago() {
    return this->pago;
}

unsigned int cRecibo::getCuotas() {
    return this->cuotas;
}

eTiposPago cRecibo::getTipoPago() {
    return this->metodoPago;
}

void cRecibo::setipoPago(eTiposPago newTipoPago) {
    this->cuotas = newTipoPago;
}
