#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>


#define DATABASE_NAME "S201" // Indique le nom du DSN permettant d'accéder à la BD
#define CONNECT_TYPE "QODBC"


class database
{

public:
    database();
    bool openDatabase();
    void closeDatabase();

    bool infoDiaporama();



private:
    QSqlDatabase mydb;
};


#endif // DATABASE_H
