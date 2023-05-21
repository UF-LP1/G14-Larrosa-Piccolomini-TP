#ifndef _CPERSONA_H
#define _CPERSONA_H
#include "headers.h"

class cPersona {
private:
    const string dni;
    const string name;
    string tel;
    string email;
    string adress;

public:
    cPersona(const string Dni, const string Name, const string Tel, string Email, string Adress);
    ~cPersona();

    // Ponemos la funcion imprimir virtual, ya que todas las clases hijas lo tendran
    // Imprimirá todos los datos de la persona en consola
    virtual void imprimir() = 0;

    const string getDni();
    const string getName();

    string getTel();
    void setTel(string);

    string getEmail();
    void setEmail(string);

    string getAdress();
    void setAdress(string);

};

#endif //_CPERSONA_H