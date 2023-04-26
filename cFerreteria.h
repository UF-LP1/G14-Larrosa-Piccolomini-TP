#include "headers.h"
#include "cInventario.h"
#include "cDuenyo.h"
#include "cPlomero.h"
#include "cCerrajero.h"
#include "cDespachante.h"

#ifndef _CFERRETERIA_H
#define _CFERRETERIA_H

// MATI WAS HERE

class cFerreteria {
private:
    const string name;
    const string adress;
    const string telNum;
    const string email;
    const string paginaWeb;
    cInventario* inventario;
    bool abierta;
    double fondos;
    cDuenyo* duenyo;
    cPlomero* plomero;
    cCerrajero* cerrajero;
    cDespachante* despachante;

public: 
    cFerreteria(const string Name, const string Adress, const string TelNum, const string Email, const string PagWeb, bool Estado);
    ~cFerreteria();

    void setEstado(bool Abierta);
    void abrirLocal();
    void cerrarLocal();
    void setFondos(double Fondos);
    double getFondos();
    void pagarSueldos();
    bool chequearStock();
    void reestablecerStock();

};

#endif //_CFERRETERIA_H