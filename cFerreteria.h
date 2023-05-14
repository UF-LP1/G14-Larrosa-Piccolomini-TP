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

    void setDuenyo(cDuenyo* Duenyo);
    void setPlomero(cPlomero* Plomero);
    void setCerrajero(cCerrajero* Cerrajero);
    void setDespachante(cDespachante* Despachante);

    void setEstado(bool Abierta);
    void setFondos(double Fondos);

    void pagarSueldos();
    void reestablecerStock();

    double getFondos();


};

#endif //_CFERRETERIA_H