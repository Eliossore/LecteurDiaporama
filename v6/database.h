#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>


#define DATABASE_NAME "S201" // Indique le nom du DSN permettant d'accéder à la BD
#define CONNECT_TYPE "QODBC"


class database
{

public:
    database();
    bool openDatabase();
    void closeDatabase();
    QString getTitre(int idDiapo);


private:
    QSqlDatabase mydb;
};


#endif // DATABASE_H
