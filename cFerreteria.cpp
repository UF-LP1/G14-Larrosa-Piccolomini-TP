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

// Va vacio, no hay que hacer ningun delete
cFerreteria::~cFerreteria() {
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

// Cambia si esta abierto o cerrado el local
void cFerreteria::setEstado(bool newEstado) {
    this->abierta = newEstado;
}

// Retorna la cantidad de fondos del local
double cFerreteria::getFondos() {
    return this->fondos;
}

// Setea el valor de los fondos monetarios del local, pasados por parametro
void cFerreteria::setFondos(double newFondos) {
    this->fondos = newFondos;
}

// Resta los sueldos de cada empleado en parcicular del atributo fondos
// Puede quedar negativo, significando una deuda, y en dicho caso se hace un throw al main
// Diciendo que estamos en quiebra
void cFerreteria::pagarSueldos() {
    double sumaSueldos = 0.0;
    sumaSueldos += duenyo->getSueldo();
    sumaSueldos += plomero->getSueldo();
    sumaSueldos += cerrajero->getSueldo();
    sumaSueldos += despachante->getSueldo();

    // Si no hay suficiente plata para poder pagar lo sueldos
    if (getFondos() < sumaSueldos) {
        throw;
    }

    setFondos(getFondos() - sumaSueldos);
}

// Chequea si hay faltante de algun producto (cantidad = 0), y en caso de que si,
// resta el precio de compra de fondos y reestablece dicha cantidad en en inventario de a 100
// ACLARACION: solo se tiene el precio por el TIPO de producto, no el producto en si
// Nos simplifica un poco la vida
void cFerreteria::reestablecerStock() {

    if (inventario->getArtFerre() == 0) {
        inventario->setArtFerre(100);
        setFondos(getFondos() - 100 * 150);
    }
    if (inventario->getArtElect() == 0) {
        inventario->setArtElect(100);
        setFondos(getFondos() - 100 * 250);
    }
    if (inventario->getArtBazar() == 0) {
        inventario->setArtBazar(100);
        setFondos(getFondos() - 100 * 400);
    }
    if (inventario->getArtBanyo() == 0) {
        inventario->setArtBanyo(100);
        setFondos(getFondos() - 100 * 300);
    }
    if (inventario->getArtCerraje() == 0) {
        inventario->setArtCerraje(100);
        setFondos(getFondos() - 100 * 600);
    }
    if (inventario->getArtHerramientas() == 0) {
        inventario->setArtHerramientas(100);
        setFondos(getFondos() - 100 * 1000);
    }
}