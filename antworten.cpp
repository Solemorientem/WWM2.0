#include "antworten.h"

Antworten::Antworten()
{

}

void Antworten::setId(int id) {
    this->id = id;
}

int Antworten::getId() {
    return id;
}

void Antworten::setAntwort(QString antwort) {
    this->antwort = antwort;
}

QString Antworten::getAntwort() {
    return antwort;
}

void Antworten::setRichtig(bool richtig) {
    this->richtig = richtig;
}

bool Antworten::getRichtig() {
    return richtig;
}
