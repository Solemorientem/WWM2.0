#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model.h"
#include <random>


class Controller
{
public:
    Controller();
    void getRandomFrage();
    //QString halbJoker();
    //std::vector<Frage> getFragenListe();
    //void setFragenListe();
    std::vector<Frage> fragenListe;
private:
    int Punkte;
    Model model;



};

#endif // CONTROLLER_H
