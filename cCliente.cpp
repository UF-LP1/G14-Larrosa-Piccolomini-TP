#include "cCliente.h"
//constructor de cliente

// Constructor de Cliente, los atributos del recibo y de si quiere alquilar o no, van por default
// Siendo que no tiene recibo alguno en un principio, y no esta ddefinido de si quiere alquilar o no (false)
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
}


void cCliente::agregarProducto(cProducto* objeto) {
    this->listaCompras.push_back(objeto);
}

double cCliente::generarPresupuesto(vector<cProducto*> ListaCompras) {
    double suma = 0;
    for (int i = 0; i < ListaCompras.size(); i++) {
        suma += ListaCompras[i]->getPrecio();
    }
    return suma;
}


// Funciones sin realizar (a desarrollar)
void cCliente::comprarProducto() {
    double aPagar = generarPresupuesto(getListaCompras());
    if (aPagar > getFondos()) {
        // NO SE QUE TENEMOS QUE TIRAR, PERO ESTA LA IDEA
        // EL CATCH SE HACE EN EL MAIN
        throw;
    }
    pagarPresupuesto();

    // Hay que hacer que en lista se queden todos los productos que NO pudo comprar el cliente
    // Puede ser un metodo separado
}   


void cCliente::comprarRepuesto() {
    if (!getBuscarRepuesto()) 
        return;

}
//puede q precio varie. si precio+caro. cliente paga diferencia. si precio+barato yo se la pongo
void cCliente::cambiarProd(cFerreteria* ferreteria) {

    int j = 0;
    
    if (!getCambio() || (!getFoto() && !getArtRoto())) {
        return;
    }
    for (int i = 0; i < listaCompras.size(); i++)
        for (int j = 0; j < listaCompras.size(); j++)
            if (listaCompras[i] == ferreteria->getListaInventario()[j])
            {
                listaComprados.push_back(ferreteria->getListaInventario()[j]);
            }
    return; 
        /*hacer una sobrecarga en cProd de == donde
        // se comparen todos los atributos de los objetos
        // retorne false si alguno distinto
        // retorne true si todos atb son iguales
        
        //ac� podemos implementar TRYCATCH. 
        //si cliente no posee ninguno. entonces imposible el repuesto
        */
        
}

void cCliente::alquilarProducto() {
    //alquiler por dia
    double HerrSeguro = 0.0;

    return;

}

void cCliente::pagarPresupuesto() {
    setFondos(getFondos() - generarPresupuesto(getListaCompras()));
}

vector<cProducto*> cCliente::getListaCompras() {
    return this->listaCompras;
}

vector<cProducto*> cCliente::getListaComprados()
{
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

void cCliente::setListaComprados(vector<cProducto*> newListaComprados)
{
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
