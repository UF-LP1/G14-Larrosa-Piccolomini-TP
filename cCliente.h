#ifndef _CCLIENTE_H
#define _CCLIENTE_H

#include "cPersona.h"
#include "cProducto.h"
#include "cRecibo.h"

class cCliente: public cPersona {
   
private:
    // Lista de punteros de tipo producto, donde cada uno de estos punteros puede apuntar a las clases hijas
    vector<cProducto*> listaCompras;
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

    void agregarProducto(cProducto* objeto);
    double generarPresupuesto(vector<cProducto*> ListaCompras);
    void comprarProducto();
    void comprarRepuesto();
    void cambiarProd();
    void alquilarProducto();
    void pagarPresupuesto();

    void setListaCompras(vector<cProducto*> newListaCompras);
    void setTarjeta(string newTarjeta);
    void setFondos(double newFondos);
    void setRecibo(cRecibo* newRecibo);
    void setBuscarRepuesto(bool newBuscarRepuesto);
    void setFoto(bool newFoto);
    void setArtRoto(bool newArtRoto);
    void setCambio(bool newCambio);

    vector<cProducto*> getListaCompras();
    bool getBuscarRepuesto();
    bool getFoto();
    bool getArtRoto();
    bool getCambio();
    double getFondos();

};

#endif //_CCERRAJERO_H