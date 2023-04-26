#ifndef _CCLIENTE_H
#define _CCLIENTE_H

#include "cPersona.h"
#include "cProducto.h"


class cCliente: public cPersona {
   
private:
    cProducto* objeto;
    bool buscaRepuesto;
    bool foto;
    bool artRoto;
    bool cambio;
    string tarjeta;
    double fondos;
    cRecibo reciboCliente;
    bool alquilerProducto;

public: 
    cCliente(cProducto Objeto, bool BuscaRespuesto, bool Foto, bool ArtRoto, bool Cambio, string Tarjeta, double Fondos, cRecibo ReciboCliente,
        bool AlquilerProducto, const string Dni, const string Name, string Tel, string Email, string Adress)
    {}

    double generarPresupuesto();

 bool comprarProd(void bool, void cProducto);

void cambiarProd(void bool, void cProducto);
    
void alquilarProducto(void bool, void cProducto);

double pagarProd(void bool);
 
void getPrecioArt(void string, void cFerreteria);
 
void setTarjeta(void string);

void setFondos(void double);
    
double getFondos();
    
void setRecibo(void cRecibo);
};

#endif //_CCLIENTE_H