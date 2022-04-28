#include "interfacearduinoclient.h"
#include "ui_interfacearduinoclient.h"
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>

interfacearduinoclient::interfacearduinoclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interfacearduinoclient)
{
    ui->setupUi(this);
    int ret=A.connect_arduino(); // lancer la connexion à arduino
    switch(ret){
    case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
        break;
    case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
       break;
    case(-1):qDebug() << "arduino is not available";
    }
     QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer


   //le slot update_label suite à la reception du signal readyRead (reception des données).

     if(data=="5")
     {
     ui->labelOutparking->setText("début seq sql");
     data=A.read_from_arduino();
     ui->labelOutparking->setText(data);// si les données reçues de arduino via la liaison série sont égales à 1
     // alors afficher ON
     }
}

interfacearduinoclient::~interfacearduinoclient()
{
    delete ui;
}

void interfacearduinoclient::update_label()
{
    data=A.read_from_arduino();

    if(data=="1")

    ui->labelOutparking->setText("Voiture détécté!"); // si les données reçues de arduino via la liaison série sont égales à 1
    // alors afficher ON


    else if (data=="0")

        ui->labelOutparking->setText("Pas de voiture!");   // si les données reçues de arduino via la liaison série sont égales à 0
     //alors afficher ON
    if(data=="5")
{
    ui->labelOutparking->setText("début seq sql");
    data=A.read_from_arduino();
    ui->labelOutparking->setText(data);// si les données reçues de arduino via la liaison série sont égales à 1
    // alors afficher ON
    }
}

void interfacearduinoclient::on_ouvrirbarriere_clicked()   // implémentation du slot bouton on
{
     A.write_to_arduino("5"); //envoyer 8 à arduino Pour ouvrir le barriere

}

void interfacearduinoclient::on_afficherLCDparking_clicked()
{
    A.write_to_arduino("3");// afficher un message sur LCD


}

void interfacearduinoclient::on_fermerbarriere_clicked()
{
    A.write_to_arduino("6");  //envoyer 6 à arduino Pour fermer le barriere
}

void interfacearduinoclient::on_miseajourparking_clicked()
{
     A.write_to_arduino("4");// Detection du mouvement Mise a jour
}

void interfacearduinoclient::on_demarrerparking_stateChanged(int arg1)
{
     A.write_to_arduino("8");//Démarrer le systeme


}


void interfacearduinoclient::on_envoyerparking_clicked()
{

    QString str(ui->lineEditparking->text().data());
    QByteArray  aux= str.toUtf8();
    qDebug()<<A.read_from_arduino();
    A.write_to_arduino(aux);
}

void interfacearduinoclient::on_sqlparking_clicked()
{
   //data=A.read_from_arduino();
    QString SPACE= QString(data);
    qDebug()<<SPACE;
   QSqlQuery query;
  // QString id='1';
   query.prepare("update PARKING SET SPACE=:SPACE ");


   //c un modele preparer pour lexecution
   query.bindValue(":SPACE", SPACE);

     query.exec();
}



