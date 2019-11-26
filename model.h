#ifndef MODEL_H
#define MODEL_H

//classes
#include "frageninterval.h"
#include "frage.h"


#include <QDebug>
#include <list>
#include <iostream>

//QtSql
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>


class Model
{
public:
    Model();
    FragenInterval getInfo();
    void closeDB();
    QSqlDatabase db;
private:
};

#endif // MODEL_H
