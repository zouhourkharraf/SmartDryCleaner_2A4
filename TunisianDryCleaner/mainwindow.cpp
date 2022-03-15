#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QString>
#include"employe.h"
#include<QSqlQuery>
#include<QObject>
#include<QSqlQueryModel>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // ajout des choix(items) de la liste déroulante comboBox (les fonctions) pour la page ajouter
     ui->comboBox_ajouter->addItem("Directeur");
     ui->comboBox_ajouter->addItem("Aide ménager");
     ui->comboBox_ajouter->addItem("Agent d'entretient");
     ui->comboBox_ajouter->addItem("Agent de service");
     ui->comboBox_ajouter->addItem("Employé d'accueil");
     ui->comboBox_ajouter->addItem("Responsable des RH");
     ui->comboBox_ajouter->addItem("Responsable commercial ");
     ui->comboBox_ajouter->addItem("Responsable marketing");
     ui->comboBox_ajouter->addItem("Responsable financier");

    // ajout des choix(items) de la liste déroulante comboBox (les fonctions) pour la page modifier
     ui->comboBox_modifier->addItem("Directeur");
     ui->comboBox_modifier->addItem("Aide ménager");
     ui->comboBox_modifier->addItem("Agent d'entretient");
     ui->comboBox_modifier->addItem("Agent de service");
     ui->comboBox_modifier->addItem("Employé d'accueil");
     ui->comboBox_modifier->addItem("Responsable des RH");
     ui->comboBox_modifier->addItem("Responsable commercial ");
     ui->comboBox_modifier->addItem("Responsable marketing");
     ui->comboBox_modifier->addItem("Responsable financier");

     //controle de saisie sur quelques widgets
     ui->lineEdit_tel->setValidator(new QIntValidator(10000000,99999999, this));
     ui->lineEdit_tel_2->setValidator(new QIntValidator(10000000,99999999, this));
     ui->lineEdit_mat_modif->setValidator(new QIntValidator(0,10000, this));

    ui->tab_employes->setModel(E.afficher());
    ui->comboBox_supression->setModel(E.afficher_matricules());
}


MainWindow::~MainWindow()
{
    delete ui;
}

//---> l'accès aux différentes pages du staket widgets
void MainWindow::on_bouton_page2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_bouton_page1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

//---> (fin) l'accès aux différentes pages du staket widgets

void MainWindow::on_pushButton_ok_aj_clicked()
{
    //QString x= ui->comboBox_ajouter->currentText();
   //QMessageBox::information(this,"title",ui->comboBox_ajouter->currentText());
}

void MainWindow::on_pushButton_ok_md_clicked()
{
    //QString x= ui->comboBox_modifier->currentText();
    //QMessageBox::information(this,"title",ui->comboBox_modifier->currentText());
}



void MainWindow::on_bouton_valider_clicked()
{
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString adresse=ui->lineEdit_adresse->text();
    QString fonction=ui->comboBox_ajouter->currentText();
    QString evaluation="";
    if(ui->radio1_ev->isChecked())
    {evaluation="Satisfaisante";}
    else if(ui->radio2_ev->isChecked())
        {evaluation="Bonne";}
    else if(ui->radio3_ev->isChecked())
        {evaluation="Exellente";}

    long tel=ui->lineEdit_tel->text().toLong();
    double salaire=ui->lineEdit_salaire->text().toDouble();

  Employe E(nom,prenom,adresse,tel,fonction,salaire,evaluation);
   bool test=E.ajouter();
  if(test)
  {
      ui->tab_employes->setModel(E.afficher()); //---> Actualisation de l'affichage
      ui->comboBox_supression->setModel(E.afficher_matricules()); //---> Actualisation de l'affichage de la liste déroulante pour la suppression
      QMessageBox::critical(nullptr, QObject::tr("Ajout d'un employé TunisianDryCleaner"),
                  QObject::tr("Ajout effectué.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  }
  else
  {
      QMessageBox::critical(nullptr, QObject::tr("Ajout d'un employé TunisianDryCleaner"),
                  QObject::tr("Ajout non effectué.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


    }

}

void MainWindow::on_bouton_supprimer_clicked()
{



    E.set_matricule(ui->comboBox_supression->currentText().toInt());
    bool test=E.supprimer(E.get_matricule());
    if(test)
    {
         ui->tab_employes->setModel(E.afficher()); // ---> Actualisation de l'affichage
         ui->comboBox_supression->setModel(E.afficher_matricules()); //---> Actualisation de l'affichage de la liste déroulante pour la suppression
        QMessageBox::critical(nullptr, QObject::tr("Suppresion des données TunisianDryCleaner"),
                    QObject::tr("La suppression a été effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Suppresion des données TunisianDryCleaner"),
                    QObject::tr("la suppression est échoué\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


      }


}


void MainWindow::on_bouton_mat_modifier_clicked()
{

    E.set_matricule(ui->lineEdit_mat_modif->text().toInt()); //donner à E(de mainwindow) la matricule saisie

QSqlQueryModel* model=E.recuperer(E.get_matricule());

   if(model->rowCount()==0) //---> si la fonction n'a retourné aucune ligne (càd la matricule n'existe pas dans la table employes)
   {
       QMessageBox::information(this,"Erreur","La matricule n'existe pas");
   }
   else // affichage des valeurs réccupérées
   {
       ui->lineEdit_mat_modif->setDisabled(true); //---> on va désactiver le champs de saisie pour ne pas permettre à l'utilisateur de modifier la matricule
       //définition des variables qui vont contenir les données
       QString nom_emp_modif= model->data(model->index(0,1)).toString();
       QString prenom_emp_modif= model->data(model->index(0,2)).toString();
       QString adr_emp_modif= model->data(model->index(0,3)).toString();
       QString tel_emp_modif= model->data(model->index(0,4)).toString();
       QString fonct_emp_modif= model->data(model->index(0,5)).toString();
       QString salaire_emp_modif= model->data(model->index(0,6)).toString();
       QString ev_emp_modif= model->data(model->index(0,7)).toString();
       //remplissage des champs de saisie
       ui->lineEdit_nom_2->setText(nom_emp_modif);
       ui->lineEdit_prenom_2->setText(prenom_emp_modif);
       ui->lineEdit_adresse_2->setText(adr_emp_modif);
       ui->lineEdit_tel_2->setText(tel_emp_modif);
       ui->lineEdit_salaire_2->setText(salaire_emp_modif);
       ui->comboBox_modifier->setCurrentText(fonct_emp_modif);
       if(ev_emp_modif=="Satisfaisante")
           ui->radio1_ev_2->setChecked(true);
       else if(ev_emp_modif=="Bonne")
           ui->radio2_ev_2->setChecked(true);
       else if(ev_emp_modif=="Exellente")
           ui->radio3_ev_2->setChecked(true);
       else
       {
            // à vérifier
           ui->radio1_ev_2->setChecked(false);
           ui->radio2_ev_2->setChecked(false);
           ui->radio3_ev_2->setChecked(false);


       }


   }





  // QMessageBox::information(this,"title",S);

// nom_emp,prenom_emp,adresse_emp,tel_emp,fonction,salaire,evaluation

}

void MainWindow::on_bouton_modifier_clicked()
{
    if(ui->lineEdit_mat_modif->isEnabled()) //si le champ est activé c'est à dire que soit l'utilisateur a saisi une matricule invalide soit il n'a rien saisi (le champ est vide)
    {
        QMessageBox::information(this,"Erreur","Veuillez préciser la matricule de l'employé à supprimer");
    }
    else //si le champs est désactivé dans ce cas la matricule est valide
    {
        QString nom=ui->lineEdit_nom_2->text();
        QString prenom=ui->lineEdit_prenom_2->text();
        QString adresse=ui->lineEdit_adresse_2->text();
        QString fonction=ui->comboBox_modifier->currentText();
        QString evaluation="";
        if(ui->radio1_ev_2->isChecked())
        {evaluation="Satisfaisante";}
        else if(ui->radio2_ev_2->isChecked())
            {evaluation="Bonne";}
        else if(ui->radio3_ev_2->isChecked())
            {evaluation="Exellente";}

        long tel=ui->lineEdit_tel_2->text().toLong();
        double salaire=ui->lineEdit_salaire_2->text().toDouble();

      Employe E(nom,prenom,adresse,tel,fonction,salaire,evaluation);

      int matricule_a_modifier=ui->lineEdit_mat_modif->text().toInt();
       bool test=E.modifier(matricule_a_modifier);
       if(test)
       {
            ui->tab_employes->setModel(E.afficher()); // ---> Actualisation de l'affichage
            ViderLesChamps_PageModifier();//remettre les champs de saisie dans leur état de départ
           QMessageBox::critical(nullptr, QObject::tr("Modification des données TunisianDryCleaner"),
                       QObject::tr("La modification a été efféctuée.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
       }
       else
       {
           QMessageBox::critical(nullptr, QObject::tr("Modification des données TunisianDryCleaner"),
                       QObject::tr("la modification est échoué\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);


         }


    }





}

void MainWindow::ViderLesChamps_PageModifier()
 {
      if(!ui->lineEdit_mat_modif->isEnabled())
      { // on va activer le champ de saisie et le rendre vide
        ui->lineEdit_mat_modif->setEnabled(true);
        ui->lineEdit_mat_modif->setText("");
      }
      ui->lineEdit_nom_2->setText("");
      ui->lineEdit_prenom_2->setText("");
      ui->lineEdit_adresse_2->setText("");
      ui->lineEdit_tel_2->setText("");
      ui->lineEdit_salaire_2->setText("");
      // à vérifier
      ui->radio1_ev_2->setChecked(false);
      ui->radio2_ev_2->setChecked(false);
      ui->radio3_ev_2->setChecked(false);

 }

void MainWindow::on_bouton_annuler_mdf_clicked()
{
 ViderLesChamps_PageModifier();
}
