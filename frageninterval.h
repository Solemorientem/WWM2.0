#ifndef FRAGEINTERVAL_H
#define FRAGEINTERVAL_H

#include "frage.h"


class FragenInterval
{
public:
    FragenInterval();
    std::vector<Frage> getFragenListe();
    void setFragenListe(Frage frage);
private:
    std::vector<Frage> fragenListe;
};

#endif // FRAGEINTERVAL_H
