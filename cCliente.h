#ifndef _CCLIENTE_H
#define _CCLIENTE_H

#include "cPersona.h"

/*#include "cProducto.h"
**#include "cProducto.h" CONVIENE inlcuya a las hijas que YA incluyen al padre(producto). 
**Analogia Padre mirando a hijo
*/

#include "cArtBanyo.h"
#include "cArtBazar.h"
#include "cArtCerraje.h"
#include "cArtElect.h"
#include "cArtFerre.h"
#include "cArtHerramientas.h"

#include "cRecibo.h"
#include "Exception.h"

class cCliente : public cPersona {

private:
    // Lista de punteros de tipo producto
    // donde cada uno de estos punteros puede apuntar a las clases hijas
    vector<cProducto*> listaInventario;
    vector<cProducto*> listaCompras;
    vector<cProducto*> listaComprados;
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

    vector<cProducto*> getListaInventario();
    void setListaInventario(vector<cProducto*> newLista);
    virtual void imprimir();

    void agregarProducto(cProducto* objeto);

    void setListaCompras(vector<cProducto*> newListaCompras);
    void setListaComprados(vector<cProducto*> newListaComprados);
    void setTarjeta(string newTarjeta);
    void setFondos(double newFondos);
    void setRecibo(cRecibo* newRecibo);
    void setBuscarRepuesto(bool newBuscarRepuesto);
    void setFoto(bool newFoto);
    void setArtRoto(bool newArtRoto);
    void setCambio(bool newCambio);

    vector<cProducto*> getListaCompras();
    vector<cProducto*> getListaComprados();
    string getTarjeta();
    bool getBuscarRepuesto();
    bool getFoto();
    bool getArtRoto();
    bool getCambio();
    double getFondos();

    friend class cFerreteria; // ta bien o no dijo sirne
    friend class cDuenyo;
};

#endif //_CCERRAJERO_H