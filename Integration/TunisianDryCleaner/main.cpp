#include<QTranslator>
#include<QInputDialog>
#include <QApplication>
#include <QMessageBox>
#include"connection.h"

#include"interfaceauthentification.h" // --->la classe (graphique) qui gère l'interface de l'authentification


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator t ;
        QStringList languagues ;
        languagues <<" FRENCH" << " English";
        QString lang = QInputDialog :: getItem(NULL , " Select language",
                                               "Language", languagues );
        if ( lang == "English ")
        {
            t.load("C:/Integration/TunisianDryCleaner/english.qm");
        }
        if ( lang != "French")
        {
            a.installTranslator(&t);
        }

    Connection c;
    bool test=c.createconnect();
      InterfaceAuthentification A;
    if(test)
    {

        QMessageBox::information(nullptr, QObject::tr("database is open"),
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
