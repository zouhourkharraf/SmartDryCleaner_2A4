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
