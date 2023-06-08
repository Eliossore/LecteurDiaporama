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



bool database::infoDiaporama()
{
    QSqlQuery query;
    if (!query.exec("SELECT DD.rang, F.nomFamille, D.titrePhoto, D.uriPhoto"
                    "FROM DiaposDansDiaporama DD"
                    "JOIN Diapos D ON DD.idDiapo = D.idPhoto"
                    "JOIN Familles F ON D.idFam = F.idFamille"
                    "JOIN Diaporamas DP ON DD.idDiaporama = DP.idDiaporama"
                    "WHERE DP.`titre Diaporama` = 'diaporama Thierry'"
                    "ORDER BY DD.rang ASC"
                    ))
    {
        return false;
    }

}
