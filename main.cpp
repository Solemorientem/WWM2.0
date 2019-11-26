#include "mainwindow.h"
#include <QApplication>
#include "model.h"
#include "controller.h"
#include <future>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Controller controller;

    auto f = std::async(&Controller::getRandomFrage, &controller);

    return a.exec();
}
