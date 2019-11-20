#include "model.h"

Model::Model(const QString& path)
{
    const QString DRIVER("QSQLITE");

        if(QSqlDatabase::isDriverAvailable(DRIVER))
        {
            db = QSqlDatabase::addDatabase(DRIVER);

            db.setDatabaseName(path);

            if(!db.open())
                qWarning() << "Model::DatabaseConnect - ERROR: " << db.lastError().text();
        }
        else
            qWarning() << "Model::DatabaseConnect - ERROR: no driver " << DRIVER << " available";
}

void Model::getInfo() {
   QSqlQuery query;
   FragenInterval fragenInterval;
   Frage frage;

   if(!db.open())
       qWarning() << "Model::DatabaseConnect - ERROR: " << db.lastError().text();

   QSqlQuery q = db.exec("create table 123");
   if(!q.lastError().isValid())
   {
       qDebug()<<"works!";

   }
   else
   {
        qDebug()<<"---db failed to open! , error: "<<q.lastError().text();
   }
   db.close();
}

void Model::closeDB() {
    db.close();
}
