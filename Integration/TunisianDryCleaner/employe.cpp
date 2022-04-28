#include "employe.h"
#include<QSqlQuery>
#include<QObject>
#include<QSqlQueryModel>
#include<QString>

Employe::Employe()
{
nom=""; prenom=""; adresse=""; fonction=""; evaluation="";
matricule=0; tel=0;
salaire=0;
}

// nom_emp,prenom_emp,adresse_emp,tel_emp,fonction,salaire,evaluation

Employe::Employe(QString nom,QString prenom,QString adresse,long tel,QString fonction,double salaire,QString evaluation)
{
    this->nom=nom;
    this->prenom=prenom;
    this->adresse=adresse;
    this->tel=tel;
    this->fonction=fonction;
    this->salaire=salaire;
    this->evaluation=evaluation;
}


 // *****************   fonctionnalités de bases *******************

bool Employe::ajouter()
{
    QString tel_string=QString::number(tel);
    QString salaire_string=QString::number(salaire);

  QSqlQuery query;
  query.prepare("INSERT INTO employes (nom_emp,prenom_emp,adresse_emp,tel_emp,fonction,salaire,evaluation) "
                "VALUES (:nom_emp,:prenom_emp,:adresse_emp,:tel_emp,:fonction,:salaire,:evaluation)");

  query.bindValue(":nom_emp", nom);
  query.bindValue(":prenom_emp", prenom);
  query.bindValue(":adresse_emp", adresse);
  query.bindValue(":tel_emp", tel_string);
  query.bindValue(":fonction", fonction);
  query.bindValue(":salaire", salaire_string);
  query.bindValue(":evaluation", evaluation);

  query.exec();

}

bool Employe::modifier(int mat)
{
    QString tel_string=QString::number(tel);
    QString salaire_string=QString::number(salaire);
    QString mat_string=QString::number(mat);

  QSqlQuery query;
  query.prepare("UPDATE employes SET nom_emp=:nom_emp,prenom_emp=:prenom_emp,adresse_emp=:adresse_emp,tel_emp=:tel_emp,fonction=:fonction,salaire=:salaire,evaluation=:evaluation WHERE matricule_emp=:matricule_emp");

  query.bindValue(":nom_emp", nom);
  query.bindValue(":prenom_emp", prenom);
  query.bindValue(":adresse_emp", adresse);
  query.bindValue(":tel_emp", tel_string);
  query.bindValue(":fonction", fonction);
  query.bindValue(":salaire", salaire_string);
  query.bindValue(":evaluation", evaluation);
  query.bindValue(":matricule_emp", mat);

  query.exec();

}

QSqlQueryModel * Employe::afficher()
{
  QSqlQueryModel* model=new QSqlQueryModel();

  model->setQuery("SELECT* from employes");
  model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
  model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
  model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
  model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
  model->setHeaderData(4, Qt::Horizontal, QObject::tr("Telephone"));
  model->setHeaderData(5, Qt::Horizontal, QObject::tr("Fonction"));
  model->setHeaderData(6, Qt::Horizontal, QObject::tr("Salaire"));
  model->setHeaderData(7, Qt::Horizontal, QObject::tr("Evaluation"));

  return model;
}

QSqlQueryModel * Employe::afficher_matricules()
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT matricule_emp from employes");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));

    return model;
}

 QSqlQueryModel * Employe::recuperer(int mat)
 {
     QSqlQueryModel* model=new QSqlQueryModel();
        QString mat_string=QString::number(mat); //convertion de mat vers une chaine de caractère pour q'un on puisse l'utiliser dans la requête

     model->setQuery("SELECT* from employes where matricule_emp="+mat_string);
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("Telephone"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("Fonction"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("Salaire"));
     model->setHeaderData(7, Qt::Horizontal, QObject::tr("Evaluation"));
     return model;

 }


bool Employe::supprimer(int matricule)
{
    QSqlQuery query;
    query.prepare("delete from employes where matricule_emp=:matricule_emp");

    query.bindValue(":matricule_emp", matricule);

    query.exec();

}

 // *****************  (Fin) fonctionnalités de bases *******************




// *********************  fonctionnalités avancées  *******************

QSqlQueryModel * Employe::affichage_trie(QString critere)
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT* from employes ORDER BY "+critere);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Telephone"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Fonction"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Salaire"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Evaluation"));

    return model;
}

QSqlQueryModel * Employe::recherche_selon_matricule(QString MotCle)
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT* from employes WHERE matricule_emp LIKE '%"+MotCle+"%'");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Telephone"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Fonction"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Salaire"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Evaluation"));

    return model;
}

QSqlQueryModel * Employe::recherche_selon_nomprenom(QString MotCle)
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT* from employes WHERE nom_emp LIKE '%"+MotCle+"%' OR prenom_emp LIKE '%"+MotCle+"%'");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Telephone"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Fonction"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Salaire"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Evaluation"));

    return model;
}

QSqlQueryModel * Employe::recherche_selon_adresse(QString MotCle)
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT* from employes WHERE adresse_emp LIKE '%"+MotCle+"%'");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Telephone"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Fonction"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Salaire"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Evaluation"));

    return model;
}



// *********************  (Fin) fonctionnalités avancées  *******************
