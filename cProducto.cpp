#include "cProducto.h"

// Inicializa un producto dandole el precio y especificaciones por parametro
// Por default el envoltorio esta nuevo (true)
cProducto::cProducto(double Precio, const string Medidas, bool envoltorio) : medidas(Medidas) {
    this->precio = Precio;
    this->envoltorio = true;
}
cProducto::cProducto(const cProducto& otro) : precio(otro.precio), medidas(otro.medidas), envoltorio(otro.envoltorio)
{
    /*this->precio = precio;
    this->envoltorio = true;
    */

}
// Va vacio, no hay que hacer ningun delete
cProducto::~cProducto() {
}

// Retorna el precio del objeto
double cProducto::getPrecio() {
    return this->precio;
}

// Cambia el precio del objeto en caso de que lo necesite
void cProducto::setPrecio(double newPrecio) {
    this->precio = newPrecio;
}

// Cambia el estado del envoltorio al pasado por parametro
void cProducto::setEnvoltorio(bool newEnvol) {
    this->envoltorio = newEnvol;
}

// Retorna el envoltorio (true o false)
// True == esta nuevo
// False == caso contrario
bool cProducto::getEnvoltorio() {
    return this->envoltorio;
}