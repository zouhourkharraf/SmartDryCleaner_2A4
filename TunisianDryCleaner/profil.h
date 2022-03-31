#ifndef PROFIL_H
#define PROFIL_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class Profil
{
private:
    QString login;
    int mp;
    int matricule;
public:
     //constructeurs
    Profil();
    Profil(QString,int,int);

    //Getters
    QString get_login(){return login;}
    int get_motdepasse(){return mp;}
    int get_matricule(){return matricule;}

    //Setters
    void set_login(QString l){ login=l; }
    void set_motdepasse(int m){ mp=m; }
    void set_matricule(int mat){ matricule=mat; }

    //Fonctionnalités de bases
    bool ajouter_profil();
    bool modifier_profil(QString);
    QSqlQueryModel* recuperer_profil(QString);
    QSqlQueryModel* recuperer_matricule_pour_profil();//--> cette méthode permet de récupérer les matricules des employés qui n'on pas encore créé un profil
    QSqlQueryModel* recuperer_prenom_pour_loginprofil(int);//--> cette méthode permet de récupérer le prénom d'un employé via son matricule
    QSqlQueryModel* recuperer_login_profil();
    bool supprimer_profil(QString);
    QSqlQueryModel* verifier_login_motdepassde(QString,int);//pour l'authentification

};

#endif // PROFIL_H
