#include"interfaceauthentification.h"
#include"ui_interfaceauthentification.h"
#include"mainwindow.h"

#include <QApplication>
#include<QMessageBox>
#include<QString>
#include"employe.h"
#include<QSqlQuery>
#include<QObject>
#include<QSqlQueryModel>
#include"profil.h"



InterfaceAuthentification::InterfaceAuthentification(QWidget *parent) :
    QMainWindow(parent),
    uia(new Ui::InterfaceAuthentification)
{
    uia->setupUi(this);

    uia->lineEdit_mp->setValidator(new QIntValidator(1000,9999, this));

    // ************* Vérification de la connexion avec  Arduino ************

    int ret=A.connect_arduino(); // lancer la connexion à arduino
    switch(ret){
    case(0):qDebug()<< "Arduino est disponible et connecté à : "<< A.getarduino_port_name();
        break;
    case(1):qDebug() << "Arduino est disponible mais immposible de se connecter à : " <<A.getarduino_port_name();
       break;
    case(-1):qDebug() << "Arduino n'est pas disponible";
    }
    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(mise_a_jour_avec_Arduino()));
     //---> permet de lancer le slot "mise à jour avec arduino" suite à la réception du signal readyRead (reception des données).

    // ************* Fin Vérification de la connexion avec  Arduino ************

}

// ce slot permet de mettre à jour les widget de la fenêtre interfaceauthentification selon la valeur reçue par Arduino
void InterfaceAuthentification::mise_a_jour_avec_Arduino()
{
    data=A.read_from_arduino();

   if(data=="1") //si le caractère lu est 1
    {
        uia->lineEdit_mp->insert("1"); //on va insérer 1 dans le champs du mot de passe
    }
    else if(data=="2")
    {
        uia->lineEdit_mp->insert("2");
    }
   else if(data=="3")
   {
       uia->lineEdit_mp->insert("3");
   }
  else if(data=="4")
  {
      uia->lineEdit_mp->insert("4");
  }
  else if(data=="5")
  {
      uia->lineEdit_mp->insert("5");
  }
   else if(data=="6")
   {
       uia->lineEdit_mp->insert("6");
   }
  else if(data=="7")
  {
      uia->lineEdit_mp->insert("7");
  }
  else if(data=="8")
  {
      uia->lineEdit_mp->insert("8");
  }
   else if(data=="9")
   {
       uia->lineEdit_mp->insert("9");
   }
  else if(data=="0")
  {
      uia->lineEdit_mp->insert("0");
  }
  else if(data=="g") //flèche gauche appuyée
  {
      uia->lineEdit_mp->backspace(); //on va effacer un caractère
  }
   else if(data=="v") //le bouton OK
   {
      on_bouton_connexion_clicked();//on va appeler la méthode "on_bouton_connexion_clicked()" pour vérifier les données saisies
   }
   else if(data=="i") //le bouton n'est pas autorisé
   {
       QMessageBox::critical(nullptr, QObject::tr("ERREUR Arduino "),
                   QObject::tr("Bouton Invalide\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
   }


}


InterfaceAuthentification::~InterfaceAuthentification()
{
    delete uia;
}

void InterfaceAuthentification::on_bouton_connexion_clicked()
{
    if( (uia->lineEdit_login->text()=="") || (uia->lineEdit_mp->text()=="") )
    {
         QMessageBox::information(this,"Erreur !","veuillez remplir tous les champs");
    }
    else
     {
       P.set_login(uia->lineEdit_login->text());
       P.set_motdepasse(uia->lineEdit_mp->text().toInt());
       QSqlQueryModel* model=P.verifier_login_motdepassde(P.get_login() , P.get_motdepasse());
       if(model->rowCount()==0) //---> càd qu'il n'a pas trouvé ce login et ce mot de passe dans la BD
        {
         QMessageBox::critical(nullptr, QObject::tr("Modification du mot de passe TunisianDryCleaner"),
                     QObject::tr("login ou mot de passe incorrect\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
        }
       else //--> le login et le mot de passe existent
        {
           w.set_login_de_emp_connecte(P.get_login());
           hide();
           w.show();


        }

     }

}
