#ifndef SERVICE_H
#define SERVICE_H

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

class Service
{   int IDSERVICE;
    QString NOMSERVICE,TYPESERVICE,EMPLACEMENTSERVICE,DESCRIPTIONSERVICE ;
    QDate DATESERVICE;
    int PRIXSERVICE;
public:
    Service();
    Service(int,QString,QString,QString,int,QString,QDate);


  int getid_service(){return IDSERVICE ;}
    QString getnom_service(){return NOMSERVICE;};
    QString gettype_service(){return TYPESERVICE;}
    QString getemplacement_service(){return EMPLACEMENTSERVICE;}
    float getprix_service(){return PRIXSERVICE;}
    QString getdescription_service(){return DESCRIPTIONSERVICE;}
    QDate getdate_service(){return DATESERVICE;}


    void setid_service (int c ){IDSERVICE=c;}
    void setnom_service(QString n){NOMSERVICE=n;}
    void settype_service(QString p){TYPESERVICE=p;}
    void setemplacement_service(QString m){ EMPLACEMENTSERVICE=m;}
    void setprix_service(int t){PRIXSERVICE=t;}
    void setdescription_service(QString a){DESCRIPTIONSERVICE=a;}
    void setdate_service(QDate b){DATESERVICE=b;}


    bool ajouter_service();
    QSqlQueryModel * afficher_service();
    bool modifier_service(int ,QString ,QString ,QString,int,QString,QDate);
    bool supprimer_service(int);
    //QSqlQueryModel * cherchercinres(QString );
    QSqlQueryModel * recuperer_service(int );
    QSqlQueryModel * trier_serviceNom();
    QSqlQueryModel * trier_serviceType();
    QSqlQueryModel * trier_serviceId();
    QSqlQueryModel * rechercher_service(const QString &b);


};


#endif // SERVICE_H
