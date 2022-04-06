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
     ui->lineEdit_mp_profil->setValidator(new QIntValidator(1000,9999, this));
     ui->lineEdit_mp_modifier->setValidator(new QIntValidator(1000,9999, this));

    ui->tab_employes->setModel(E.afficher());
    ui->comboBox_supression->setModel(E.afficher_matricules());
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
    deconnexion=false;

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::set_login_de_emp_connecte(QString login_emp_connecte)
{
    ui->label_employe_connecte->setText("Login : "+login_emp_connecte);
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

void MainWindow::on_boutonpg_2_vers_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_boutonpg_3_vers_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_boutonpg_3_vers_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_boutonpg_4_vers_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//---> (fin) l'accès aux différentes pages du staket widgets



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
      ui->comboBox_matricule_profils->setModel(P.recuperer_matricule_pour_profil()); //--->Actualisation de l'affichage de la liste déroulante pour les matricule des employés qui non pas encore créé un profil
      ui->comboBox_mat_bulletin_depaie->setModel(E.afficher_matricules());

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
         ui->comboBox_matricule_profils->setModel(P.recuperer_matricule_pour_profil());//--->Actualisation de l'affichage de la liste déroulante pour les matricule des employés qui non pas encore créé un profil
         ui->comboBox_supression_profils->setModel(P.recuperer_login_profil());
         ui->comboBox_mat_bulletin_depaie->setModel(E.afficher_matricules());

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
            ViderLesChamps_PageModifier();//remettre les champs de saisie à leurs état de départ
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
    ui->lineEdit_recherche->setText("");
}

void MainWindow::on_radio_rech2_clicked()
{
    ui->lineEdit_recherche->setText("");
}

void MainWindow::on_radio_rech3_clicked()
{
      ui->lineEdit_recherche->setText("");
}

//****************** Fin des bouton radio pour la recherche ******************


// **************** La zone de recherche ********************

void MainWindow::on_lineEdit_recherche_textChanged(const QString &arg1)
{
    if(ui->radio_rech1->isChecked())
    {
       ui->tab_recherche->setModel(E.recherche_selon_matricule(arg1) );
    }
    else if(ui->radio_rech2->isChecked())
    {
        ui->tab_recherche->setModel(E.recherche_selon_nomprenom(arg1) );
    }
    else if(ui->radio_rech3->isChecked())
    {
        ui->tab_recherche->setModel(E.recherche_selon_adresse(arg1) );
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

          QMessageBox::critical(nullptr, QObject::tr("Ajout d'un profil TunisianDryCleaner"),
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
    QMessageBox::information(this,"Erreur","Veuillez saisir des informations valides ");
  }

}


void MainWindow::on_bouton_ok_login_modifier_clicked()
{
    P.set_login(ui->lineEdit_login_modifier->text());

  QSqlQueryModel * model=P.recuperer_profil(P.get_login());

  if(model->rowCount()==0) //---> si la fonction n'a retourné aucune ligne (càd le login n'existe pas dans la table profils)
  {
      QMessageBox::information(this,"Erreur","Le login n'existe pas");
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

            QMessageBox::critical(nullptr, QObject::tr("Modification du mot de passe TunisianDryCleaner"),
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
       QMessageBox::information(this,"Erreur","Informations invalides");
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
       QMessageBox::critical(nullptr, QObject::tr("Suppresion d'un profil TunisianDryCleaner"),
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
void MainWindow::on_boutonConnexion_clicked()
{
        //on va remplir le champ du login pour le chat avec la valeur du login de l'employé connecté(label_employe_connecte)
        ui->pseudo->setText(ui->label_employe_connecte->text());
        //on désactive le champ de saisie
        ui->pseudo->setDisabled(true);
        // On annonce sur la fen�tre qu'on est en train de se connecter
        ui->listeMessages->append(tr("<em>Tentative de connexion en cours...</em>"));
        ui->boutonConnexion->setEnabled(false);

       socket->abort(); // On désactive les connexions précédentes s'il y en a
        socket->connectToHost("127.0.0.1" , 50885); // On se connecte au serveur demande


}

// Envoi d'un message au serveur
void MainWindow::on_boutonEnvoyer_clicked()
{
    QByteArray paquet;
    QDataStream out(&paquet, QIODevice::WriteOnly);

    // On pr�pare le paquet � envoyer
    QString messageAEnvoyer = tr("<strong><font color=green>") + ui->pseudo->text() +tr("</font></strong> : <br>") + ui->message->text();

    out << (quint16) 0;
    out << messageAEnvoyer;
    out.device()->seek(0);
    out << (quint16) (paquet.size() - sizeof(quint16));

    socket->write(paquet); // On envoie le paquet

    ui->message->clear(); // On vide la zone d'�criture du message
    ui->message->setFocus(); // Et on remet le curseur � l'int�rieur
}

// Appuyer sur la touche Entr�e a le m�me effet que cliquer sur le bouton "Envoyer"
void MainWindow::on_message_returnPressed()
{
    on_boutonEnvoyer_clicked();
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
    ui->boutonConnexion->setEnabled(true);
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

    ui->boutonConnexion->setEnabled(true);
}

// ******************************** Fin Slots (Pour le Chat) ********************************

//***************** La déconnection *****************
void MainWindow::on_bouton_deconnecter_clicked()
{

  // deconnexion=true;


}
//***************** La déconnection *****************


// ******************************************** Génerer un fichier PDF **************************************
void MainWindow::on_bouton_generer_bp_clicked()
{
    if(creer_pdf(ui->comboBox_mat_bulletin_depaie->currentText().toInt()))
    {
       QMessageBox::information(this,"Information :","Le fichier est enregistré sous le dossier 'Bulletins_de_paie' sous format PDF");
    }
    else
    {
       QMessageBox::information(this,"Erreur :","échec lors du création du fichier");
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

// ******************************************** Génerer un fichier PDF **************************************


