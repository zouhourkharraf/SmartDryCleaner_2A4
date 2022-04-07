#include "fournisseurs.h"
#include <QSqlQuery>
#include<QtDebug>
#include <QDebug>
#include <QSqlQueryModel>
#include<QLineEdit>
#include<QString>
#include<QComboBox>
#include<QObject>
#include<QMediaPlayer>
fournisseurs::fournisseurs()
{
    id_f=0;
    tel_f=0;

}
fournisseurs::fournisseurs(int id_f,QString nom_f,QString prenom_f,QString adresse_f,QString email_f,int tel_f)
{
    this->id_f=id_f;
    this->nom_f=nom_f;
    this->prenom_f=prenom_f;
    this->adresse_f=adresse_f;
    this->email_f=email_f;
    this->tel_f=tel_f;

}

int fournisseurs:: getid_f()
{
    return id_f;
}
    QString fournisseurs:: getnom_f()
    {
    return nom_f;
    }
    QString fournisseurs:: getprenom_f()
    {
    return prenom_f;
    }

    QString fournisseurs:: getadresse_f()
    {
    return adresse_f;
    }
    QString fournisseurs:: getemail_f()
    {
    return email_f;
    }
    int fournisseurs:: gettel_f()
    {
        return tel_f;
    }


    void fournisseurs:: setid_f(int id_f )
    {
        this->id_f=id_f;
    }
    void fournisseurs:: setnom_f(QString nom_f )
    {
        this->nom_f=nom_f;
    }
    void fournisseurs:: setprenom_f(QString prenom_f )
    {
        this->prenom_f=prenom_f;
    }

    void fournisseurs:: setadresse_f(QString adresse_f )
    {
        this->adresse_f=adresse_f;
    }

    void fournisseurs:: setemail_f(QString email_f )
    {
        this->email_f=email_f;
    }
    void fournisseurs:: settel_f(int tel_f )
    {
        this->tel_f=tel_f;
    }


    bool fournisseurs::ajouter()
    {
        QString num_idf=QString::number(id_f);
             QString num_tel=QString::number(tel_f);

            QSqlQuery query;
                  query.prepare("INSERT INTO fournisseurs (id_f,nom_f,prenom_f,adresse_f,email_f,tel_f) "
                                "VALUES (:id, :forename, :surname, :adr, :email, :tel)");

                  query.bindValue(":id", num_idf);
                  query.bindValue(":forename", nom_f);
                  query.bindValue(":surname", prenom_f);
                  query.bindValue(":adr", adresse_f);
                  query.bindValue(":email", email_f);
                   query.bindValue(":tel", num_tel);
                   return query.exec();


    }
    bool fournisseurs::supprimer(int id)
    {
         QSqlQuery query;
        query.prepare("Delete from fournisseurs where id_f=:id");

        query.bindValue(0, id);

        return query.exec();

    }

    QSqlQueryModel* fournisseurs::afficher()
    {
        QSqlQueryModel* model=new QSqlQueryModel();
              model->setQuery("SELECT * FROM fournisseurs");
              model->setHeaderData(0, Qt::Horizontal,QObject::tr("Id fournisseur"));
              model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom fournisseur"));
              model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom fournisseur"));
              model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse fournisseur"));
              model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email fournisseur"));
              model->setHeaderData(5, Qt::Horizontal, QObject::tr("Tel fournisseur"));


       return model;

    }


 bool  fournisseurs::modifier(int id_f,QString nom_f,QString prenom_f,QString adresse_f,QString email_f,int tel_f)
         {
             QSqlQuery query;
             QString id_string= QString::number(id_f);
              QString tel_string= QString::number(tel_f);



             query.prepare("UPDATE fournisseurs SET NOM_F= :nom_f ,PRENOM_F= :prenom_f,ADRESSE_F= :adresse_f,EMAIL_F= :email_f,TEL_F= :tel_f WHERE ID_F = :id_f ");

             query.bindValue(":nom_f", nom_f);
             query.bindValue(":prenom_f",prenom_f);
             query.bindValue(":adresse_f",adresse_f);
             query.bindValue(":email_f",email_f);
             query.bindValue(":tel_f",tel_string);
             query.bindValue(":id_f",id_string);

             return  query.exec();
         }


     QSqlQueryModel * fournisseurs::  tridesc()
     {

         QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from fournisseurs  order by ID_F desc");

         return model;

     }

     QString fournisseurs:: apercu_pdf()
               {
                   QString text="             * Les fournisseurs  *       \n \n " ;
                   QSqlQuery query ;
                   QString i,x,z,m,n,b,a,c,d;


                    query.exec("select * from fournisseurs  ");
                    while (query.next())
                    {
                       i=query.value(0).toString();
                        x=query.value(1).toString();
                        z=query.value(2).toString();
                      m=query.value(3).toString();
                      n=query.value(4).toString();
                      b=query.value(5).toString();


              text += "\n id fournissuer: "+z+"\n - nom : "+ x+"\n  - - prenom : "+ i+"\n--  adresse:"+m+"\n__ telephone :"+n+"\n--- e-mail : "+b+"\n";

                   }
                           return text ;




               }


     QSqlQueryModel * fournisseurs::rechercher_fournisseur(const QString &b)
        {
           QSqlQueryModel * model = new QSqlQueryModel();
           model->setQuery("SELECT * FROM fournisseurs WHERE (id_f || nom_f || prenom_f || adresse_f || email_f ) LIKE '%"+b+"%'");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_f"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_f"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom_f"));
           model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse_f"));
           model->setHeaderData(4, Qt::Horizontal, QObject::tr("email_f"));
          // model->setHeaderData(5, Qt::Horizontal, QObject::tr("tel_f"));
           return model;
        }






