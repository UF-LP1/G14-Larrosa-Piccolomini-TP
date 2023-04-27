#ifndef _CCLIENTE_H
#define _CCLIENTE_H

#include "cPersona.h"
#include "cProducto.h"
#include "cRecibo.h"


class cCliente: public cPersona {
   
private:
    vector<cProducto> listaCompras;
    bool buscaRepuesto;
    bool foto;
    bool artRoto;
    bool cambio;
    string tarjeta;
    double fondos;
    cRecibo* reciboCliente;
    bool alquilerProducto;

public: 
    cCliente(bool BuscarRepuesto, bool Foto, bool ArtRoto, bool Cambio, string Tarjeta, double Fondos, 
        const string Dni, const string Name, string Tel, string Email, string Adress);
    ~cCliente();

    void agregarProducto(const cProducto& objeto);
    void generarPresupuesto(vector<cProducto> ListaCompras);
    bool comprarProd();
    void cambiarProd(bool, cProducto);
    void alquilarProducto(bool, cProducto);
    void pagarPresupuesto();

    vector<cProducto> getListaCompras() {
        return listaCompras;
    }

    void setRecibo(const cRecibo& newRecibo);
    void setTarjeta(string);
    void setFondos(double);
    double getFondos();
    void setRecibo(cRecibo*);
};

#endif //_CCERRAJERO_H