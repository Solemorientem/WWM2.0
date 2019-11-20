#include "mainwindow.h"
#include <QApplication>
#include "model.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Model model("C:/Users/Handr/Documents/wwm/wwm.db");

    model.getInfo();


    return a.exec();
}
