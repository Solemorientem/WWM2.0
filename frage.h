#ifndef FRAGE_H
#define FRAGE_H

#include "antworten.h"
#include <vector>

class Frage
{
public:
    Frage();
    int getId();
    void setId(int id);
    QString getFrage();
    void setFrage(QString frage);
    std::vector<Antworten> getAntwortenListe();
    void setAntwortenListe(Antworten antwort);


private:
    int id;
    QString frage;
    std::vector<Antworten> antwortenListe;

};

#endif // FRAGE_H
