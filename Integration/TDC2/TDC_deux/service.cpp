#include "service.h"
#include <QProcess>
Service::Service()
{

    IDSERVICE =0;
    NOMSERVICE ="";
    TYPESERVICE ="";
    EMPLACEMENTSERVICE = "";
    PRIXSERVICE = 0;
    DESCRIPTIONSERVICE="";

}


Service::Service(int IDSERVICE,QString NOMSERVICE,QString TYPESERVICE,QString EMPLACEMENTSERVICE,int PRIXSERVICE,QString DESCRIPTIONSERVICE,QDate DATESERVICE)
{
    this->IDSERVICE =IDSERVICE;
    this->NOMSERVICE = NOMSERVICE;
    this->TYPESERVICE =TYPESERVICE;
    this->EMPLACEMENTSERVICE = EMPLACEMENTSERVICE;
    this->PRIXSERVICE = PRIXSERVICE;
    this->DESCRIPTIONSERVICE=DESCRIPTIONSERVICE;
    this->DATESERVICE=DATESERVICE;
}

bool Service::ajouter_service()
{
    QProcess process;
        process.start("python C:/Integration/TunisianDryCleaner/message.py ");
        process.waitForFinished();

    QSqlQuery query;
    QString id_service=QString::number(IDSERVICE);
    QString prix_service=QString::number(PRIXSERVICE);

                     query.prepare("INSERT INTO  SERVICES (IDSERVICE, NOMSERVICE,TYPESERVICE, EMPLACEMENTSERVICE, PRIXSERVICE, DESCRIPTIONSERVICE, DATESERVICE)"
                                   "VALUES (:IDSERVICE,:NOMSERVICE,:TYPESERVICE,:EMPLACEMENTSERVICE,:PRIXSERVICE,:DESCRIPTIONSERVICE, :DATESERVICE)");

                     query.bindValue(":IDSERVICE", id_service);
                     query.bindValue(":NOMSERVICE", NOMSERVICE);
                     query.bindValue(":TYPESERVICE", TYPESERVICE);
                     query.bindValue(":EMPLACEMENTSERVICE", EMPLACEMENTSERVICE);
                     query.bindValue(":PRIXSERVICE", prix_service);
                      query.bindValue(":DESCRIPTIONSERVICE", DESCRIPTIONSERVICE);
                      query.bindValue(":DATESERVICE", DATESERVICE);
                    return query.exec();

}


QSqlQueryModel * Service::afficher_service()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("SELECT * from SERVICES");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDSERVICE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOMSERVICE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("TYPESERVICE"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("EMPLACEMENTSERVICE"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("PRIXSERVICE"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("DESCRIPTIONSERVICE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("DATESERVICE"));


    return model;


}



bool Service::modifier_service(int IDSERVICE,QString NOMSERVICE,QString TYPESERVICE,QString EMPLACEMENTSERVICE,int PRIXSERVICE,QString DESCRIPTIONSERVICE,QDate date)

{   QProcess process;
    process.start("python C:/Integration/TunisianDryCleaner/message.py ");
    process.waitForFinished();


     QSqlQuery query;

query.prepare("UPDATE SERVICES SET NOMSERVICE=:NOMSERVICE, TYPESERVICE=:TYPESERVICE, EMPLACEMENTSERVICE=:EMPLACEMENTSERVICE  ,PRIXSERVICE=20, DESCRIPTIONSERVICE=:DESCRIPTIONSERVICE  WHERE IDSERVICE=:IDSERVICE");

    //c un modele preparer pour lexecution
    query.bindValue(":IDSERVICE", IDSERVICE);
    query.bindValue(":NOMSERVICE", NOMSERVICE);
    query.bindValue(":TYPESERVICE",TYPESERVICE);
    query.bindValue(":EMPLACEMENTSERVICE",EMPLACEMENTSERVICE);
    query.bindValue(":PRIXSERVICE",PRIXSERVICE);
     query.bindValue(":DESCRIPTIONSERVICE",DESCRIPTIONSERVICE);

     return    query.exec();



}


bool Service::supprimer_service(int IDSERVICE)
{  QProcess process;
    process.start("python C:/Integration/TunisianDryCleaner/message.py ");
    process.waitForFinished();


      QSqlQuery query;
      query.prepare("Delete from SERVICES where IDSERVICE=:IDSERVICE");
      query.bindValue(":IDSERVICE",IDSERVICE);
      return query.exec();
}


QSqlQueryModel * Service::recuperer_service(int idservice)
  {
    QSqlQueryModel * model = new QSqlQueryModel();
    QString idS = QString::number(idservice);
    model->setQuery("SELECT * FROM SERVICES WHERE IDSERVICE="+idS );
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDSERVICE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOMSERVICE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("TYPESERVICE"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("EMPLACEMENTSERVICE"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("PRIXSERVICE"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("DESCRIPTIONSERVICE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("DATESERVICE"));
    return model;
}

     QSqlQueryModel * Service::rechercher_service(const QString &b)
     {

        QSqlQueryModel * model = new QSqlQueryModel();
        model->setQuery("SELECT * FROM SERVICES WHERE (IDSERVICE || NOMSERVICE || TYPESERVICE || EMPLACEMENTSERVICE || PRIXSERVICE || DESCRIPTIONSERVICE || DATESERVICE) LIKE '%"+b+"%'");
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDSERVICE"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOMSERVICE"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("TYPESERVICE"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("EMPLACEMENTSERVICE"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("PRIXSERVICE"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("DESCRIPTIONSERVICE"));
        model->setHeaderData(6,Qt::Horizontal,QObject::tr("DATESERVICE"));
        return model;
     }


    QSqlQueryModel * Service::trier_serviceType()
    {
        QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery("SELECT * FROM SERVICES ORDER BY TYPESERVICE");
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDSERVICE"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOMSERVICE"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("TYPESERVICE"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("EMPLACEMENTSERVICE"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("PRIXSERVICE"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("DESCRIPTIONSERVICE"));
        model->setHeaderData(6,Qt::Horizontal,QObject::tr("DATESERVICE"));
        return model;
    }

    QSqlQueryModel * Service::trier_serviceNom()
    {
        QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery("SELECT * FROM SERVICES ORDER BY NOMSERVICE");
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDSERVICE"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOMSERVICE"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("TYPESERVICE"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("EMPLACEMENTSERVICE"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("PRIXSERVICE"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("DESCRIPTIONSERVICE"));
        model->setHeaderData(6,Qt::Horizontal,QObject::tr("DATESERVICE"));
        return model;
    }

    QSqlQueryModel * Service::trier_serviceId()
    {
        QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery("SELECT * FROM SERVICES ORDER BY IDSERVICE desc");
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDSERVICE"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOMSERVICE"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("TYPESERVICE"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("EMPLACEMENTSERVICE"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("PRIXSERVICE"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("DESCRIPTIONSERVICE"));
        model->setHeaderData(6,Qt::Horizontal,QObject::tr("DATESERVICE"));
        return model;
    }
