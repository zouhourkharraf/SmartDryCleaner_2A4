#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtGui>
#include <QtNetwork>
#include <QtWidgets>

#include <QMainWindow>
#include"employe.h"
#include"profil.h"

//*****Les includes Clients***********
#include "client.h"
#include "qrcode.h"

//*****Les includes Fournisseurs*****
#include <QMediaPlayer>
#include <QMainWindow>
#include <QFileDialog>
#include "fournisseurs.h"
#include "exportexcelobjec.h"

//*****Les includes Produits*****
#include <QStackedWidget>
#include <QtGui>
#include <QPrintDialog>
#include "produit.h"
//*****Les includes Services*****
#include "service.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//*************************Partie Gestion des clients**************************
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class QMenu;
class QAction;
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class QMenu;
class QAction;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
   void set_login_de_emp_connecte(QString); //cette méthode permet d'afficher le login de l'employé qui vient de se connecter

    bool creer_pdf(int);

private slots:


    void on_bouton_page2_emp_clicked();
    void on_bouton_page1_emp_clicked();
    void on_bouton_valider_emp_clicked();
    void on_bouton_supprimer_emp_clicked();
    void on_bouton_mat_modifier_clicked();
    void on_bouton_modifier_emp_clicked();

// ce slot permet de vider tous les champs de saisie de la page modifier ainsi que les boutons radio et de rendre le champs de saisie mtricule activé s'il ne l'est pas
     void ViderLesChamps_PageModifier();
     void on_bouton_annuler_mdf_clicked();
     void on_boutonpg_2_vers_3_emp_clicked();
     void on_boutonpg_3_vers_2_emp_clicked();
     void on_radio_tri1_clicked();
     void on_radio_tri2_clicked();
     void on_radio_tri3_clicked();
     void on_boutonpg_3_vers_4_emp_clicked();
     void on_boutonpg_4_vers_3_emp_clicked();
     void on_bouton_ok_matricule_profil_clicked();
     void on_bouton_ajouter_profil_clicked();

     void on_bouton_ok_login_modifier_clicked();

     void on_bouton_modifier_profil_clicked();

     void on_bouton_supprimer_profil_clicked();


     //slots pour le Chat
     void on_boutonConnexionChat_clicked();
     void on_boutonEnvoyerChat_clicked();
     void on_messageChat_returnPressed();
     void donneesRecues();
     void connecte();
     void deconnecte();
     void erreurSocket(QAbstractSocket::SocketError erreur);

      //(Fin) slots pour le Chat

     void on_bouton_generer_bp_clicked();

     void on_lineEdit_recherche_emp_textChanged(const QString &arg1); // La zone de recherche

     //****************** Fin des bouton radio pour la recherche ******************
     void on_radio_rech1_clicked();

     void on_radio_rech2_clicked();

     void on_radio_rech3_clicked();

     //****************** Fin des bouton radio pour la recherche ******************


//**************** Partie Gestion des clients******************
     void on_buttonajoutclient_accepted();
     void on_buttonBox_Visite_modif_accepted();
     void on_tab_client_doubleClicked(const QModelIndex &index);

     void on_tab_client_clicked(const QModelIndex &index);
     void on_trieparIdclient_clicked();
     void on_trieparDateclient_clicked();
     void on_trieparNomclient_clicked();
     void on_boutonsuppclient_clicked();
     void on_rechercheclient_textChanged(const QString &arg1);
     void on_afficherstatclient_clicked();

     void on_arduinoclient_clicked();

//**************** Partie Gestion des fournisseurs******************
     void on_ajouter_f_clicked();
     void on_supprimer_f_clicked();
     void on_musique_clicked();
     void on_modifier_f_clicked();
     void on_localisation_f_clicked();
     void on_excel_f_clicked();
     void on_recherche_fournisseur_textChanged(const QString &arg1);
     void on_tabfourn_clicked(const QModelIndex &index);
     void on_tabfourn_doubleClicked(const QModelIndex &index);
     void on_idtriefournisseur_clicked();
     void on_nomtriefournisseur_clicked();
     void on_teltriefournisseur_clicked();

//**************** Partie Gestion des Produits******************
     void showTime();
     void on_ajouterproduit_2_clicked();
     void on_annulerproduit_2_clicked();
     void on_annulerproduit2_2_clicked();
     void on_modifierproduit_2_clicked();
     void on_supprimerproduit_2_clicked();
     void on_okproduit_2_clicked();
     void on_modenuit_clicked();
     void on_rechercheproduit_textChanged(const QString &arg1);
     void on_Trieridproduit_clicked();
     void on_trinomproduit_clicked();
     void on_trieridfproduit_clicked();
     void on_nextproduit_2_clicked();
     void on_next2produit_2_clicked();
     void on_next3produit_2_clicked();
     void on_imageproduit_2_clicked();
     void on_Impdosproduit_clicked();

void on_arduinoproduit_clicked();

     //***************************************Début Gestion des Services************************

void on_buttonBox_supprimerS_accepted();
void sendMail();
void mailSent(QString status);
void on_envoyer_clicked();
void on_lineEdit_recherche_returnPressed();
void on_Tri_currentTextChanged(const QString &arg1);
void on_lineEdit_recherche_textChanged(const QString &arg1);
void on_ajouterservice_clicked();
void on_modifierservice_clicked();
void on_supprimerservice_clicked();
private slots:
void on_tableservice_doubleClicked(const QModelIndex &index);




private:
    Ui::MainWindow *ui;
    Employe E;
    Profil P;
       // attributs (pour le Chat)
    QTcpSocket *socket; // Représente le serveur
    quint16 tailleMessage;

//**************** Partie Gestion des clients******************
    client C;
    //Déclaration des variables pour la prise de photo via Caméra
    QCamera *mCamera;
    QCameraViewfinder * mCameraViewfinder;
    QCameraImageCapture *mCameraImageCapture;
    QVBoxLayout *m;
    QMenu *mOpcionesMenu;
    QAction *mEncenderAction; // ouvrir
    QAction *mApagarAction; //stop
    QAction *mCapturarAction; //capture

 //**************** Partie Gestion des fournisseurs******************
    fournisseurs f;
    QMediaPlayer* player;
 //**************** Partie Gestion des produits******************
    Produit Etmp ;

//***************************************Partie Gestion des Services************************
    Service Serv;

};
#endif // MAINWINDOW_H
