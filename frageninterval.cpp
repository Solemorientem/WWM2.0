#include "frageninterval.h"

FragenInterval::FragenInterval()
{

}

std::vector<Frage> FragenInterval::getFragenListe() {
    return fragenListe;
}

void FragenInterval::setFragenListe(Frage frage) {
    fragenListe.push_back(frage);
}
