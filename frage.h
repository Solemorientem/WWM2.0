#ifndef FRAGE_H
#define FRAGE_H

#include <QString>

class Frage
{
public:
    Frage();
    int getId();
    void setId(int id);
    QString getFrage();
    void setFrage(QString frage);

private:
    int id;
    QString frage;

};

#endif // FRAGE_H
