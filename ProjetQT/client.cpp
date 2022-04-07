#include "client.h"

client::client()
{
    ID_CLIENT=0;
    NOM_CLIENT="";
    PRENOM_CLIENT="";
    ADRESSE_CLIENT="";
    TEL_CLIENT=0;
    NB_SERVICE_UTILISE=0;

}

client::client(int ID_CLIENT, QString NOM_CLIENT, QString PRENOM_CLIENT, QString ADRESSE_CLIENT,
       int TEL_CLIENT, int NB_SERVICE_UTILISE, QDate DATE_ENREGISTREMENT)
{

    this->ID_CLIENT=ID_CLIENT;
    this->NOM_CLIENT=NOM_CLIENT;
    this->PRENOM_CLIENT=PRENOM_CLIENT;
    this->ADRESSE_CLIENT=ADRESSE_CLIENT;
    this->TEL_CLIENT=TEL_CLIENT;
    this->NB_SERVICE_UTILISE=NB_SERVICE_UTILISE;
    this->DATE_ENREGISTREMENT=DATE_ENREGISTREMENT;

}

int client::getId_client(){ return ID_CLIENT ;}
QString client::getNom_client(){ return NOM_CLIENT;}
QString client::getPrenom_client(){return PRENOM_CLIENT ;}
QString client::getAdresse_client(){return ADRESSE_CLIENT;}
int client::getTel_client(){return TEL_CLIENT;}
int client::getNb_service_utilise(){return NB_SERVICE_UTILISE;}
QDate client::getDate_enregistrement(){return DATE_ENREGISTREMENT;}

void client::setId_client(int ID_CLIENT){this->ID_CLIENT=ID_CLIENT;}
void client::setNom_client(QString NOM_CLIENT){this->NOM_CLIENT=NOM_CLIENT;}
void client::setPrenom_client(QString PRENOM_CLIENT){this->PRENOM_CLIENT=PRENOM_CLIENT;}
void client::setAdresse_client(QString ADRESSE_CLIENT){this->ADRESSE_CLIENT=ADRESSE_CLIENT;}
void client::setTel_client (int TEL_CLIENT){this->TEL_CLIENT=TEL_CLIENT;}
void client::setNb_service_utilise(int NB_SERVICE_UTILISE){this->NB_SERVICE_UTILISE=NB_SERVICE_UTILISE;}
void client::setDate_enregistrement(QDate DATE_ENREGISTREMENT){this->DATE_ENREGISTREMENT=DATE_ENREGISTREMENT;}


bool client::ajouter_client()
{
    QSqlQuery query;
    QString id_string=QString::number(ID_CLIENT);
    QString tel_string=QString::number(TEL_CLIENT);
    QString nbservice_string=QString::number(NB_SERVICE_UTILISE);
          query.prepare("INSERT INTO CLIENTS (ID_CLIENT,NOM_CLIENT,PRENOM_CLIENT,ADRESSE_CLIENT,TEL_CLIENT,NB_SERVICE_UTILISE,DATE_ENREGISTREMENT) "
                        "VALUES (:ID_CLIENT,:NOM_CLIENT,:PRENOM_CLIENT,:ADRESSE_CLIENT,:TEL_CLIENT,:NB_SERVICE_UTILISE,:DATE_ENREGISTREMENT)");
          query.bindValue(":ID_CLIENT", id_string);
          query.bindValue(":NOM_CLIENT", NOM_CLIENT);
          query.bindValue(":PRENOM_CLIENT",PRENOM_CLIENT);
          query.bindValue(":ADRESSE_CLIENT",ADRESSE_CLIENT);
          query.bindValue(":TEL_CLIENT",tel_string);
          query.bindValue(":NB_SERVICE_UTILISE",nbservice_string);
          query.bindValue(":DATE_ENREGISTREMENT",DATE_ENREGISTREMENT);
    return query.exec();

}
QSqlQueryModel * client::afficher_client()
{
    QSqlQueryModel* model=new QSqlQueryModel();
         model->setQuery("SELECT * FROM CLIENTS");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant Client"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom du Client"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom du Client"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse du Client"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("Tel du Client"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("Nombre de service utilisé"));
         model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date d'enregistrement"));

   return model;
}

bool client::chercher(int id)
 {
     QSqlQuery *query = new QSqlQuery;
    query->prepare("select * from CLIENTS where ID_CLIENT=:id");
    if (query->exec())
    {
        return true;
    }
    return false;
 }

bool client::modifier_client(int id, QString nom, QString prenom, QString adresse,
                             int tel, int nb_service_client, QDate date)
{

     QSqlQuery query;
     /*QString id_string=QString::number(id);
     QString tel_string=QString::number(tel);
     QString nbservice_string=QString::number(nb_service_client);
*/
    //query.prepare("update CLIENTS SET NOM_CLIENT=:nom, PRENOM_CLIENT= :prenom , ADRESSE_CLIENT= :adresse ,TEL_CLIENT=:tel, NB_SERVICE_UTILISE= :nb_service_client  WHERE ID_CLIENT= 122");

    query.prepare("update CLIENTS SET NOM_CLIENT=:nom, PRENOM_CLIENT=:prenom, ADRESSE_CLIENT=:adresse  ,TEL_CLIENT=:tel, NB_SERVICE_UTILISE=2  WHERE ID_CLIENT=:id");


    //c un modele preparer pour lexecution
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":adresse",adresse);
    query.bindValue(":tel",tel);
    query.bindValue(":nb_service_client ",nb_service_client);
    //query.bindValue(":date",date);

     return    query.exec();


}


bool client::supprimer_client(int ID_CLIENT)
{
    QSqlQuery query;
          query.prepare("Delete from CLIENTS where ID_CLIENT=:ID_CLIENT");
          query.bindValue(0, ID_CLIENT);
          query.bindValue(1,NOM_CLIENT);
          query.bindValue(2,PRENOM_CLIENT);
          query.bindValue(3,ADRESSE_CLIENT);
          query.bindValue(4,TEL_CLIENT);
          query.bindValue(5,NB_SERVICE_UTILISE);
          query.bindValue(6,DATE_ENREGISTREMENT);

          return query.exec();
}


QSqlQueryModel * client::rechercher_client(const QString &b)
{
   QSqlQueryModel * model = new QSqlQueryModel();
   model->setQuery("SELECT * FROM CLIENTS WHERE (ID_CLIENT || NOM_CLIENT || PRENOM_CLIENT || ADRESSE_CLIENT || TEL_CLIENT || NB_SERVICE_UTILISE|| DATE_ENREGISTREMENT) LIKE '%"+b+"%'");
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID_CLIENT"));
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("NOM_CLIENT"));
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("PRENOM_CLIENT"));
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("ADRESSE_CLIENT"));
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("TEL_CLIENT"));
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("NB_SERVICE_UTILISE"));
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("DATE_ENREGISTREMENT"));
   return model;
}

QSqlQueryModel * client::trier_clientId()
{
        QSqlQueryModel * model= new QSqlQueryModel();
           model->setQuery("select * from CLIENTS order by ID_CLIENT");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_CLIENT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_CLIENT"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM_CLIENT"));
           model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE_CLIENT"));
           model->setHeaderData(4,Qt::Horizontal,QObject::tr("TEL_CLIENT"));
           model->setHeaderData(5,Qt::Horizontal,QObject::tr("NB_SERVICE_UTILISE"));
           model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE_ENREGISTREMENT"));
           return model;
}

QSqlQueryModel * client::trier_clientNom()
{
        QSqlQueryModel * model= new QSqlQueryModel();

           model->setQuery("select * from CLIENTS order by NOM_CLIENT");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_CLIENT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_CLIENT"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM_CLIENT"));
           model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE_CLIENT"));
           model->setHeaderData(4,Qt::Horizontal,QObject::tr("TEL_CLIENT"));
           model->setHeaderData(5,Qt::Horizontal,QObject::tr("NB_SERVICE_UTILISE"));
           model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE_ENREGISTREMENT"));
          return model;
}

QSqlQueryModel * client::trier_clientDate()
{
        QSqlQueryModel * model= new QSqlQueryModel();

           model->setQuery("select * from CLIENTS order by DATE_ENREGISTREMENT");
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_CLIENT"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_CLIENT"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM_CLIENT"));
           model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE_CLIENT"));
           model->setHeaderData(4,Qt::Horizontal,QObject::tr("TEL_CLIENT"));
           model->setHeaderData(5,Qt::Horizontal,QObject::tr("NB_SERVICE_UTILISE"));
           model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE_ENREGISTREMENT"));
           return model;
}



 QSqlQueryModel * client::recuperer(int ID_CLIENT)
  {
     QSqlQueryModel * model = new QSqlQueryModel();
     QString idS = QString::number(ID_CLIENT);
     model->setQuery("SELECT * FROM CLIENTS WHERE ID_CLIENT="+idS );
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID_CLIENT"));
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("NOM_CLIENT"));
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("PRENOM_CLIENT"));
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("ADRESSE_CLIENT"));
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("TEL_CLIENT"));
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("NB_SERVICE_UTILISE"));
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("DATE_ENREGISTREMENT"));
     return model;


  }
