#ifndef ANTWORTEN_H
#define ANTWORTEN_H

#include <QString>

class Antworten
{
public:
    Antworten();
// Getter und Setter
    int getId();
    void setId(int id);
    QString getAntwort();
    void setAntwort(QString antwort);
    bool getRichtig();
    void setRichtig(bool richtig);
private:
    int id;
    QString antwort;
    bool richtig;
};

#endif // ANTWORTEN_H
