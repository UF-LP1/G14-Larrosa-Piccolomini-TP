#include "cPersona.h"

//creo el constructor de persona
cPersona::cPersona(const string Dni, const string Name, string Tel, string Email, string Adress) : dni(Dni), name(Name)
{
    tel = Tel;
    email = Email;
    adress = Adress;

}
const string cPersona::getDni() {
       
    return dni;
}

void cPersona::setTel(void String) {
    tel = String;
}

void cPersona::setEmail(void String) {
    email = String;
}

void cPersona::setAdress(void String) {
    adress = String;
}