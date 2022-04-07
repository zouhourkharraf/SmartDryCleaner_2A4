#ifndef CLIENT_H
#define CLIENT_H
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

class client
{
private:
    int ID_CLIENT;
    QString NOM_CLIENT;
    QString PRENOM_CLIENT;
    QString ADRESSE_CLIENT;
    int TEL_CLIENT;
    int NB_SERVICE_UTILISE;
    QDate DATE_ENREGISTREMENT;
public:
    client();
    client(int ID_CLIENT, QString NOM_CLIENT, QString PRENOM_CLIENT, QString ADRESSE_CLIENT,
           int TEL_CLIENT, int NB_SERVICE_UTILISE, QDate DATE_ENREGISTREMENT);
    ~client(){};

    int getId_client();
    QString getNom_client();
    QString getPrenom_client();
    QString getAdresse_client();
    int getTel_client();
    int getNb_service_utilise();
    QDate getDate_enregistrement();

    void setId_client(int ID_CLIENT);
    void setNom_client(QString NOM_CLIENT);
    void setPrenom_client(QString PRENOM_CLIENT);
    void setAdresse_client(QString ADRESSE_CLIENT);
    void setTel_client (int TEL_CLIENT);
    void setNb_service_utilise(int NB_SERVICE_UTILISE);
    void setDate_enregistrement(QDate DATE_ENREGISTREMENT);


    bool ajouter_client();
    QSqlQueryModel * afficher_client();
    bool modifier_client(int, QString, QString , QString ,int , int , QDate );
    bool supprimer_client(int id);
    bool chercher(int );

    QSqlQueryModel * rechercher_client(const QString &b);
    QSqlQueryModel * trier_clientId();
    QSqlQueryModel * trier_clientNom();
    QSqlQueryModel * trier_clientDate();

    QSqlQueryModel * recuperer(int ID_CLIENT);

};

#endif // CLIENT_H
