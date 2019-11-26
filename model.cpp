#include "model.h"

Model::Model()
{
    const QString DRIVER("QSQLITE");

        if(QSqlDatabase::isDriverAvailable(DRIVER))
        {
            db = QSqlDatabase::addDatabase(DRIVER);

            db.setDatabaseName("C:/Users/sgatzen/Documents/WWM2.0/wwmDB.db");

            if(!db.open())
                qWarning() << "Model::DatabaseConnect - ERROR: " << db.lastError().text();
        }
        else
            qWarning() << "Model::DatabaseConnect - ERROR: no driver " << DRIVER << " available";
}

FragenInterval Model::getInfo() {
   FragenInterval fragenInterval;

   if(!db.open())
       qWarning() << "Model::DatabaseConnect - ERROR: " << db.lastError().text();

   QSqlQuery query = db.exec("SELECT fragen.id, fragen.frage, antworten.id, antworten.antwort, antworten.richtig, antworten.fk_fragen FROM fragen LEFT JOIN antworten ON fragen.id = antworten.fk_fragen ORDER BY antworten.id ASC;");
   if(!query.lastError().isValid())
   {

       qDebug()<<"works!";
       //int durchläufe = 1;
       while(query.next()) {
           Frage frage;
           if(query.value("fragen.id") == query.value("antworten.fk_fragen")) {

               frage.setId(query.value("fragen.id").toInt());
               frage.setFrage(query.value("fragen.frage").toString());

               for(int i = 0; i < 4; i++ ) {
                   if(i > 0) {
                   query.next();
                   }
                   Antworten antwort;
                   antwort.setId(query.value("antworten.id").toInt());
                   antwort.setAntwort(query.value("antworten.antwort").toString());
                   antwort.setRichtig(query.value("antworten.richtig").toBool());
                   frage.setAntwortenListe(antwort);
               }
                fragenInterval.setFragenListe(frage);
           }
#ifdef Test
       qDebug() << query.value("id").toString();
       qDebug() << query.value("frage").toString();
       qDebug() << query.value("antworten.id").toString();
#endif
       }
   }
   else
   {
        qDebug()<<"---db failed to open! , error: "<<query.lastError().text();
   }
      return fragenInterval;
}

void Model::closeDB() {
    db.close();
}
