/**
 * Project Untitled
 */


#ifndef _CFERRETERIA_H
#define _CFERRETERIA_H

class cFerreteria {
public: 
    
/**
 * @param bool
 */
void setEstado(void bool);
    
void abrirLocal();
    
void cerrarLocal();
    
/**
 * @param double
 */
void setFondos(void double);
    
double getFondos();
    
/**
 * @param cDuenyo
 * @param cPlomero
 * @param cCerrajero
 * @param cDespachante
 */
void pagarSueldos(void cDuenyo, void cPlomero, void cCerrajero, void cDespachante);
    
bool chequearStock();
    
/**
 * @param double
 * @param int
 * @param int
 * @param int
 * @param int
 * @param int
 * @param int
 */
bool reestablecerStock(void double, void int, void int, void int, void int, void int, void int);
private: 
    const string name;
    const string adress;
    const string telNum;
    const string email;
    const string paginaWeb;
    bool abierta;
    cListaProductos inventario;
    double fondos;
    cDuenyo duenyo;
    cPlomero plomero;
    cCerrajero cerrajero;
    cDespachante despachante;
};

#endif //_CFERRETERIA_H