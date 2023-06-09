#include "database.h"

database::database()
{

}


bool database::openDatabase()
{
    mydb = QSqlDatabase::addDatabase(CONNECT_TYPE);
    mydb.setDatabaseName(DATABASE_NAME);

    bool ok = mydb.open();
    return ok;
}



void database::closeDatabase()
{
    mydb.close();
}

QString database::getTitre(int idDiapo)
{
    QSqlQuery query;
    query.prepare("SELECT `titre Diaporama` FROM Diaporamas WHERE idDiapo = :idDiapo");
    query.bindValue(":idDiapo",idDiapo);
    query.exec();
    query.next();
    return query.value(0).toString();
}






/*
"SELECT DD.rang, F.nomFamille, D.titrePhoto, D.uriPhoto"
                    "FROM DiaposDansDiaporama DD"
                    "JOIN Diapos D ON DD.idDiapo = D.idPhoto"
                    "JOIN Familles F ON D.idFam = F.idFamille"
                    "JOIN Diaporamas DP ON DD.idDiaporama = DP.idDiaporama"
                    "WHERE DP.idDiaporama = 3"
                    "ORDER BY DD.rang ASC"
                    */
