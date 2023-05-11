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