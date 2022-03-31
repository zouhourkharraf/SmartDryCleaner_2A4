#include "connection.h"

connection::connection()
{

}
bool connection::createconnect()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Application_Projet");//inserer le nom de la source de données ODBC
    db.setUserName("drycleaner");//inserer nom de l'utilisateur
    db.setPassword("equipe5");//inserer mot de passe de cet utilisateur

    if (db.open())
    test=true;





        return  test;



}
