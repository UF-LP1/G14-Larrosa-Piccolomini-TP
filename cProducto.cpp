#include "cProducto.h"

// Inicializa un producto dandole el precio y especificaciones por parametro
// Por default el envoltorio esta nuevo (true)
cProducto::cProducto(double Precio, const string Medidas) : medidas(Medidas) {
    precio = Precio;
    envoltorio = true;
}

// Va vacio, no hay que hacer ningun delete
cProducto::~cProducto() {
}

// Retorna el precio del objeto
double cProducto::getPrecio() {
    return precio;
}

// Cambia el precio del objeto en caso de que lo necesite
void cProducto::setPrecio(double newPrecio) {
    precio = newPrecio;
}

// Cambia el estado del envoltorio al pasado por parametro
void cProducto::setEnvoltorio(bool newEnvol) {
    envoltorio = newEnvol;
}

// Retorna el envoltorio (true o false)
// True == esta nuevo
// False == caso contrario
bool cProducto::getEnvoltorio() {
    return envoltorio;
}