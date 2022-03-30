
#include "produit.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QString>
#include <QStackedWidget>


Produit::Produit(int id_prod , int qte , int prix_achat , int id_f , QString libelle_prod , QString classification , QDate date_entree_enstock)
{
    this->id_prod=id_prod ;
    this->qte=qte ;
    this->prix_achat=prix_achat ;
    this->libelle_prod=libelle_prod ;
    this->classification = classification ;
    this->date_entree_enstock=date_entree_enstock ;
    this->id_f=id_f ;

}
bool Produit :: ajouter()
{
    QSqlQuery query ;

    QString id = QString::number(id_prod);
    QString quant = QString::number(qte);
    QString prix = QString::number(prix_achat);
    QString idf = QString::number(id_f);


    query.prepare(" insert into PRODUITS (ID_PROD,LIBELLE_PROD , PRIX_ACHAT ,DATE_ENTREE_ENSTOCK ,QTE, CLASSIFICATION ,ID_F  )" "values (:ID_PROD, :LIBELLE_PROD ,:PRIX_ACHAT, :DATE_ENTREE_ENSTOCK, :QTE, :CLASSIFICATION ,:ID_F)");

    query.bindValue(":ID_PROD",id);
    query.bindValue(":LIBELLE_PROD",libelle_prod);
    query.bindValue (":PRIX_ACHAT" ,prix);
    query.bindValue(":DATE_ENTREE_ENSTOCK",date_entree_enstock);
    query.bindValue(":QTE",quant);
    query.bindValue(":CLASSIFICATION",classification);
    query.bindValue(":ID_F",idf);



   return query.exec();
}
bool Produit :: supprimer(int id_prod)
{
   QSqlQuery query ;

   QString id = QString::number(id_prod);

   query.prepare("Delete  from produits where ID_PROD=:id_prod");

   query.bindValue(":id_prod",id);
   return query.exec();

}
 QSqlQueryModel * Produit :: afficher()
 {
     QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("SELECT *  FROM PRODUITS");
           model->setHeaderData(0, Qt::Horizontal, QObject :: tr("id_prod"));
           model->setHeaderData(1, Qt::Horizontal, QObject :: tr("libelle_prod"));
           model->setHeaderData(2, Qt::Horizontal, QObject :: tr("prix_achat"));
           model->setHeaderData(3, Qt::Horizontal, QObject :: tr("date_entree_enstock"));
           model->setHeaderData(4, Qt::Horizontal, QObject :: tr("qte"));
           model->setHeaderData(5, Qt::Horizontal, QObject :: tr("classification"));
           model->setHeaderData(6, Qt::Horizontal, QObject :: tr("id_f"));

     return model ;
 }
 bool  Produit :: modifier(int id_prod,int prix_achat , QDate date_entree_enstock  ,int qte,QString classification , QString libelle_prod,int id_f)
      {

     QSqlQuery query ;
     QString id = QString :: number(id_prod);
     QString quant = QString::number(qte);
     QString prix = QString::number(prix_achat);
     QString idf = QString::number(id_f);

     query.prepare("UPDATE PRODUITS SET  LIBELLE_PROD= :libelle_prod, PRIX_ACHAT= :prix_achat ,DATE_ENTREE_ENSTOCK= :date_entree_enstock,QTE= :qte,CLASSIFICATION= :classification,ID_F= :id_f WHERE ID_PROD = :id_prod ");

     query.bindValue(":id_prod",id);
     query.bindValue(":libelle_prod",libelle_prod);
     query.bindValue (":prix_achat" ,prix);
     query.bindValue(":date_entree_enstock",date_entree_enstock);
     query.bindValue(":qte",quant);
     query.bindValue(":classification",classification);
     query.bindValue(":id_f",idf);




          return  query.exec();
      }

 QSqlQueryModel * Produit::  rechercher(int id_prod )
    {
        QString idprod_string=QString::number(id_prod);
        QSqlQueryModel * model= new QSqlQueryModel();
        model-> setQuery("SELECT * FROM PRODUITS where ID_PROD = "+idprod_string);


        return model;

    }

     QSqlQueryModel * Produit::  tridesc()
     {

         QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from PRODUITS  order by ID_PROD ");

         return model;

     }
     QString Produit:: apercu_pdf()
           {
               QString text="        ******* Les Produits  *******      \n \n " ;
               QSqlQuery query ;
               QString i,x,z,m,n,b,a,c,d;


                query.exec("select * from PRODUITS  ");
                while (query.next())
                {
                   i=query.value(0).toString();
                    x=query.value(1).toString();
                    z=query.value(2).toString();
                  m=query.value(3).toString();
                  n=query.value(4).toString();
                  b=query.value(5).toString();
                  c=query.value(6).toString();


          text += "\n ID_PROD: "+i+"\n\n - PRIX_ACHAT : "+ x+"\n  - - DATE_ENTREE_ENSTOCK : "+ z+"\n--  QTE:"+m+"\n__ CLASSIFICATION :"+n+"\n--- LIBELLE_PROD : "+b+"\n--- ID_F : "+c+"______________\n";

               }
                       return text ;




           }
     QSqlQueryModel * Produit ::recuperer_produit(int id_prod)
     {
         QSqlQueryModel* model=new QSqlQueryModel();
            QString id_string=QString::number(id_prod); //convertion de mat vers une chaine de caractère pour q'un on puisse l'utiliser dans la requête

         model->setQuery("SELECT* from PRODUITS where id_prod="+id_string);
         model->setHeaderData(0, Qt::Horizontal, QObject :: tr("id_prod"));
         model->setHeaderData(1, Qt::Horizontal, QObject :: tr("libelle_prod"));
         model->setHeaderData(2, Qt::Horizontal, QObject :: tr("prix_achat"));
         model->setHeaderData(3, Qt::Horizontal, QObject :: tr("date_entree_enstock"));
         model->setHeaderData(4, Qt::Horizontal, QObject :: tr("qte"));
         model->setHeaderData(5, Qt::Horizontal, QObject :: tr("classification"));
         model->setHeaderData(6, Qt::Horizontal, QObject :: tr("id_f"));

         return model;

     }



