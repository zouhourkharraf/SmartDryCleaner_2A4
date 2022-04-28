#ifndef FOURNISSEURS_H
#define FOURNISSEURS_H
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QDebug>
class fournisseurs
{
public:
    fournisseurs();
  fournisseurs(int,QString,QString,QString,QString,int);
  int getid_f();
      QString getnom_f();
      QString getprenom_f();
      QString getadresse_f();
      QString getemail_f();
      int gettel_f();
     void setid_f(int );
     void setnom_f(QString);
      void setprenom_f(QString);
       void setadresse_f(QString);
        void setemail_f(QString);
     void settel_f(int);
     bool ajouter_fournisseur();
     QSqlQueryModel* afficher_fournisseur();
     bool supprimer_fournisseur(int);
     bool modifier_fournisseur(int,QString,QString,QString,QString,int);

     QSqlQueryModel * rechercher_fournisseur(const QString &b);
     QSqlQueryModel * recuperer_fournisseur(int);
     QSqlQueryModel * trier_fournisseurid();
     QSqlQueryModel * trier_fournisseurnom();
     QSqlQueryModel * trier_fournisseurtel();





private:
    int id_f;
    QString nom_f;
    QString prenom_f;
    QString adresse_f;
    QString email_f;
    int tel_f;

};

#endif // FOURNISSEURS_H
