#include "cInventario.h"

cInventario::cInventario(int ArtFerre, int ArtElect, int ArtBazar, int ArtBanyo, int ArtCerraje, int ArtHerramientas) {
    this->sArtFerre = ArtFerre;
    this->sArtElect = ArtElect;
    this->sArtBazar = ArtBazar;
    this->sArtBanyo = ArtBanyo;
    this->sArtCerraje = ArtCerraje;
    this->sArtHerramientas = ArtHerramientas;
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
    this->sArtFerre = newArt;
}

void cInventario::setArtElect(int newArt) {
    this->sArtElect = newArt;
}

void cInventario::setArtBazar(int newArt) {
    this->sArtBazar = newArt;
}

void cInventario::setArtBanyo(int newArt) {
    this->sArtBanyo = newArt;
}

void cInventario::setArtCerraje(int newArt) {
    this->sArtCerraje = newArt;
}

void cInventario::setArtHerramientas(int newArt) {
    this->sArtHerramientas = newArt;
}