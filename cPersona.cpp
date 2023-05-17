#include "cPersona.h"

//creo el constructor de persona
cPersona::cPersona(const string Dni, const string Name, string Tel, string Email, string Adress) : dni(Dni), name(Name) {
    this->tel = Tel;
    this->email = Email;
    this->adress = Adress;
}

cPersona::~cPersona() {
}

const string cPersona::getDni() {
    return this->dni;
}

const string cPersona::getName()
{
    return this->name;
}

string cPersona::getTel() {
    return this->tel;
}

string cPersona::getEmail() {
    return this->email;
}

string cPersona::getAdress() {
    return this->adress;
}

void cPersona::setTel(string newTel) {
    this->tel = newTel;
}

void cPersona::setEmail(string newEmail) {
    this->email = newEmail;
}

void cPersona::setAdress(string newAdress) {
    this->adress = newAdress;
}