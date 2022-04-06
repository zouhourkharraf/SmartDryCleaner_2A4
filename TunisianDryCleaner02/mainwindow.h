#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtGui>
#include <QtNetwork>

#include <QMainWindow>
#include"employe.h"
#include"profil.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
   void set_login_de_emp_connecte(QString); //cette méthode permet d'afficher le login de l'employé qui vient de se connecter
  //  bool get_deconnexion(){return deconnexion;}
 //   void set_deconnexion(bool d){ deconnexion=d; }

    bool creer_pdf(int);
public slots:
       void on_bouton_deconnecter_clicked();

private slots:


    void on_bouton_page2_clicked();

    void on_bouton_page1_clicked();


    void on_bouton_valider_clicked();

    void on_bouton_supprimer_clicked();

    void on_bouton_mat_modifier_clicked();

    void on_bouton_modifier_clicked();

// ce slot permet de vider tous les champs de saisie de la page modifier ainsi que les boutons radio et de rendre le champs de saisie mtricule activé s'il ne l'est pas
     void ViderLesChamps_PageModifier();


     void on_bouton_annuler_mdf_clicked();

     void on_boutonpg_2_vers_3_clicked();

     void on_boutonpg_3_vers_2_clicked();

     void on_radio_tri1_clicked();

     void on_radio_tri2_clicked();

     void on_radio_tri3_clicked();

     void on_boutonpg_3_vers_4_clicked();

     void on_boutonpg_4_vers_3_clicked();

     void on_bouton_ok_matricule_profil_clicked();

     void on_bouton_ajouter_profil_clicked();

     void on_bouton_ok_login_modifier_clicked();

     void on_bouton_modifier_profil_clicked();

     void on_bouton_supprimer_profil_clicked();


     //slots pour le Chat
     void on_boutonConnexion_clicked();
     void on_boutonEnvoyer_clicked();
     void on_message_returnPressed();
     void donneesRecues();
     void connecte();
     void deconnecte();
     void erreurSocket(QAbstractSocket::SocketError erreur);

      //(Fin) slots pour le Chat

     void on_bouton_generer_bp_clicked();

     void on_lineEdit_recherche_textChanged(const QString &arg1); // La zone de recherche

     //****************** Fin des bouton radio pour la recherche ******************
     void on_radio_rech1_clicked();

     void on_radio_rech2_clicked();

     void on_radio_rech3_clicked();

     //****************** Fin des bouton radio pour la recherche ******************

private:
    Ui::MainWindow *ui;

    bool deconnexion;
    Employe E;
    Profil P;
    //Profil EmpConnecte;
    // attributs (pour le Chat)
    QTcpSocket *socket; // Représente le serveur
    quint16 tailleMessage;

};
#endif // MAINWINDOW_H
