#include "connection.h"

Connection::Connection(){}

bool Connection::createconnect()
{
db = QSqlDatabase::addDatabase("QODBC");
bool test=false;
db.setDatabaseName("Source_Application_Projet");
db.setUserName("drycleaner");//inserer nom de l'utilisateur
db.setPassword("equipe5");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
     return  test;
}

void Connection::closeConnection(){db.close();}
