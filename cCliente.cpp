#include "cCliente.h"

// Constructor de Cliente, los atributos del recibo y de si quiere alquilar o no, van por default
// Siendo que no tiene recibo alguno en un principio, y no esta definido de si quiere alquilar o no (false)
cCliente::cCliente(bool BuscarRepuesto, bool Foto, bool ArtRoto, bool Cambio, string Tarjeta, double Fondos, const string Dni, const string Name, string Tel, string Email, string Adress) : cPersona(Dni, Name, Tel, Email, Adress) {
    this->buscaRepuesto = BuscarRepuesto;
    this->foto = Foto;
    this->artRoto = ArtRoto;
    this->cambio = Cambio;
    this->tarjeta = Tarjeta;
    this->fondos = Fondos;
    this->reciboCliente = nullptr;
    this->alquilerProducto = false;
    // Lista compras no es necesario inicializarla porque comienza en nulo por default
    // Gracias C++ :)
}

cCliente::~cCliente() {
    int i = 0;
    for (i=0; i<this->listaInventario.size(); i++) {
        delete this->listaInventario[i];
    }
    for (i = 0; i < this->listaCompras.size(); i++) {
        delete this->listaCompras[i];
    }
    for (i = 0; i < this->listaComprados.size(); i++) {
        delete this->listaComprados[i];
    }
    delete this->reciboCliente;
}

vector<cProducto*> cCliente::getListaInventario() {
    return this->listaInventario;
}

void cCliente::setListaInventario(vector<cProducto*> newLista) {
    this->listaInventario = newLista;
}

void cCliente::imprimir() {
    string temp = "";
    cout << getDni() << "\t" << getName() << "\t" << getTel() << "\t" << getEmail() << "\t" << getAdress() << "\n";
    cout << "Fondos Disponibles: " << getFondos() << "\tTarjeta:" << getTarjeta() << endl;

    if (getCambio())
        temp = "Si";
    else
        temp = "No";
    cout << "Busca Cambio: " << temp << endl;

    
    if (getArtRoto())
        temp = "Si";
    else
        temp = "No";
    cout << "Tiene un articulo roto: " << temp << endl;


    if (getFoto())
        temp = "Si";
    else
        temp = "No";
    cout << "Posee foto del articulo roto: " << temp << endl;


    if (getBuscarRepuesto())
        temp = "Si";
    else
        temp = "No";
    cout << "Busca un repuesto: " << temp << endl;

    cout << endl;
}

void cCliente::agregarProducto(cProducto* objeto) {
    this->listaCompras.push_back(objeto);
}

vector<cProducto*> cCliente::getListaCompras() {
    return this->listaCompras;
}

string cCliente::getTarjeta() {
    return this->tarjeta;
}

vector<cProducto*> cCliente::getListaComprados() {
    return this->listaComprados;
}

bool cCliente::getBuscarRepuesto() {
    return this->buscaRepuesto;
}

bool cCliente::getFoto() {
    return this->foto;
}

bool cCliente::getArtRoto() {
    return this->artRoto;
}

bool cCliente::getCambio() {
    return this->cambio;
}

void cCliente::setListaCompras(vector<cProducto*> newListaCompras) {
    this->listaCompras = newListaCompras;
}

void cCliente::setListaComprados(vector<cProducto*> newListaComprados) {
    this->listaComprados = newListaComprados;
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

void cCliente::setBuscarRepuesto(bool newBuscarRepuesto) {
    this->buscaRepuesto = newBuscarRepuesto;
}

void cCliente::setFoto(bool newFoto) {
    this->foto = newFoto;
}

void cCliente::setArtRoto(bool newArtRoto) {
    this->artRoto = newArtRoto;
}

void cCliente::setCambio(bool newCambio) {
    this->cambio = newCambio;
}