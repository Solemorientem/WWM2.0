#include "frage.h"

Frage::Frage()
{

}

int Frage::getId() {
    return id;
}

void Frage::setId(int id) {
    this->id = id;
}

QString Frage::getFrage() {
    return frage;
}

void Frage::setFrage(QString frage) {
    this->frage = frage;
}

std::vector<Antworten> Frage::getAntwortenListe() {
    return antwortenListe;
}

void Frage::setAntwortenListe(Antworten antwort) {
    this->antwortenListe.push_back(antwort);
}

