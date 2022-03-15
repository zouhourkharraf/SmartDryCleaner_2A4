#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Application_Projet");
db.setUserName("drycleaner");//inserer nom de l'utilisateur
db.setPassword("equipe5");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
