#include "mainwindow.h"
#include <QApplication>
#include "model.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Model model("C:/Users/Simon Gatzen/Documents/WWM/wwmDB.db");

    model.getInfo();


    return a.exec();
}
