
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
#include"interfaceauthentification.h" // --->la classe (graphique) qui gère l'interface de l'authentification

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connection c;
    bool test=c.createconnect();
      InterfaceAuthentification A;
    if(test)
    {

        QMessageBox::critical(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

     A.show(); //Afficher la fenêtre de l'authentification
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


      }


    return a.exec();
}
