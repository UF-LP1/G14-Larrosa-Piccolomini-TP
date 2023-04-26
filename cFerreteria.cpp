#include "cFerreteria.h"

// Inicializa la ferreteria pasandoles los strings de datos del local, y si esta abierto o no como booleano,
// el resto se nulifica para posterior uso
cFerreteria::cFerreteria(const string Name, const string Adress, const string TelNum, const string Email, const string PagWeb, bool Estado) : name(Name), adress(Adress), telNum(TelNum), email(Email), paginaWeb(PagWeb) {
    fondos = NULL;
    abierta = Estado;
    inventario = nullptr;
    duenyo = nullptr;
    plomero = nullptr;
    cerrajero = nullptr;
    despachante = nullptr;
}

// Va vacio, no hay que hacer ningun delete
cFerreteria::~cFerreteria() {
}

// Cambia si esta abierto o cerrado el local
void cFerreteria::setEstado(bool newEstado) {
    abierta = newEstado;
}

// Setea el estado en abierto
void cFerreteria::abrirLocal() {
    setEstado(true);
    return;
}

// Setea el estado en cerrado
void cFerreteria::cerrarLocal() {
    setEstado(false);
    return;
}

// Retorna la cantidad de fondos del local
double cFerreteria::getFondos() {
    return fondos;
}

// Setea el valor de los fondos monetarios del local, pasados por parametro
void cFerreteria::setFondos(double newFondos) {
    fondos = newFondos;
}

// Resta los sueldos de cada empleado en parcicular del atributo fondos
// Puede quedar negativo, significando una deuda
void cFerreteria::pagarSueldos() {
    double sumaSueldos = 0.0;
    setFondos(sumaSueldos);
}

// Mira el stock de todos los productos
// Si no falta nada, retorna false (0)
// Si falta algo, por minimo que sea, retorna true (1)
bool cFerreteria::chequearStock() {
    bool flag = false;
    return flag;
}

// Chequea si hay faltante de algun producto (cantidad = 0), y en caso de que si,
// resta el precio de compra de fondos y reestablece dicha cantidad en en inventario
void cFerreteria::reestablecerStock() {

}