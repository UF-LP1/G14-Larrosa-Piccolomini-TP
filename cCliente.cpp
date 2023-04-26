#include "cCliente.h"
//constructor de cliente

cCliente :: cCliente(cProducto Objeto, bool BuscaRespuesto, bool Foto, bool ArtRoto, bool Cambio, string Tarjeta, double Fondos, cRecibo ReciboCliente,
            bool AlquilerProducto) : cPersona(Dni, Name, Tel, Email, Adress)
{
    objeto = Objeto;
    buscaRepuesto = BuscaRespuesto;
    foto = Foto;
    artRoto = ArtRoto;
    cambio = Cambio;

}
/*como se arma un presupuesto, el cliente ?
    * necesita pedirle a ferreteria una lista de sus productos
    * productos con su respectivo precio y cantidad
    *
   */
double generarPresupuesto() {}

bool cCliente::comprarProd(void bool, void cProducto) {
    return false;
}

void cCliente::cambiarProd(void bool, void cProducto) {
    return;
}

void cCliente::alquilarProducto(void bool, void cProducto) {
    return;
}

double cCliente::pagarProd(void bool) {
    return 0.0;
}

void cCliente::getPrecioArt(void string, void cFerreteria) {
    return;
}

void cCliente::setTarjeta(void string) {
    return;
}

void cCliente::setFondos(void double) {
    return;
}

/**
 * @return double
 */
double cCliente::getFondos() {
    return 0.0;
}

void cCliente::setRecibo(void cRecibo) {
    return;
}