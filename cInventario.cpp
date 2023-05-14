#include "cInventario.h"

cInventario::cInventario(int ArtFerre, int ArtElect, int ArtBazar, int ArtBanyo, int ArtCerraje, int ArtHerramientas) {
    this->sArtFerre = ArtFerre;
    this->sArtElect = ArtElect;
    this->sArtBazar = ArtBazar;
    this->sArtBanyo = ArtBanyo;
    this->sArtCerraje = ArtCerraje;
    this->sArtHerramientas = ArtHerramientas;
    // cant = ArtFerre + ArtElect + ArtBazar + ArtBanyo + ArtCerraje + ArtHerramientas;
}

cInventario::~cInventario() {
}

int cInventario::getArtFerre() {
    return this->sArtFerre;
}

int cInventario::getArtElect() {
    return this->sArtElect;
}

int cInventario::getArtBazar() {
    return this->sArtBazar;
}

int cInventario::getArtBanyo() {
    return this->sArtBanyo;
}

int cInventario::getArtCerraje() {
    return this->sArtCerraje;
}

int cInventario::getArtHerramientas() {
    return this->sArtHerramientas;
}

void cInventario::setArtFerre(int newArt) {
    int aux = newArt - getArtFerre();
    //cant += aux;
    this->sArtFerre = newArt;
}

void cInventario::setArtElect(int newArt) {
    int aux = newArt - getArtElect();
    //cant += aux;
    this->sArtElect = newArt;
}

void cInventario::setArtBazar(int newArt) {
    int aux = newArt - getArtBazar();
    //cant += aux;
    this->sArtBazar = newArt;
}

void cInventario::setArtBanyo(int newArt) {
    int aux = newArt - getArtBanyo();
    //cant += aux;
    this->sArtBanyo = newArt;
}

void cInventario::setArtCerraje(int newArt) {
    int aux = newArt - getArtCerraje();
    //cant += aux;
    this->sArtCerraje = newArt;
}

void cInventario::setArtHerramientas(int newArt) {
    int aux = newArt - getArtHerramientas();
    //cant += aux;
    this->sArtHerramientas = newArt;
}
/*
int cInventario::getCant() {
    return cant;
}*/
