#include "controller.h"

Controller::Controller()
{
    fragenListe = model.getInfo().getFragenListe();
}

void Controller::getRandomFrage() {
    std::cout << fragenListe.size() << "\n";

    fragenListe.erase(fragenListe.begin());
    std::cout << fragenListe.size() << "\n";

}
