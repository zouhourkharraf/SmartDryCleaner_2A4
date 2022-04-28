#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QString>
#include<QSqlQuery>
#include<QObject>
#include<QSqlQueryModel>
#include"profil.h"
#include<QPrinter>
#include<QPainter>
#include <QDebug>
#include <QMetaObject>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QtPrintSupport>
#include <QMessageBox>
#include <QIntValidator>
#include <QStandardItem>
#include <QTabWidget>
#include <QPaintEvent>
#include <QCameraImageCapture>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QVBoxLayout>
#include <QCameraInfo>
#include <QFileDialog>
#include <QtWidgets/QApplication>
#include <QtWidgets>
#include <fstream>
#include <string>
#include <vector>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QImage>

#include "statistique.h"
#include "client.h"
#include "qrcode.h"
#include "qrcode.cpp"
#include "interfacearduinoclient.h"

#include "fournisseurs.h"
#include <QDate>
#include <QTableView>
#include <QDesktopServices>
#include <QMediaPlayer>
#include<QComboBox>
#include <QPrintDialog>

#include "produit.h"
#include <QPrintDialog>
#include<QtGui>
#include<QTimer>
#include<QDateTime>
#include "interfacearduinoproduit.h"
QTimer *timer1 = new QTimer();

#include "service.h"
#include "smtp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //***************************************Début  Gestion des Employees*****************************

    // ajout des choix(items) de la liste déroulante comboBox (les fonctions) pour la page ajouter
     ui->comboBox_ajouter_emp->addItem("Directeur");
     ui->comboBox_ajouter_emp->addItem("Aide ménager");
     ui->comboBox_ajouter_emp->addItem("Agent d'entretient");
     ui->comboBox_ajouter_emp->addItem("Agent de service");
     ui->comboBox_ajouter_emp->addItem("Employé d'accueil");
     ui->comboBox_ajouter_emp->addItem("Responsable des RH");
     ui->comboBox_ajouter_emp->addItem("Responsable commercial ");
     ui->comboBox_ajouter_emp->addItem("Responsable marketing");
     ui->comboBox_ajouter_emp->addItem("Responsable financier");

    // ajout des choix(items) de la liste déroulante comboBox (les fonctions) pour la page modifier
     ui->comboBox_modifier_employe->addItem("Directeur");
     ui->comboBox_modifier_employe->addItem("Aide ménager");
     ui->comboBox_modifier_employe->addItem("Agent d'entretient");
     ui->comboBox_modifier_employe->addItem("Agent de service");
     ui->comboBox_modifier_employe->addItem("Employé d'accueil");
     ui->comboBox_modifier_employe->addItem("Responsable des RH");
     ui->comboBox_modifier_employe->addItem("Responsable commercial ");
     ui->comboBox_modifier_employe->addItem("Responsable marketing");
     ui->comboBox_modifier_employe->addItem("Responsable financier");

     //controle de saisie sur quelques widgets
     ui->lineEdit_tel_emp->setValidator(new QIntValidator(10000000,99999999, this));
     ui->lineEdit_tel_2_emp->setValidator(new QIntValidator(10000000,99999999, this));
     ui->lineEdit_mat_modif->setValidator(new QIntValidator(0,10000, this));
     ui->lineEdit_mp_profil->setValidator(new QIntValidator(1000,9999, this));
     ui->lineEdit_mp_modifier->setValidator(new QIntValidator(1000,9999, this));

    ui->tab_employes->setModel(E.afficher());
    ui->comboBox_supression_emp->setModel(E.afficher_matricules());
    ui->comboBox_matricule_profils->setModel(P.recuperer_matricule_pour_profil());//---> Affichage d'une liste déroulante pour les matricule des employés qui non pas encore créé un profil
    ui->comboBox_supression_profils->setModel(P.recuperer_login_profil());
    ui->comboBox_mat_bulletin_depaie->setModel(E.afficher_matricules());

    //Gestion de chat
    socket = new QTcpSocket(this);
    connect(socket, SIGNAL(readyRead()), this, SLOT(donneesRecues()));
    connect(socket, SIGNAL(connected()), this, SLOT(connecte()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(deconnecte()));
    connect(socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(erreurSocket(QAbstractSocket::SocketError)));

    tailleMessage = 0;
    //************************************** FIN Gestion des Employees*****************************



//**********************************Début Gestion des Clients*******************
    //Controle de saisie
    ui->le_idclient->setValidator(new QIntValidator(0, 99999, this));
    ui->le_telclient->setValidator(new QIntValidator(0, 99999, this));
    ui->m_idclient->setValidator(new QIntValidator(0, 999999, this));
    ui->m_telclient->setValidator(new QIntValidator(0, 999999, this));
    ui->le_nbserviceclient->setValidator(new QIntValidator(0, 999, this));
    ui->m_nbserviceclient->setValidator(new QIntValidator(0, 999, this));

        ui->tab_client->setModel(C.afficher_client());
    //Prise de la photo via la caméra
        mCamera = new QCamera(this);
        mCameraViewfinder = new QCameraViewfinder(this);
        mCameraImageCapture = new QCameraImageCapture(mCamera, this);


        m = new QVBoxLayout;
        mOpcionesMenu =new QMenu("Opcines", this);
        mEncenderAction = new QAction("Ouvrir camera",this);
        mApagarAction = new QAction("Prendre photo",this);
        mCapturarAction =new QAction("Enregistrer photo",this);


        mOpcionesMenu->addActions({ mEncenderAction,mApagarAction, mCapturarAction});
        ui->optioncamclient->setMenu(mOpcionesMenu);
         mCamera->setViewfinder(mCameraViewfinder);

      m->addWidget(mCameraViewfinder);
      m->setMargin(0);
    ui->scrollAreaclient->setLayout(m);
    connect(mEncenderAction,&QAction:: triggered,[&]()
    {
    mCamera->start();
    });
    connect(mApagarAction,&QAction::triggered, [&]()
    {
    mCamera->stop();
    });
      connect (mCapturarAction,&QAction::triggered, [&]()
      {
          auto filename = QFileDialog:: getSaveFileName(this,"capturar","/",
                                                        "imagen (*.jpg;*.jpeg)");
          if(filename.isEmpty()){
              return;
      }
    mCameraImageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
    QImageEncoderSettings imageEncoderSettings;
    imageEncoderSettings.setCodec("image/jpeg");
    imageEncoderSettings.setResolution(1600,1200);
      mCameraImageCapture->setEncodingSettings(imageEncoderSettings);
      mCamera->setCaptureMode(QCamera::CaptureStillImage);
      mCamera->start();
      mCamera->searchAndLock();
      mCameraImageCapture->capture(filename);
      mCamera->unlock();
    });

//**********************************FIN Gestion des Clients************************

//********************************Début Gestion des Fournisseurs*****************


      player = new QMediaPlayer(this);
      ui->stackedWidget->setCurrentIndex(0);
      ui->idfournisseur->setValidator(new QIntValidator(0, 99999999, this));
      ui->telephonefournisseur->setValidator(new QIntValidator(0, 99999999, this));
      ui->tabfourn->setModel(f.afficher_fournisseur());




//********************************FIN Gestion des Fournisseurs*****************

//********************************Début Gestion des Produits*****************

      ui->tableView->setModel(Etmp.afficher_produit());
      ui->idproduit_2->setValidator(new QIntValidator(0, 99999999, this));
      ui->qteproduit_2->setValidator(new QIntValidator(0, 99999999, this));
      ui->prixproduit_2->setValidator(new QIntValidator(0, 99999999, this));
      ui->prixproduit2_2->setValidator(new QIntValidator(0, 99999999, this));
      ui->idproduit2_2->setValidator(new QIntValidator(0, 99999999, this));
      ui->qteproduit2_2->setValidator(new QIntValidator(0, 99999999, this));


     QTimer *timer = new QTimer(this);
     connect (
                timer ,
                 SIGNAL(timeout()),
                 this,
                SLOT (showTime())
                 );
     timer->start();
     QDateTime dateTime=QDateTime:: currentDateTime();
     QString datetimetext=dateTime.toString();
     ui->DateTime->setText(datetimetext);
//********************************FIN Gestion des Produits*****************

//********************************Début Gestion des Services*****************
ui->tableservice->setModel(Serv.afficher_service());
//********************************Début Gestion des Services*****************
}


MainWindow::~MainWindow()
{
    delete ui;
}

//***************************************Début  Gestion des Employees*****************************

void MainWindow::set_login_de_emp_connecte(QString login_emp_connecte)
{
    ui->label_employe_connecte->setText("Login : "+login_emp_connecte);
}

//---> l'accès aux différentes pages du staket widgets
void MainWindow::on_bouton_page2_emp_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_bouton_page1_emp_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_boutonpg_2_vers_3_emp_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_boutonpg_3_vers_2_emp_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_boutonpg_3_vers_4_emp_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_boutonpg_4_vers_3_emp_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//---> (fin) l'accès aux différentes pages du staket widgets



void MainWindow::on_bouton_valider_emp_clicked()
{
    QString nom=ui->lineEdit_nom_emp->text();
    QString prenom=ui->lineEdit_prenom_emp->text();
    QString adresse=ui->lineEdit_adresse_emp->text();
    QString fonction=ui->comboBox_ajouter_emp->currentText();
    QString evaluation="";
    if(ui->radio1_ev->isChecked())
    {evaluation="Satisfaisante";}
    else if(ui->radio2_ev->isChecked())
        {evaluation="Bonne";}
    else if(ui->radio3_ev->isChecked())
        {evaluation="Exellente";}

    long tel=ui->lineEdit_tel_emp->text().toLong();
    double salaire=ui->lineEdit_salaire_emp->text().toDouble();

  Employe E(nom,prenom,adresse,tel,fonction,salaire,evaluation);
   bool test=E.ajouter();
  if(test)
  {
      ui->tab_employes->setModel(E.afficher()); //---> Actualisation de l'affichage
      ui->comboBox_supression_emp->setModel(E.afficher_matricules()); //---> Actualisation de l'affichage de la liste déroulante pour la suppression
      ui->comboBox_matricule_profils->setModel(P.recuperer_matricule_pour_profil()); //--->Actualisation de l'affichage de la liste déroulante pour les matricule des employés qui non pas encore créé un profil
      ui->comboBox_mat_bulletin_depaie->setModel(E.afficher_matricules());

      QMessageBox::information(nullptr, QObject::tr("Ajout d'un employé TunisianDryCleaner"),
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

void MainWindow::on_bouton_supprimer_emp_clicked()
{

    E.set_matricule(ui->comboBox_supression_emp->currentText().toInt());
    bool test=E.supprimer(E.get_matricule());
    if(test)
    {
         ui->tab_employes->setModel(E.afficher()); // ---> Actualisation de l'affichage
         ui->comboBox_supression_emp->setModel(E.afficher_matricules()); //---> Actualisation de l'affichage de la liste déroulante pour la suppression
         ui->comboBox_matricule_profils->setModel(P.recuperer_matricule_pour_profil());//--->Actualisation de l'affichage de la liste déroulante pour les matricule des employés qui non pas encore créé un profil
         ui->comboBox_supression_profils->setModel(P.recuperer_login_profil());
         ui->comboBox_mat_bulletin_depaie->setModel(E.afficher_matricules());

        QMessageBox::information(nullptr, QObject::tr("Suppresion des données TunisianDryCleaner"),
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
       ui->lineEdit_nom_2_emp->setText(nom_emp_modif);
       ui->lineEdit_prenom_2_emp->setText(prenom_emp_modif);
       ui->lineEdit_adresse_2_emp->setText(adr_emp_modif);
       ui->lineEdit_tel_2_emp->setText(tel_emp_modif);
       ui->lineEdit_salaire_2_emp->setText(salaire_emp_modif);
       ui->comboBox_modifier_employe->setCurrentText(fonct_emp_modif);
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

void MainWindow::on_bouton_modifier_emp_clicked()
{
    if(ui->lineEdit_mat_modif->isEnabled()) //si le champ est activé c'est à dire que soit l'utilisateur a saisi une matricule invalide soit il n'a rien saisi (le champ est vide)
    {
        QMessageBox::information(this,"Erreur","Veuillez préciser la matricule de l'employé à supprimer");
    }
    else //si le champs est désactivé dans ce cas la matricule est valide
    {
        QString nom=ui->lineEdit_nom_2_emp->text();
        QString prenom=ui->lineEdit_prenom_2_emp->text();
        QString adresse=ui->lineEdit_adresse_2_emp->text();
        QString fonction=ui->comboBox_modifier_employe->currentText();
        QString evaluation="";
        if(ui->radio1_ev_2->isChecked())
        {evaluation="Satisfaisante";}
        else if(ui->radio2_ev_2->isChecked())
            {evaluation="Bonne";}
        else if(ui->radio3_ev_2->isChecked())
            {evaluation="Exellente";}

        long tel=ui->lineEdit_tel_2_emp->text().toLong();
        double salaire=ui->lineEdit_salaire_2_emp->text().toDouble();

      Employe E(nom,prenom,adresse,tel,fonction,salaire,evaluation);

      int matricule_a_modifier=ui->lineEdit_mat_modif->text().toInt();
       bool test=E.modifier(matricule_a_modifier);
       if(test)
       {
            ui->tab_employes->setModel(E.afficher()); // ---> Actualisation de l'affichage
            ViderLesChamps_PageModifier();//remettre les champs de saisie à leurs état de départ
           QMessageBox::information(nullptr, QObject::tr("Modification des données TunisianDryCleaner"),
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
      ui->lineEdit_nom_2_emp->setText("");
      ui->lineEdit_prenom_2_emp->setText("");
      ui->lineEdit_adresse_2_emp->setText("");
      ui->lineEdit_tel_2_emp->setText("");
      ui->lineEdit_salaire_2_emp->setText("");
      // à vérifier
      ui->radio1_ev_2->setChecked(false);
      ui->radio2_ev_2->setChecked(false);
      ui->radio3_ev_2->setChecked(false);

 }

void MainWindow::on_bouton_annuler_mdf_clicked()
{
 ViderLesChamps_PageModifier();
}

//Les boutons du tri : ******************

void MainWindow::on_radio_tri1_clicked()
{
    QString CritereTri="nom_emp";
   ui->tab_employes_tri->setModel(E.affichage_trie(CritereTri));
}
void MainWindow::on_radio_tri2_clicked()
{
    QString CritereTri="prenom_emp";
   ui->tab_employes_tri->setModel(E.affichage_trie(CritereTri));
}
void MainWindow::on_radio_tri3_clicked()
{
      QString CritereTri="salaire";
      ui->tab_employes_tri->setModel(E.affichage_trie(CritereTri));
}


//(Fin) Les boutons du tri : ******************

//****************** les bouton radio pour la recherche ******************

//lorsqu'on coche l'un des boutons radio la zone de recherche sera vidé automatiquement pour s'assurer que l'utilisateur va effectuer une recherche selon le critère choisi (le critère de ce bouton radio)
//en effet l'utilisateur peut chercher selon un critère puis il change ce critère mais le maot clé reste la même mais avec cette méthode si l'utilisateur coche une autre bouton le champ de saisi sera vidé automatiquement pour qu'il puisse insérer le nouveau mot clé

void MainWindow::on_radio_rech1_clicked()
{
    ui->lineEdit_recherche_emp->setText("");
}

void MainWindow::on_radio_rech2_clicked()
{
    ui->lineEdit_recherche_emp->setText("");
}

void MainWindow::on_radio_rech3_clicked()
{
      ui->lineEdit_recherche_emp->setText("");
}

//****************** Fin des bouton radio pour la recherche ******************


// **************** La zone de recherche ********************

void MainWindow::on_lineEdit_recherche_emp_textChanged(const QString &arg1)
{
    if(ui->radio_rech1->isChecked())
    {
       ui->tab_recherche_emp->setModel(E.recherche_selon_matricule(arg1) );
    }
    else if(ui->radio_rech2->isChecked())
    {
        ui->tab_recherche_emp->setModel(E.recherche_selon_nomprenom(arg1) );
    }
    else if(ui->radio_rech3->isChecked())
    {
        ui->tab_recherche_emp->setModel(E.recherche_selon_adresse(arg1) );
    }

}
// **************** Fin de La zone de recherche ********************

void MainWindow::on_bouton_ok_matricule_profil_clicked()
{
    ui->comboBox_matricule_profils->setDisabled(true);
    P.set_matricule(ui->comboBox_matricule_profils->currentText().toInt()); //donner à P(de mainwindow) la matricule sélectionné
    QSqlQueryModel * model=P.recuperer_prenom_pour_loginprofil(P.get_matricule()); //le résultat de la fonction recuperer_prenom_pour_loginprofil
    QString PrenomEmploye=model->data(model->index(0,0)).toString();
    QString LoginParDefaut=ui->comboBox_matricule_profils->currentText()+PrenomEmploye; // -->login=matricule de l'employé + nom de l'employé
    ui->lineEdit_login->setText(LoginParDefaut);
    ui->lineEdit_login->setReadOnly(true); //-->le transformer en mode lecture seule pour ne pas permettre à l'utilisateur de modifier sa valeur
    P.set_login(ui->lineEdit_login->text());
}



void MainWindow::on_bouton_ajouter_profil_clicked()
{
  if( (!ui->comboBox_matricule_profils->isEnabled()) && (ui->lineEdit_login->isReadOnly()) && (ui->lineEdit_mp_profil->text()!="")) //-->dans ce cas la matricule de l'employé et le nom de l'employé sont valides
  {
      P.set_motdepasse(ui->lineEdit_mp_profil->text().toInt());
      bool test=P.ajouter_profil();
      if(test)
      {
       ui->comboBox_matricule_profils->setModel(P.recuperer_matricule_pour_profil()); //--->Actualisation de l'affichage de la liste déroulante pour les matricule des employés qui non pas encore créé un profil
       ui->comboBox_supression_profils->setModel(P.recuperer_login_profil());
       ui->comboBox_matricule_profils->setEnabled(true);//activer le combobox après l'ajout
       ui->lineEdit_login->setReadOnly(false);//désactiver le mode lecture seule pour le champ du login
       //rendre les champs vides :
       ui->lineEdit_login->setText("");
       ui->lineEdit_mp_profil->setText("");

          QMessageBox::information(nullptr, QObject::tr("Ajout d'un profil TunisianDryCleaner"),
                      QObject::tr("L'ajout du profil a été effectué avec succès.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
      }
      else
      {
          QMessageBox::critical(nullptr, QObject::tr("Ajout d'un profil TunisianDryCleaner"),
                      QObject::tr("Échec de l'ajout du profil.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);


        }
  }
  else
  {
    QMessageBox::critical(this,"Erreur","Veuillez saisir des informations valides ");
  }

}


void MainWindow::on_bouton_ok_login_modifier_clicked()
{
    P.set_login(ui->lineEdit_login_modifier->text());

  QSqlQueryModel * model=P.recuperer_profil(P.get_login());

  if(model->rowCount()==0) //---> si la fonction n'a retourné aucune ligne (càd le login n'existe pas dans la table profils)
  {
      QMessageBox::critical(this,"Erreur","Le login n'existe pas");
  }
  else
  {
      ui->lineEdit_login_modifier->setDisabled(true);
  }

}


void MainWindow::on_bouton_modifier_profil_clicked()
{
    if( (!ui->lineEdit_login_modifier->isEnabled()) && (ui->lineEdit_mp_modifier->text()!="") )
    {
        P.set_motdepasse(ui->lineEdit_mp_modifier->text().toInt());
        bool test=P.modifier_profil(P.get_login());
        if(test)
        {
            ui->lineEdit_login_modifier->setEnabled(true);
            ui->lineEdit_login_modifier->setText("");
            ui->lineEdit_mp_modifier->setText("");

            QMessageBox::information(nullptr, QObject::tr("Modification du mot de passe TunisianDryCleaner"),
                        QObject::tr("La modification a été efféctuée.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("Modification du mot de passe TunisianDryCleaner"),
                        QObject::tr("la modification est échoué\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

          }

    }
    else
    {
       QMessageBox::critical(this,"Erreur","Informations invalides");
    }

}




void MainWindow::on_bouton_supprimer_profil_clicked()
{
   P.set_login(ui->comboBox_supression_profils->currentText());
   bool test=P.supprimer_profil(P.get_login());
   if(test)
   {
       ui->comboBox_matricule_profils->setModel(P.recuperer_matricule_pour_profil());//--->Actualisation de l'affichage de la liste déroulante pour les matricule des employés qui non pas encore créé un profil
       ui->comboBox_supression_profils->setModel(P.recuperer_login_profil());
       QMessageBox::information(nullptr, QObject::tr("Suppresion d'un profil TunisianDryCleaner"),
                   QObject::tr("La suppression a été effectué .\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
   }
   else
   {
       QMessageBox::critical(nullptr, QObject::tr("Suppresion d'un profil TunisianDryCleaner"),
                   QObject::tr("la suppression est échoué\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

     }

}



// ******************************** Slots (pour le Chat) ********************************

// Tentative de connexion au serveur
void MainWindow::on_boutonConnexionChat_clicked()
{
        //on va remplir le champ du login pour le chat avec la valeur du login de l'employé connecté(label_employe_connecte)
        ui->pseudoChat->setText(ui->label_employe_connecte->text());
        //on désactive le champ de saisie
        ui->pseudoChat->setDisabled(true);
        // On annonce sur la fen�tre qu'on est en train de se connecter
        ui->listeMessages->append(tr("<em>Tentative de connexion en cours...</em>"));
        ui->boutonConnexionChat->setEnabled(false);

       socket->abort(); // On désactive les connexions précédentes s'il y en a
        socket->connectToHost("127.0.0.1" , 50885); // On se connecte au serveur demande


}

// Envoi d'un message au serveur
void MainWindow::on_boutonEnvoyerChat_clicked()
{
    QByteArray paquet;
    QDataStream out(&paquet, QIODevice::WriteOnly);

    // On pr�pare le paquet � envoyer
    QString messageAEnvoyer = tr("<strong><font color=green>") + ui->pseudoChat->text() +tr("</font></strong> : <br>") + ui->messageChat->text();

    out << (quint16) 0;
    out << messageAEnvoyer;
    out.device()->seek(0);
    out << (quint16) (paquet.size() - sizeof(quint16));

    socket->write(paquet); // On envoie le paquet

    ui->messageChat->clear(); // On vide la zone d'�criture du message
    ui->messageChat->setFocus(); // Et on remet le curseur � l'int�rieur
}

// Appuyer sur la touche Entr�e a le m�me effet que cliquer sur le bouton "Envoyer"
void MainWindow::on_messageChat_returnPressed()
{
    on_boutonEnvoyerChat_clicked();
}



// On a re�u un paquet (ou un sous-paquet)
void MainWindow::donneesRecues()
{
    /* M�me principe que lorsque le serveur re�oit un paquet :
    On essaie de r�cup�rer la taille du message
    Une fois qu'on l'a, on attend d'avoir re�u le message entier (en se basant sur la taille annonc�e tailleMessage)
    */
    QDataStream in(socket);

    if (tailleMessage == 0)
    {
        if (socket->bytesAvailable() < (int)sizeof(quint16))
             return;

        in >> tailleMessage;
    }

    if (socket->bytesAvailable() < tailleMessage)
        return;


    // Si on arrive jusqu'� cette ligne, on peut r�cup�rer le message entier
    QString messageRecu;
    in >> messageRecu;

    // On affiche le message sur la zone de Chat
    ui->listeMessages->append(messageRecu);

    // On remet la taille du message � 0 pour pouvoir recevoir de futurs messages
    tailleMessage = 0;
}

// Ce slot est appel� lorsque la connexion au serveur a r�ussi
void MainWindow::connecte()
{
    ui->listeMessages->append(tr("<em><font color=red>Connexion réussie !</font></em>"));
    ui->boutonConnexionChat->setEnabled(true);
}

// Ce slot est appel� lorsqu'on est d�connect� du serveur
void MainWindow::deconnecte()
{
    ui->listeMessages->append(tr("<em><font color=red>Déconnecté du serveur</font</em>"));
}

// Ce slot est appel� lorsqu'il y a une erreur
void MainWindow::erreurSocket(QAbstractSocket::SocketError erreur)
{
    switch(erreur) // On affiche un message diff�rent selon l'erreur qu'on nous indique
    {
        case QAbstractSocket::HostNotFoundError:
            ui->listeMessages->append(tr("<em><font color=red>ERREUR : le serveur n'a pas pu être trouvé. Vérifiez l'IP et le port.</font></em>"));
            break;
        case QAbstractSocket::ConnectionRefusedError:
            ui->listeMessages->append(tr("<em><font color=red>ERREUR : le serveur a refusé la connexion. Vérifiez si le programme \"serveur\" a bien été lancé. Vérifiez aussi l'IP et le port.</font></em>"));
            break;
        case QAbstractSocket::RemoteHostClosedError:
            ui->listeMessages->append(tr("<em><font color=red>ERREUR : le serveur a coupé la connexion.</font></em>"));
            break;
        default:
            ui->listeMessages->append(tr("<em><font color=red>ERREUR : ") + socket->errorString() + tr("</font></em>"));
    }

    ui->boutonConnexionChat->setEnabled(true);
}

// ******************************** Fin Slots (Pour le Chat) ********************************



// ******************************************** Génerer un fichier PDF **************************************
void MainWindow::on_bouton_generer_bp_clicked()
{
    if(creer_pdf(ui->comboBox_mat_bulletin_depaie->currentText().toInt()))
    {
       QMessageBox::information(this,"Information :","Le fichier est enregistré sous le dossier 'Bulletins_de_paie' sous format PDF");
    }
    else
    {
       QMessageBox::critical(this,"Erreur :","échec lors du création du fichier");
    }
}

bool MainWindow::creer_pdf(int mat)
{
    QPrinter printer;
    QString mat_string=QString::number(mat);
    QSqlQueryModel* model=E.recuperer(mat);
    QString nom_emp_modif= model->data(model->index(0,1)).toString();
    QString prenom_emp_modif= model->data(model->index(0,2)).toString();
    QString adr_emp_modif= model->data(model->index(0,3)).toString();
    QString tel_emp_modif= model->data(model->index(0,4)).toString();
    QString fonct_emp_modif= model->data(model->index(0,5)).toString();
   double salaire_emp_modif= model->data(model->index(0,6)).toDouble();
    QString ev_emp_modif= model->data(model->index(0,7)).toString();
    double primederisque=0,primederendement=0,netapayerSansTVA=0,netapayer=0,TVA=0;


      printer.setOutputFormat(QPrinter::PdfFormat);
      printer.setOutputFileName("C:/fichierprojetQT/Bulletins_de_paie/bulletin_de_paie"+nom_emp_modif+prenom_emp_modif+"TDC.pdf");
      QPainter painter;
      if (!painter.begin(&printer))
      { // failed to open file
          qWarning("ERREUR : l'ouverture du fichier est échoué");
          return 1;
      }

        painter.setPen(Qt::red);
        painter.setFont(QFont("Arial", 18));
        painter.drawText(320,30 , "Bulletin de paie");
        painter.setPen(Qt::blue);
        painter.setFont(QFont("Arial", 13));
        QDate date=QDate::currentDate();
        QString annee=QString::number(date.year());
        QString mois=date.longMonthName(date.month());
        painter.drawText(10, 80,"TunisianDryCleaner");  painter.drawText(620, 80,"Année : "+annee);
        painter.drawText(10, 130,"11 rue de jasmins 2083 Ariana"); painter.drawText(620, 130,"Mois : "+mois);

        painter.setPen(Qt::black);
        painter.drawLine(10,180,420,180);
        painter.drawText(10, 210,"Matricule : "+mat_string);
        painter.drawText(10, 240,"Fonction : "+fonct_emp_modif);
        painter.drawText(10, 270,"Nom et prénom : "+nom_emp_modif+" "+prenom_emp_modif);
        painter.drawText(10, 300,"Adresse : "+adr_emp_modif);
        painter.drawLine(10,330,420,330);
        painter.drawText(10,360,"Salaire de base : "+QString::number(salaire_emp_modif));
        painter.drawText(10, 390,"Evaluation pour ce mois : "+ev_emp_modif);
        painter.drawLine(10,420,420,420);
        painter.drawText(10, 480,"Désignation"); painter.drawText(500, 480,"A retenir"); painter.drawText(700, 480,"A payer");
        painter.drawText(10, 530,"Salaire de base : "); painter.drawText(500, 530,"  _  "); painter.drawText(700, 530,QString::number(salaire_emp_modif));
        if((fonct_emp_modif=="Aide ménager")||(fonct_emp_modif=="Agent d'entretient")||(fonct_emp_modif=="Agent de service") )
        {
            primederisque=300;
        }
        painter.drawText(10,580,"Prime de risque : "); painter.drawText(500,580,"  _  "); painter.drawText(700,580,QString::number(primederisque));
        if(ev_emp_modif=="Satisfaisante")
            primederendement=300;
        else if(ev_emp_modif=="Bonne")
            primederendement=450;
        else if(ev_emp_modif=="Exellente")
            primederendement=600;
        painter.drawText(10,630,"Prime de rendement : "); painter.drawText(500,630,"  _  "); painter.drawText(700,630,QString::number(primederendement));
        netapayerSansTVA=salaire_emp_modif+primederisque+primederendement;
        painter.drawText(10,680,"Net à payer avant impôts sur le revenue"); painter.drawText(500,680,"  _  "); painter.drawText(700,680,QString::number(netapayerSansTVA));
        TVA=(netapayerSansTVA/100)*10;
        painter.drawText(10,730,"TVA 10% :"); painter.drawText(500,730,QString::number(TVA)); painter.drawText(700,730,"  _  ");
        netapayer=netapayerSansTVA-TVA;
        painter.drawText(10,780,"Net à payer :  "); painter.drawText(500,780,"  _  "); painter.drawText(700,780,QString::number(netapayer));
        painter.drawText(10,830,"Mode paiement : Chèque");

        //dessin des lignes du tableau

        painter.drawLine(5,455,800,455);
        painter.drawLine(5,495,800,495);
        painter.drawLine(5,545,800,545);
        painter.drawLine(5,595,800,595);
        painter.drawLine(5,645,800,645);
        painter.drawLine(5,695,800,695);
        painter.drawLine(5,745,800,745);
        painter.drawLine(5,795,800,795);
        painter.drawLine(5,845,800,845);

        painter.drawLine(475,455,475,845);
        painter.drawLine(5,455,5,845);
        painter.drawLine(675,455,675,845);
        painter.drawLine(800,455,800,845);
        painter.drawText(20,930,"Signature et cachet de l’employeur "); painter.drawText(650,930,"Signature de l’employé");
        painter.drawRect(20,955,350,120);  painter.drawRect(650,955,250,120);
         painter.setFont(QFont("Arial", 9));
        painter.drawText(20,1350,"Ariana le "+date.toString()); painter.drawText(650,1350,"TunisianDryCleaner"+nom_emp_modif+" "+prenom_emp_modif);

      painter.end();
}

// ******************************************** FIN Génerer un fichier PDF **************************************


//***************************************FIN Gestion des Employees*****************************

//***************************************Début Gestion des Clients*****************************
void MainWindow::on_buttonajoutclient_accepted()
{
    //std::cout<< "rdhrher";

    int Id = ui->le_idclient->text().toInt();
    QString Nom = ui->le_nomclient->text();
    QString Prenom = ui->le_prenomclient->text();
    QString Adresse = ui->le_adresseclient->text();
    int Tel = ui->le_telclient->text().toInt();
    int Nb_service = ui->le_nbserviceclient->text().toInt();

    QDate Date = ui->dateclient->date();

    client C(Id,Nom,Prenom,Adresse,Tel,Nb_service,Date);

    bool test = C.ajouter_client();
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Ajout effectuer\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_client->setModel(C.afficher_client());
        ui->le_idclient->clear();
        ui->le_nomclient->clear();
        ui->le_prenomclient->clear();
        ui->le_adresseclient->clear();
        ui->le_telclient->clear();
        ui->le_nbserviceclient->clear();
        ui->dateclient->clear();




    }else{
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                 QObject::tr("Echec de l'ajout\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel); }
}


void MainWindow::on_buttonBox_Visite_modif_accepted()
{

    int Id = ui->m_idclient->text().toInt();
    QString Nom = ui->m_nomclient->text();
    QString Prenom = ui->m_prenomclient->text();
    QString Adresse = ui->m_adresseclient->text();
    int Tel = ui->m_telclient->text().toInt();
    int Nb_service = ui->m_nbserviceclient->text().toInt();

    QDate Date = ui->m_dateclient->date();

    client C(Id,Nom,Prenom,Adresse,Tel,Nb_service,Date);
     bool test=C.modifier_client(Id,Nom,Prenom,Adresse,Tel,Nb_service);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Modifier les données d'un client !"),
                                 QObject::tr(" Données du client modifiées ! \n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_client->setModel(C.afficher_client());
        ui->m_idclient->clear();
        ui->m_nomclient->clear();
        ui->m_prenomclient->clear();
        ui->m_adresseclient->clear();
        ui->m_telclient->clear();
        ui->m_nbserviceclient->clear();
        ui->m_dateclient->clear();
    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Modifier les données d'un client :"),
                              QObject::tr("Erreur la modification n'est pas effectuée!.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }
}




void MainWindow::on_tab_client_doubleClicked(const QModelIndex &index)
{

       //get and load the data
      int idc = index.data().toInt();
       client c;
       QSqlQueryModel* sqlQueryModel = c.recuperer_client(idc);
          QString ID_CLIENT = sqlQueryModel->record(0).value("ID_CLIENT").toString();
           QString NOM_CLIENT = sqlQueryModel->record(0).value("NOM_CLIENT").toString();
           QString PRENOM_CLIENT= sqlQueryModel->record(0).value("PRENOM_CLIENT").toString();
           QString ADRESSE_CLIENT= sqlQueryModel->record(0).value("ADRESSE_CLIENT").toString();
           QString Tel_CLIENT= sqlQueryModel->record(0).value("TEL_CLIENT").toString();
           QString  NB_SERVICE_UTILISE= sqlQueryModel->record(0).value("NB_SERVICE_UTILISE").toString();
           //QString  DATE_ENREGISTREMENT= sqlQueryModel->record(0).value(" DATE_ENREGISTREMENT").toString();


  ui->m_idclient->setText(ID_CLIENT);
   ui->m_nomclient->setText(NOM_CLIENT);
   ui->m_prenomclient->setText(PRENOM_CLIENT);
   ui->m_adresseclient->setText(ADRESSE_CLIENT);
   ui->m_telclient->setText(Tel_CLIENT);
   ui->m_nbserviceclient->setText(NB_SERVICE_UTILISE);
  // ui->m_dateclient->setText(DATE_ENREGISTREMENT);



        ui->tabWidgetClient->setCurrentIndex(2);


}





void MainWindow::on_tab_client_clicked(const QModelIndex &index)
{
    int tabeq=ui->tab_client->currentIndex().row();
    QVariant idd=ui->tab_client->model()->data(ui->tab_client->model()->index(tabeq,0));
    QString idf=idd.toString();
   // QString code=idd.toSTring();
    QSqlQuery qry;
    qry.prepare("select * from CLIENTS where ID_CLIENT=:ID_CLIENT");
    qry.bindValue(":ID_CLIENT",idf);
    qry.exec();

     QString nom,prenom,adresse,tel,nb_service,date;//attributs
     //int idf;


   while(qry.next()){

        idf=qry.value(0).toString();
        nom=qry.value(1).toString();
        prenom=qry.value(2).toString();
        adresse=qry.value(3).toString();
        tel=qry.value(4).toString();
        nb_service=qry.value(5).toString();
        date=qry.value(6).toString();



    }
    idf=QString(idf);
   //QString text = idf ;
           idf="ID_client:\t" +idf+ " Nom\t:" +nom+ " Prenom:\t" +prenom+ + " Adresse:\t" +adresse+ " Tel:\t" +tel+ " Nb service utilisé:\t" +nb_service+ " Date d'enregistrement:\t" +date ;
    qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(idf.toUtf8().constData(), qrcodegen::QrCode::Ecc::HIGH);

    // Read the black & white pixels
    QImage im(qr.getSize(),qr.getSize(), QImage::Format_RGB888);
    for (int y = 0; y < qr.getSize(); y++) {
        for (int x = 0; x < qr.getSize(); x++) {
            int color = qr.getModule(x, y);  // 0 for white, 1 for black

            // You need to modify this part
            if(color==0)
                im.setPixel(x, y,qRgb(254, 254, 254));
            else
                im.setPixel(x, y,qRgb(0, 0, 0));
        }
    }
    im=im.scaled(200,200);
              ui->qrcodeLabel->setPixmap(QPixmap::fromImage(im));
}

void MainWindow::on_trieparIdclient_clicked()
{
    QMessageBox msgBox ;
    client c;
        QSqlQueryModel * model= c.trier_clientId();
                    ui->tab_client->setModel(model);
                    ui->tab_client->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}

void MainWindow::on_trieparDateclient_clicked()
{
    QMessageBox msgBox ;
    client c;
        QSqlQueryModel * model= c.trier_clientDate();
                    ui->tab_client->setModel(model);
                    ui->tab_client->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}



void MainWindow::on_trieparNomclient_clicked()
{
    QMessageBox msgBox ;
    client c;
    QSqlQueryModel * model = c.trier_clientNom();
                    ui->tab_client->setModel(model);
                    ui->tab_client->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}

void MainWindow::on_boutonsuppclient_clicked()
{
    client c1;
    c1.setId_client(ui->m_idclient->text().toUInt());
    bool test=c1.supprimer_client(c1.getId_client());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Suppression effectuer\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_client->setModel(c1.afficher_client());
        ui->m_idclient->clear();
        ui->m_nomclient->clear();
        ui->m_prenomclient->clear();
        ui->m_adresseclient->clear();
        ui->m_telclient->clear();
        ui->m_nbserviceclient->clear();
        ui->m_dateclient->clear();
    }else{
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                 QObject::tr("Suppresion non effectuer\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
}
}

void MainWindow::on_rechercheclient_textChanged(const QString &arg1)
{
    client c;
        if(ui->rechercheclient->text() == "")
            {
                ui->tab_client->setModel(c.afficher_client());
            }
            else
            {
                 ui->tab_client->setModel(c.rechercher_client(ui->rechercheclient->text()));
            }
}

void MainWindow::on_afficherstatclient_clicked()
{
    statistique s;
    s.exec();
}

void MainWindow::on_arduinoclient_clicked()
{
    interfacearduinoclient ard;
    ard.setModal(true);
    ard.exec();
}

//***********************************FIN Gestion des Clients**********************************


//***************************************Début Gestion des Fournisseurs************************

void MainWindow::on_ajouter_f_clicked()
{

        int id_f=ui->idfournisseur->text().toInt();
        QString nom_f=ui->nomfournisseur->text();
        QString prenom_f=ui->prenomfournisseur->text();
        QString adresse_f=ui->adressefournisseur->text();
        QString email_f=ui->emailfournisseur->text();
        int tel_f=ui->telephonefournisseur->text().toInt();
        fournisseurs f(id_f,nom_f,prenom_f,adresse_f,email_f,tel_f);

        //partie controle saisie :
                bool verif_code,verif_adrf,verif_prenf,verif_nomf, verif_emailf , verif_tele ;
               verif_code=true;
               verif_emailf =true;
               verif_tele=true;
               verif_nomf=true;
               verif_prenf=true;
               verif_adrf=true;

               //verif id
                QString code = ui->idfournisseur->text();
                     QString numbers = "0123456789";
                       bool verifHedhi = false;
                       for(int i = 0; i < code.length(); i++){
                           for(int j = 0; j < numbers.length(); j++){
                               if(code[i] == numbers[j]){
                                   verifHedhi = true;
                               }
                           }
                           if(verifHedhi == false ){
                               verif_code = false;
                               QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                           QObject::tr("Erreur id invalide doit etre numero .\n"
                                                       "Click Cancel to exit."), QMessageBox::Cancel);

                               break;
                           }
                       }
                       // verif nomf

                       QString libb = ui->nomfournisseur->text();
                              QString alphab = "azertyuiopqsdfghjklmwxcvbnéàçAZERTYUIOPQSDFGHJKLMWXCVBN";
                               verifHedhi = false;
                              for(int i = 0; i < libb.length(); i++){
                                  for(int j = 0; j < alphab.length(); j++){
                                      if(libb[i] == alphab[j]){
                                          verifHedhi = true;
                                      }
                                  }
                                  if(verifHedhi == false ){
                                      verif_nomf = false;
                                      QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                                  QObject::tr("nom doit etre sous forme caractére .\n"
                                                              "Click Cancel to exit."), QMessageBox::Cancel);

                                      break;
                                  }
                              }
                              // verif prenf

                              QString pren = ui->prenomfournisseur->text();

                                      verifHedhi = false;
                                     for(int i = 0; i < pren.length(); i++){
                                         for(int j = 0; j < alphab.length(); j++){
                                             if(pren[i] == alphab[j]){
                                                 verifHedhi = true;
                                             }
                                         }
                                         if(verifHedhi == false ){
                                             verif_prenf = false;
                                             QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                                         QObject::tr("prenom doit etre sous forme caractére .\n"
                                                                     "Click Cancel to exit."), QMessageBox::Cancel);

                                             break;
                                         }
                                     }
                                     // verif adressef

                                     QString adr = ui->adressefournisseur->text();
QString al="azertyuiopmlkjhgfdsqwxcvbnAZERTYUIOPMLKJHGFDSQWXCVBN123456789";
                                             verifHedhi = false;
                                            for(int i = 0; i < adr.length(); i++){
                                                for(int j = 0; j < al.length(); j++){
                                                    if(adr[i] == al[j]){
                                                        verifHedhi = true;
                                                    }
                                                }
                                                if(verifHedhi == false ){
                                                    verif_adrf = false;
                                                    QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                                                QObject::tr("doit doit etre sous forme caractére et numero seulement .\n"
                                                                            "Click Cancel to exit."), QMessageBox::Cancel);

                                                    break;
                                                }
                                            }
                                            // verif adressef

                                            QString email = ui->emailfournisseur->text();
                                                  QString alphabe = "azertyuiopqsdfghjklmwxcvbnéàçAZERTYUIOPQSDFGHJKLMWXCVBN@._-";
                                                    verifHedhi = false;
                                                   for(int i = 0; i < email.length(); i++){
                                                       for(int j = 0; j < alphabe.length(); j++){
                                                           if(email[i] == alphabe[j]){
                                                               verifHedhi = true;
                                                           }
                                                       }
                                                       if(verifHedhi == false ){
                                                           verif_emailf = false;
                                                           QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                                                       QObject::tr("email doit etre sous forme tttt@ttttt.ttt .\n"
                                                                                   "Click Cancel to exit."), QMessageBox::Cancel);

                                                           break;
                                                       }
                                                   }
                                                   //verif tele
                                                    QString tele = ui->telephonefournisseur->text();

                                                            verifHedhi = false;
                                                           for(int i = 0; i < tele.length(); i++){
                                                               for(int j = 0; j < numbers.length(); j++){
                                                                   if(tele[i] == numbers[j]){
                                                                       verifHedhi = true;
                                                                   }
                                                               }
                                                               if(verifHedhi == false ){
                                                                   verif_tele = false;
                                                                   QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                                                               QObject::tr("Erreur numero invalide doit etre numerique .\n"
                                                                                           "Click Cancel to exit."), QMessageBox::Cancel);

                                                                   break;
                                                               }
                                                           }








                                                           if((verif_code )&&(verif_adrf)&&( verif_nomf)&&(verif_prenf)&&(verif_tele)&&(verif_emailf)){

        QMessageBox msg;
        bool test=f.ajouter_fournisseur();
                        if(test)
                        {



                            ui->tabfourn->setModel(f.afficher_fournisseur());
                 msg.setText("Ajout avec succes");
                 ui->idfournisseur->clear();
                 ui->nomfournisseur->clear();
                 ui->prenomfournisseur->clear();
                 ui->adressefournisseur->clear();
                 ui->telephonefournisseur->clear();
                 ui->emailfournisseur->clear();
            }

                else {
                msg.setText("Echec au niveau de fournisseur");
            }
            msg.exec();}

}

void MainWindow::on_supprimer_f_clicked()
{

    fournisseurs f1; f1.setid_f(ui->idfournisseur->text().toInt());
    bool test=f1.supprimer_fournisseur(f1.getid_f());


     QMessageBox msg;
    if(test)
    {



msg.setText("suppression avec succes");
ui->tabfourn->setModel(f.afficher_fournisseur());
ui->idfournisseur->clear();
ui->nomfournisseur->clear();
ui->prenomfournisseur->clear();
ui->adressefournisseur->clear();
ui->telephonefournisseur->clear();
ui->emailfournisseur->clear();
}

else {
msg.setText("Echec au niveau de fournisseur supp");
}
msg.exec();


}


void MainWindow::on_musique_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Integration/music.mp3"));
           player->play();
           qDebug() << player ->errorString();
}


void MainWindow::on_modifier_f_clicked()
{
    int Id = ui->idfournisseur->text().toInt();
    QString Nom = ui->nomfournisseur->text();
    QString Prenom = ui->prenomfournisseur->text();
    QString Adresse = ui->adressefournisseur->text();
    int Tel = ui->telephonefournisseur->text().toInt();
    QString Email = ui->emailfournisseur->text();


    fournisseurs f(Id,Nom,Prenom,Adresse,Email,Tel);
     bool test=f.modifier_fournisseur(Id,Nom,Prenom,Adresse,Email,Tel);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Modifier les données d'un client !"),
                                 QObject::tr(" Données du client modifiées ! \n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tabfourn->setModel(f.afficher_fournisseur());
        ui->idfournisseur->clear();
        ui->nomfournisseur->clear();
        ui->prenomfournisseur->clear();
        ui->adressefournisseur->clear();
        ui->telephonefournisseur->clear();
        ui->emailfournisseur->clear();

    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Modifier les données d'un client :"),
                              QObject::tr("Erreur la modification n'est pas effectuée!.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }

    /*int id_f=ui->idfournisseur->text().toInt();
    QString nom_f=ui->nomfournisseur->text();
    QString prenom_f=ui->prenomfournisseur->text();
    QString adresse_f=ui->adressefournisseur->text();
    QString email_f=ui->emailfournisseur->text();
    int tel_f=ui->telephonefournisseur->text().toInt();
    fournisseurs f(id_f,nom_f,prenom_f,adresse_f,email_f,tel_f);
    QMessageBox msg;
    bool test=f.modifier_fournisseur(id_f,nom_f,prenom_f,adresse_f,email_f,tel_f);
    if(test)
                    {

msg.setText("modification avec succes");
          ui->tabfourn->setModel(f.afficher_fournisseur());

        }

            else {
            msg.setText("Echec au niveau de modification de fournisseur");
        }
    msg.exec();*/
}

void MainWindow::on_localisation_f_clicked()
{

    QString p="ben arous";
       QDesktopServices::openUrl(QUrl("http://maps.google.com.sg/maps?q="+p+"&oe=utf-8&rls=org.mozilla:en-US:official&client=firefox-a&um=1&ie=UTF-8&hl=en&sa=N&tab=wl"));
}

void MainWindow::on_excel_f_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                    tr("Excel Files (*.xls)"));
    if (fileName.isEmpty())
        return;

    ExportExcelObject obj(fileName, "mydata", ui->tabfourn);

    //colums to export
    obj.addField(0, "id", "char(20)");
    obj.addField(1, "nom", "char(20)");
    obj.addField(2, "prenom", "char(20)");
    obj.addField(3, "adresse", "char(20)");
    obj.addField(4, "email", "char(20)");




    int retVal = obj.export2Excel();
    if( retVal > 0)
    {
        QMessageBox::information(this, tr("Done"),
                                 QString(tr("%1 exporter avec succes!")).arg(retVal)
                                 );
    }

}


void MainWindow::on_recherche_fournisseur_textChanged(const QString &arg1)
{
    fournisseurs f;

        if(ui->recherche_fournisseur->text()=="")
        {
            ui->tabfourn->setModel(f.afficher_fournisseur());
        }
        else
        {
           ui->tabfourn->setModel(f.rechercher_fournisseur(ui->recherche_fournisseur->text()));
        }
}



void MainWindow::on_tabfourn_clicked(const QModelIndex &index)
{

    //get and load the data
   int idc = index.data().toInt();
    fournisseurs f;
    QSqlQueryModel* sqlQueryModel = f.recuperer_fournisseur(idc);
       QString id_f = sqlQueryModel->record(0).value("id_f").toString();
        QString nom_f = sqlQueryModel->record(0).value("nom_f").toString();
        QString prenom_f= sqlQueryModel->record(0).value("prenom_f").toString();
        QString adresse_f= sqlQueryModel->record(0).value("adresse_f").toString();
        QString email_f= sqlQueryModel->record(0).value("email_f").toString();
        QString  tel_f= sqlQueryModel->record(0).value("tel_f").toString();



     ui->idfournisseur->setText(id_f);
     ui->nomfournisseur->setText(nom_f);
     ui->prenomfournisseur->setText(prenom_f);
     ui->adressefournisseur->setText(adresse_f);
     ui->telephonefournisseur->setText(email_f);
     ui->emailfournisseur->setText(tel_f);



}

void MainWindow::on_tabfourn_doubleClicked(const QModelIndex &index)
{
    int idc = index.data().toInt();
     fournisseurs f;
     QSqlQueryModel* sqlQueryModel = f.recuperer_fournisseur(idc);
     QString adresse_f= sqlQueryModel->record(0).value("adresse_f").toString();

     QDesktopServices::openUrl(QUrl("http://maps.google.com.sg/maps?q="+adresse_f+"&oe=utf-8&rls=org.mozilla:en-US:official&client=firefox-a&um=1&ie=UTF-8&hl=en&sa=N&tab=wl"));
}

void MainWindow::on_idtriefournisseur_clicked()
{
    QMessageBox msgBox ;
    fournisseurs f;
        QSqlQueryModel * model= f.trier_fournisseurid();
                    ui->tabfourn->setModel(model);
                    ui->tabfourn->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}

void MainWindow::on_nomtriefournisseur_clicked()
{
    QMessageBox msgBox ;
    fournisseurs f;
        QSqlQueryModel * model= f.trier_fournisseurnom();
                    ui->tabfourn->setModel(model);
                    ui->tabfourn->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}

void MainWindow::on_teltriefournisseur_clicked()
{
    QMessageBox msgBox ;
    fournisseurs f;
        QSqlQueryModel * model= f.trier_fournisseurtel();
                    ui->tabfourn->setModel(model);
                    ui->tabfourn->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}


//***************************************FIN Gestion des Fournisseurs************************

//***************************************Début Gestion des Produits************************
void MainWindow:: showTime(){
    QTime time=QTime ::currentTime();

    QString time_text= time.toString("hh : mm : ss");
    if ((time.second() %2) == 0)
    {
        time_text[3] = ' ';
        time_text[8] = ' ';
    }
    ui->Digtal_clock->setText(time_text);
}



void MainWindow::on_ajouterproduit_2_clicked()
{
    if ((ui->idproduit_2->text()=="") || ( ui->qteproduit_2->text()=="" ))
    {
        QMessageBox::critical(this,"Erreur!!","Veuillez remplir tout les champs!!");
    }
    else {


int id_prod =ui->idproduit_2->text().toInt();
int qte=ui->qteproduit_2->text().toInt();
int prix_achat=ui->prixproduit_2->text().toInt();
int id_f=ui->idfproduit_2->text().toInt();
QString libelle_prod=ui->libelleproduit_2->text();
QString classification =ui->classificationproduit_2->text();
QDate date_entree_enstock =ui->dateproduit_2->date();
Produit P (id_prod , qte , prix_achat , id_f,   libelle_prod , classification ,date_entree_enstock);
bool test= P.ajouter_produit();
if (test)
{
    ui->tableView->setModel(Etmp.afficher_produit());
    QMessageBox:: information ( nullptr , QObject :: tr("OK"),
                                QObject:: tr("Ajouter effectué\n"
                                             "Click Cancel to exit."), QMessageBox :: Cancel ) ;
    ui->idproduit_2->clear();
    ui->qteproduit_2->clear();
    ui->prixproduit_2->clear();
    ui->libelleproduit_2->clear();
    ui->classificationproduit_2->clear();
    ui->idfproduit_2->clear();
    ui->dateproduit_2->clear();

}
else
    QMessageBox:: critical ( nullptr , QObject :: tr(" Not OK"),
                                QObject:: tr("Ajouter non effectué\n"
                                             "Click Cancel to exit."), QMessageBox :: Cancel ) ;
}
}

void MainWindow::on_annulerproduit_2_clicked()
{
    ui->idproduit_2->clear();
    ui->qteproduit_2->clear();
    ui->prixproduit_2->clear();
    ui->libelleproduit_2->clear();
    ui->classificationproduit_2->clear();
    ui->idfproduit_2->clear();
    ui->dateproduit_2->clear();

}

void MainWindow::on_annulerproduit2_2_clicked()
{
    ui->idproduit2_2->clear();
    ui->qteproduit2_2->clear();
    ui->prixproduit2_2->clear();
    ui->libelleproduit2_2->clear();
    ui->classificationproduit2_2->clear();
    ui->idfproduit2_2->clear();
    ui->dateproduit2_2->clear();

}

void MainWindow::on_modifierproduit_2_clicked()
{
    int id_prod =ui->idproduit2_2->text().toInt();
    int qte=ui->qteproduit2_2->text().toInt();
    int prix_achat=ui->prixproduit2_2->text().toInt();
    int id_f=ui->idfproduit2_2->text().toInt();
    QString libelle_prod=ui->libelleproduit2_2->text();
    QString classification =ui->classificationproduit2_2->text();
    QDate date_entree_enstock =ui->dateproduit2_2->date();

    bool test= Etmp.modifier_produit(  id_prod, prix_achat ,  date_entree_enstock  , qte, classification ,  libelle_prod, id_f);
    if (test)
    {
        ui->tableView->setModel(Etmp.afficher_produit());
        QMessageBox:: information ( nullptr , QObject :: tr("OK"),
                                    QObject:: tr("modifier effectué\n"
                                                 "Click Cancel to exit."), QMessageBox :: Cancel ) ;
    }
    else
        QMessageBox:: critical ( nullptr , QObject :: tr(" Not OK"),
                                    QObject:: tr("modifier non effectué\n"
                                                 "Click Cancel to exit."), QMessageBox :: Cancel ) ;
}

void MainWindow::on_supprimerproduit_2_clicked()
{
    int id_prod =ui->idproduit2_2->text().toInt();
    bool test= Etmp.supprimer_produit(id_prod);
    if (test)
    {
        ui->tableView->setModel(Etmp.afficher_produit());
        QMessageBox:: information ( nullptr , QObject :: tr("OK"),
                                    QObject:: tr("Suppression effectué\n"
                                                 "Click Cancel to exit."), QMessageBox :: Cancel ) ;
    }
    else
        QMessageBox:: critical ( nullptr , QObject :: tr(" Not OK"),
                                    QObject:: tr("Suppression non effectué\n"
                                                 "Click Cancel to exit."), QMessageBox :: Cancel ) ;

}

void MainWindow::on_okproduit_2_clicked()
{
    if (ui->idproduit2_2->text()!="")

    {
        Etmp.setid_prod(ui->idproduit2_2->text().toInt());
        QSqlQueryModel * Model = Etmp.recuperer_produit(Etmp.getid_prod());
        if (Model->rowCount()!=0 )
        {
            QString prix_string = Model->data(Model->index(0,2)).toString();
            QString qte_string = Model->data(Model->index(0,4)).toString();
            QString ifd_string = Model->data(Model->index(0,6)).toString();

            ui->qteproduit2_2->setText(qte_string);
            ui->prixproduit2_2->setText(prix_string);
            ui->idfproduit2_2->setText(ifd_string);
            ui->libelleproduit2_2->setText(Model->data(Model->index(0,1)).toString());
            ui->classificationproduit2_2->setText(Model->data(Model->index(0,5)).toString());
            ui->dateproduit2_2->setDate(Model->data(Model->index(0,3)).toDate());


        }
         else
        {
            QMessageBox::critical(this,"Erreur","l'id n'existe pas");
        }
    }

}

void MainWindow::on_modenuit_clicked()
{
    if (ui->modenuit->isCheckable ())
      {
          qApp->setStyleSheet("QWidget  {color: grey; background-color: black}");


          ui->ajouterproduit_2->setStyleSheet("QPushButton {color: black; background-color: grey; }\n"
                               "QPushButton:enabled { background-color: rgb(255,255,255); }\n");

          ui->annulerproduit_2->setStyleSheet("QPushButton {color: black; background-color: grey; }\n"
                               "QPushButton:enabled { background-color: rgb(255,255,255); }\n");
          ui->imageproduit_2->setStyleSheet("QPushButton {color: black; background-color: grey; }\n"
                               "QPushButton:enabled { background-color: rgb(255,255,255); }\n");

          ui->trinomproduit->setStyleSheet("QPushButton {color: black; background-color: grey; }\n"
                               "QPushButton:enabled { background-color: rgb(255,255,255); }\n");
          ui->trieridfproduit->setStyleSheet("QPushButton {color: black; background-color: grey; }\n"
                               "QPushButton:enabled { background-color: rgb(255,255,255); }\n");
          ui->Trieridproduit->setStyleSheet("QPushButton {color: black; background-color: grey; }\n"
                               "QPushButton:enabled { background-color: rgb(255,255,255); }\n");
          ui->Impdosproduit->setStyleSheet("QPushButton {color: black; background-color: grey; }\n"
                               "QPushButton:enabled { background-color: rgb(255,255,255); }\n");
          ui->okproduit_2->setStyleSheet("QPushButton {color: black; background-color: grey; }\n"
                               "QPushButton:enabled { background-color: rgb(255,255,255); }\n");
          ui->modifierproduit_2->setStyleSheet("QPushButton {color: black; background-color: grey; }\n"
                               "QPushButton:enabled { background-color: rgb(255,255,255); }\n");
          ui->supprimerproduit_2->setStyleSheet("QPushButton {color: black; background-color: grey; }\n"
                               "QPushButton:enabled { background-color: rgb(255,255,255); }\n");

          ui->annulerproduit2_2->setStyleSheet("QPushButton {color: black; background-color: grey; }\n"
                               "QPushButton:enabled { background-color: rgb(255,255,255); }\n");

         // ui->tab_sponsor_2->setStyleSheet("QTableView {color: black; background-color: grey; }\n");
          ui->tableView->setStyleSheet("QTableView {Selection-background-color: grey ; Background-color: white; Border：1px solid #000000;  Gridline-color: lightgray;  Alternate-background-color: # 000000; }\n");
          //ui->tab_sponsor_2->setStyleSheet("QHeaderView::section {Background-color: white; Border: 1px solid # 000000;  Border-bottom: 1px solid # 000000;  Height: 20px; // header height }\n");

      }
}




void MainWindow::on_rechercheproduit_textChanged(const QString &arg1)
{
    Produit p;

          if(ui->rechercheproduit->text()=="")
          {
              ui->tableView->setModel(p.afficher_produit());
          }
          else
          {
             ui->tableView->setModel(p.rechercher_produit(ui->rechercheproduit->text()));

      }
}

void MainWindow::on_Trieridproduit_clicked()
{
   ui->tableView->setModel(Etmp.tridesc_produit());
}

void MainWindow::on_trinomproduit_clicked()
{
   ui->tableView->setModel(Etmp.trinom_produit());
}

void MainWindow::on_trieridfproduit_clicked()
{
  ui->tableView->setModel(Etmp.tridf_produit());
}



void MainWindow::on_next2produit_2_clicked()
{
  ui->stackedWidgetProduit->setCurrentIndex(2);
}

void MainWindow::on_nextproduit_2_clicked()
{
    ui->stackedWidgetProduit->setCurrentIndex(1);
}

void MainWindow::on_next3produit_2_clicked()
{

    ui->stackedWidgetProduit->setCurrentIndex(0);
}

void MainWindow::on_imageproduit_2_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("choose"),"",tr("Image (*.png *.jpg *.mp4)"));
        if(  QString::compare(filename,  QString())!=0) {
            QImage image;
            bool valid=image.load(filename);
            if(valid){
        image=image.scaledToHeight(ui->image1_2->height(),Qt::FastTransformation);

                ui->image1_2->setPixmap(QPixmap::fromImage(image));
            }
        }
}

void MainWindow::on_Impdosproduit_clicked()
{
    Produit c;
             QString text=c.apercu_pdf_produit();
             ui->impc->setText(text);
             QPrinter printer ;
             printer.setPrinterName("imprim");
             QPrintDialog dialog (&printer,this);
             if(dialog.exec()==QDialog::Rejected) return ;
             ui->impc->print(&printer);
}



void MainWindow::on_arduinoproduit_clicked()
{
    interfacearduinoproduit ard;
    ard.setModal(true);
    ard.exec();
}






//***************************************FIN Gestion des Produits************************
//***************************************Début Gestion des Services************************
void MainWindow::on_buttonBox_supprimerS_accepted()
{
    Service C;
    QString Q=ui->histoservice->text();
    ui->tableservice->setModel(C.rechercher_service(Q));
    ui->tabWidget_2->setCurrentIndex(1);

}



void MainWindow::sendMail()
{
    Smtp* smtp = new Smtp("nassim.cmmelliti@gmail.com", "jxymhvexbhvstnjc","smtp.gmail.com",587,30000);
        connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
        smtp->sendMail("promotion", ui->lineEdit_mail->text() ,ui->textEdit->toPlainText(),ui->lineEdit_mail->text());
}

void MainWindow::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}

void MainWindow::on_envoyer_clicked()
{
    connect(ui->envoyer, SIGNAL(clicked()),this, SLOT(sendMail()));
}





void MainWindow::on_lineEdit_recherche_returnPressed()
{
    Service C;
    QString q=ui->lineEdit_recherche->text();
    ui->tableservice->setModel(C.rechercher_service(q));
}

void MainWindow::on_Tri_currentTextChanged(const QString &arg1)
{
    Service C;
    if (arg1=="ID") ui->tableservice->setModel(C.trier_serviceId());
    else if (arg1=="Nom") ui->tableservice->setModel(C.trier_serviceNom());
    else if (arg1=="Type") ui->tableservice->setModel(C.trier_serviceType());
}



void MainWindow::on_lineEdit_recherche_textChanged(const QString &arg1)
{
    Service C;
    if(ui->lineEdit_recherche->text()=="")
    {
        ui->tableservice->setModel(C.afficher_service());
    }
    else
    {
        ui->tableservice->setModel(C.rechercher_service(ui->lineEdit_recherche->text()));
    }
}


void MainWindow::on_ajouterservice_clicked()
{
    int idservice = ui->le_id->text().toInt();
    QString nomservice = ui->lineEdit_nomservice->text();
    QString typeservice = ui->lineEdit_typeservice->text();
    QString emplacementservice = ui->lineEdit_emplacementservice->text();
    int prixservice = ui->lineEdit_prixservice->text().toInt();
    QString descriptionservice = ui->lineEdit_descriptionservice->text();
    QDate dateservice = ui->dateEdit->date();



    Service C(idservice,nomservice,typeservice,emplacementservice,prixservice,descriptionservice,dateservice);
    bool test =C.ajouter_service();
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Ajout effectuer\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableservice->setModel(C.afficher_service());
        ui->le_id->clear();
        ui->lineEdit_nomservice->clear();
        ui->lineEdit_typeservice->clear();
        ui->lineEdit_emplacementservice->clear();
        ui->lineEdit_prixservice->clear();
        ui->lineEdit_descriptionservice->clear();




    }else{
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                 QObject::tr("Ajout non effectuer\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel); }

}

void MainWindow::on_modifierservice_clicked()
{
    int id_s = ui->lineEdit_idservice_3->text().toInt();
    QString nom_s = ui->lineEdit_nomservice_3->text();
    QString emplacement_s = ui->lineEdit_emplacementservice_3->text();
    int prix_s = ui->lineEdit_prixservice_3->text().toInt();
    QString type_s = ui->lineEdit_typeservice_3->text();
    QString description_s = ui->lineEdit_descriptionservice_3->text();
    QDate date_s = ui->dateEdit_3->date();



    Service C(id_s,nom_s,type_s,emplacement_s,prix_s,description_s,date_s);
     bool test=C.modifier_service(id_s,nom_s,type_s,emplacement_s,prix_s,description_s,date_s);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Modifier une Servicet !"),
                                 QObject::tr(" Service modifiée ! \n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableservice->setModel(Serv.afficher_service());
        ui->lineEdit_idservice_3->clear();
        ui->lineEdit_nomservice_3->clear();
        ui->lineEdit_typeservice_3->clear();
        ui->lineEdit_emplacementservice_3->clear();
        ui->lineEdit_prixservice_3->clear();
        ui->lineEdit_descriptionservice_3->clear();
    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Modifier Service"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }

}

void MainWindow::on_supprimerservice_clicked()
{
    Service c1;
    c1.setid_service(ui->lineEdit_idservice_3->text().toUInt());
    bool test=c1.supprimer_service(c1.getid_service());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Suppression effectuer\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableservice->setModel(c1.afficher_service());
        ui->lineEdit_idservice_3->clear();
        ui->lineEdit_nomservice_3->clear();
        ui->lineEdit_typeservice_3->clear();
        ui->lineEdit_emplacementservice_3->clear();
        ui->lineEdit_prixservice_3->clear();
        ui->lineEdit_descriptionservice_3->clear();
        ui->dateEdit_3->clear();
    }else{
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                 QObject::tr("Suppresion non effectuer\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);}
}

void MainWindow::on_tableservice_doubleClicked(const QModelIndex &index)
{
    //get and load the data
   int idc = index.data().toInt();
    Service c;
    QSqlQueryModel* sqlQueryModel = c.recuperer_service(idc);
       QString ids = sqlQueryModel->record(0).value("IDSERVICE").toString();
        QString noms = sqlQueryModel->record(0).value("NOMSERVICE").toString();
        QString types= sqlQueryModel->record(0).value("TYPESERVICE").toString();
        QString emplacements= sqlQueryModel->record(0).value("EMPLACEMENTSERVICE").toString();
        QString prixs= sqlQueryModel->record(0).value("PRIXSERVICE").toString();
        QString  descriptions= sqlQueryModel->record(0).value("DESCRIPTIONSERVICE").toString();



ui->lineEdit_idservice_3->setText(ids);
ui->lineEdit_nomservice_3->setText(noms);
ui->lineEdit_typeservice_3->setText(types);
ui->lineEdit_emplacementservice_3->setText(emplacements);
ui->lineEdit_prixservice_3->setText(prixs);
ui->lineEdit_descriptionservice_3->setText(descriptions);
}

//***************************************Fin Gestion des Services************************
