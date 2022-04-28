#include "profil.h"

#include<QSqlQuery>
#include<QObject>
#include<QSqlQueryModel>
#include<QString>

//login_emp,mot_de_passe_emp,Matricule_emp(CL_E)

                          //constructeurs
Profil::Profil()
{
login="";
mp=0;
matricule=0;
}

Profil::Profil(QString login,int mp,int matricule)
{
    this->login=login;
    this->mp=mp;
    this->matricule=matricule;
}

// ****************************** Fonctionnalités de bases **********************************

bool Profil::ajouter_profil()
{
    QString matricule_string=QString::number(matricule);
    QString mp_string=QString::number(mp);

  QSqlQuery query;
  query.prepare("INSERT INTO profils (login_emp,mot_de_passe_emp,matricule_emp) "
                "VALUES (:login_emp,:mot_de_passe_emp,:matricule_emp)");

  query.bindValue(":login_emp", login);
  query.bindValue(":mot_de_passe_emp", mp);
  query.bindValue(":matricule_emp", matricule);

  query.exec();
}


bool Profil::modifier_profil(QString login1)
{
    QSqlQuery query;
    query.prepare("UPDATE profils SET mot_de_passe_emp=:mot_de_passe_emp WHERE login_emp='"+login1+"'");

    query.bindValue(":mot_de_passe_emp", mp);

    query.exec();
}

QSqlQueryModel* Profil::recuperer_profil(QString login_saisi)
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT* from profils WHERE login_emp='"+login_saisi+"'");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("login"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("mp"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("matricule"));
    return model;
}

 QSqlQueryModel* Profil::recuperer_login_profil()
 {
     QSqlQueryModel* model=new QSqlQueryModel();

     model->setQuery("SELECT login_emp from profils");

     return model;
 }

QSqlQueryModel* Profil::recuperer_matricule_pour_profil()
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT matricule_emp from employes MINUS SELECT matricule_emp from profils");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));

    return model;
}

QSqlQueryModel* Profil::recuperer_prenom_pour_loginprofil(int mat)
{
    QSqlQueryModel* model=new QSqlQueryModel();
    QString mat_string=QString::number(mat);

    model->setQuery("SELECT prenom_emp from employes WHERE matricule_emp="+mat_string);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));

    return model;
}



bool Profil::supprimer_profil(QString login1)
{
    QSqlQuery query;
    query.prepare("delete from profils where login_emp=:login_emp");

    query.bindValue(":login_emp", login1);

    query.exec();
}

QSqlQueryModel* Profil::verifier_login_motdepassde(QString login1,int mp1)
{
    QSqlQueryModel* model=new QSqlQueryModel();
    QString mp_string=QString::number(mp1);

    model->setQuery("SELECT* from profils WHERE login_emp='"+login1+"' AND mot_de_passe_emp="+mp_string);

    return model;
}

