#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>


class Employe
{
private:
    QString nom,prenom,adresse,fonction,evaluation;
    int matricule;
    long tel;
    double salaire;

public:
    //constructeurs
    Employe();
    Employe(QString,QString,QString,long,QString,double,QString); //ce constructeur permet de saisir tout les attribus sauf la matricule(elle sera auto incrémenté dans la BD)

    //getters
    QString get_nom(){return nom;}
    QString get_prenom(){return prenom;}
    QString get_adresse(){return adresse;}
    QString get_fonction(){return fonction;}
    QString get_evluation(){return evaluation;}
    int get_matricule(){return matricule;}
    long get_tel(){return tel;}
    double get_salaire(){return salaire;}

    //setters
    void set_matricule(int m){matricule=m;}
    void set_nom(QString n){nom=n;}
    void set_prenom(QString pr){prenom=pr;}
    void set_adresse(QString adr){adresse=adr;}
    void set_fonction(QString fc){fonction=fc;}
    void set_evaluation(QString ev){evaluation=ev;}
    void set_tel(long t){tel=t;}
    void set_salaire(double s){salaire=s;}

    //fonctionnalités de bases
    bool ajouter();
    bool modifier(int);
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficher_matricules();
    QSqlQueryModel * recuperer(int);
    bool supprimer(int);

     //fonctionnalités avancées
    QSqlQueryModel * affichage_trie(QString); //cette méthode permet de retourner un affichage trié selon un critère passé en paramètre (le critère est de type QString pour qu'on puisse l'injecter dans la requête SQL)
    QSqlQueryModel * recherche_selon_matricule(QString);
    QSqlQueryModel * recherche_selon_nomprenom(QString);
    QSqlQueryModel * recherche_selon_adresse(QString);

    // nom_emp,prenom_emp,adresse_emp,tel_emp,fonction,salaire,evaluation

};

#endif // EMPLOYE_H
