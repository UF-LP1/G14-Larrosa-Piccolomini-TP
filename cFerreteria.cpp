#include "cFerreteria.h"

// Inicializa la ferreteria pasandoles los strings de datos del local, y si esta abierto o no como booleano,
// el resto se nulifica para posterior uso
cFerreteria::cFerreteria(const string Name, const string Adress, const string TelNum, const string Email, const string PagWeb, bool Estado) : name(Name), adress(Adress), telNum(TelNum), email(Email), paginaWeb(PagWeb) {
    this->fondos = NULL;
    this->abierta = Estado;
    this->inventario = nullptr;
    this->duenyo = nullptr;
    this->plomero = nullptr;
    this->cerrajero = nullptr;
    this->despachante = nullptr;
}

cFerreteria::~cFerreteria() {
    delete this->duenyo;
    delete this->plomero;
    delete this->cerrajero;
    delete this->despachante;

    delete this->inventario;
    
    int i = 0;
    for (i = 0; i < this->listaInventario.size(); i++) {
        delete this->listaInventario[i];
    }
}

void cFerreteria::setListaInventario(vector<cProducto*> newLista) {
    this->listaInventario = newLista;
}

vector<cProducto*> cFerreteria::getListaInventario() {
    return this->listaInventario;
}

void cFerreteria::agregarAlListado(cProducto* newElement) {
    this->listaInventario.push_back(newElement);
}

void cFerreteria::setDuenyo(cDuenyo* Duenyo) {
    this->duenyo = Duenyo;
}

void cFerreteria::setPlomero(cPlomero* Plomero) {
    this->plomero = Plomero;
}

void cFerreteria::setCerrajero(cCerrajero* Cerrajero) {
    this->cerrajero = Cerrajero;
}

void cFerreteria::setDespachante(cDespachante* Despachante) {
    this->despachante = Despachante;
}

cDuenyo* cFerreteria::getDuenyo() {
    return this->duenyo;
}

cPlomero* cFerreteria::getPlomero() {
    return this->plomero;
}

cCerrajero* cFerreteria::getCerrajero() {
    return this->cerrajero;
}

cDespachante* cFerreteria::getDespachante() {
    return this->despachante;
}

// Cambia si esta abierto o cerrado el local
void cFerreteria::setEstado(bool newEstado) {
    this->abierta = newEstado;
}

bool cFerreteria::getEstado() {
    return abierta;
}

void cFerreteria::setInventario(cInventario* newInventario) {
    this->inventario = newInventario;
}

cInventario* cFerreteria::getInventario() {
    return this->inventario;
}

// Retorna la cantidad de fondos del local
double cFerreteria::getFondos() {
    return this->fondos;
}

// Setea el valor de los fondos monetarios del local, pasados por parametro
void cFerreteria::setFondos(double newFondos) {
    this->fondos = newFondos;
}

void cFerreteria::depositarRecaudaciones() {
    double plata = getDuenyo()->getRecaudaciones();
    plata += getFondos();
    setFondos(plata);
}

/*Resta los sueldos de cada empleado en parcicular del atributo fondos
** Puede quedar negativo, significando una deuda, y en dicho caso se hace un throw al main
** Diciendo que estamos en quiebra
*/
void cFerreteria::pagarSueldos() {
    double sumaSueldos = 0.0;
    sumaSueldos += duenyo->getSueldo();
    sumaSueldos += plomero->getSueldo();
    sumaSueldos += cerrajero->getSueldo();
    sumaSueldos += despachante->getSueldo();

    // Si no hay suficiente plata para poder pagar lo sueldos
    if (getFondos() < sumaSueldos) {
        //catch en el main
        throw ComentarioException("Fondos negativos. Deuda");
    }
    setFondos(getFondos() - sumaSueldos);
}

/* Chequea si hay faltante de algun producto(cantidad = 0), y en caso de que si,
** resta el precio de compra de fondos y reestablece dicha cantidad en en inventario de a 100
** ACLARACION: solo se tiene el precio por el TIPO de producto, no el producto en si
** Nos simplifica un poco la vida
*/
void cFerreteria::reestablecerStock() {

    if (inventario->getArtFerre() == 0) {
        inventario->setArtFerre(10);
        setFondos(getFondos() - 10 * 15);
    }
    if (inventario->getArtElect() == 0) {
        inventario->setArtElect(10);
        setFondos(getFondos() - 10 * 25);
    }
    if (inventario->getArtBazar() == 0) {
        inventario->setArtBazar(10);
        setFondos(getFondos() - 10 * 40);
    }
    if (inventario->getArtBanyo() == 0) {
        inventario->setArtBanyo(10);
        setFondos(getFondos() - 10 * 30);
    }
    if (inventario->getArtCerraje() == 0) {
        inventario->setArtCerraje(10);
        setFondos(getFondos() - 10 * 60);
    }
    if (inventario->getArtHerramientas() == 0) {
        inventario->setArtHerramientas(10);
        setFondos(getFondos() - 10 * 100);
    }
}