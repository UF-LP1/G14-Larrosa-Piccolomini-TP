#include "cCliente.h"
//constructor de cliente

// Constructor de Cliente, los atributos del recibo y de si quiere alquilar o no, van por default
// Siendo que no tiene recibo alguno en un principio, y no esta ddefinido de si quiere alquilar o no (false)
cCliente::cCliente(bool BuscarRepuesto, bool Foto, bool ArtRoto, bool Cambio, string Tarjeta, double Fondos, const string Dni, const string Name, string Tel, string Email, string Adress) : cPersona(Dni, Name, Tel, Email, Adress) {
    this->buscaRepuesto = BuscarRepuesto;
    this->foto = Foto;
    this->artRoto = ArtRoto;
    this->cambio = cambio;
    this->tarjeta = Tarjeta;
    this->fondos = Fondos;
    this->reciboCliente = nullptr;
    this->alquilerProducto = false;
    // Lista compras no es necesario inicializarla porque comienza en nulo por default
    // Gracias C++
}


cCliente::~cCliente() {
}


void cCliente::agregarProducto(const cProducto& objeto) {
    this->listaCompras.push_back(objeto);
}

// FUNCION OBLIGATORIAAAAA
double generarPresupuesto() {
    int i = 0;
    double suma = 0;
    vector<cProducto>
    // Aca va el procedimiento de compras basically
    // Se suma todo lo que el cliente quiere comprar, llegando a un precio final
}



bool cCliente::comprarProd() {
    return false;
}

void cCliente::cambiarProd(bool, cProducto) {
    return;
}

void cCliente::alquilarProducto(bool, cProducto) {
    return;
}

void pagarPresupuesto() {
    // invoco generar presupuesto
    // lo que retorne se lo resto a los fondos del cliente
    // queda re pobre ja
}

void cCliente::setTarjeta(string Tarjeta) {
    this->tarjeta = Tarjeta;
}

void cCliente::setFondos(double newFondos) {
    this->fondos = newFondos;
}

double cCliente::getFondos() {
    return this->fondos;
}

void cCliente::setRecibo(cRecibo* newRecibo) {
    this->reciboCliente = newRecibo;
}

