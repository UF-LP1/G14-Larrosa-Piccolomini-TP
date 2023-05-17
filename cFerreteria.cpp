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

void cFerreteria::setListaInventario(vector<cProducto*> newLista)
{
    this->listaInventario = newLista;
}

vector<cProducto*> cFerreteria::getListaInventario()
{
    return listaInventario; 
}

void cFerreteria::agregarAlListado(cProducto* newElement)
{
    getListaInventario().push_back(newElement);
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

bool cFerreteria::getEstado() {
    return abierta;
}

void cFerreteria::setInventario(cInventario* newInventario) {
    this->inventario = newInventario;
}

cInventario* cFerreteria::getInventario() {
    return inventario;
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
// Puede quedar negativo, significando una deuda
// FALTA TERMINAR
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