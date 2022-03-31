#ifndef FOURNISSEURS_H
#define FOURNISSEURS_H
#include<QString>
#include<QSqlQueryModel>
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
     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     bool modifier(int,QString,QString,QString,QString,int);
     QSqlQueryModel * rechercher (int  );
      QSqlQueryModel *  tridesc();
      QString  apercu_pdf();

















private:
    int id_f;
    QString nom_f;
    QString prenom_f;
    QString adresse_f;
    QString email_f;
    int tel_f;

};

#endif // FOURNISSEURS_H
