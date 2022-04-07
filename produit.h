#ifndef PRODUIT_H
#define PRODUIT_H
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include <QObject>
#include <QtPrintSupport>

class Produit
{
    int id_prod , prix_achat , qte , id_f ;
    QString libelle_prod , classification ;
    QDate date_entree_enstock ;
public:
    Produit() {}
    Produit(int , int , int , int , QString ,QString,QDate);

    QString getlibelle_prod (){return libelle_prod;}
    QString getclassification (){return classification;}
    int getid_prod (){return id_prod;}
    int getprix_achat (){return prix_achat;}
    int getqte (){return qte;}
    int getid_f (){return id_f;}
    QDate getdate_entree_enstock (){return date_entree_enstock ;}

    void setlibelle_prod (QString lib){libelle_prod = lib ;}
    void setclassification (QString clas){classification = clas ;}
    void setid_prod (int id){id_prod = id ;}
    void setprix_achat (int prix){prix_achat = prix ;}
    void setqte (int q){qte = q ;}
    void setid_f (int idf){id_f = idf ;}
    void setdate_entree_enstock (QDate date){date_entree_enstock = date ;}

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer (int);
    bool modifier(int ,int  , QDate   ,int ,QString  , QString ,int );

    QSqlQueryModel * tridesc();
    QSqlQueryModel *  trinom() ;
    QSqlQueryModel *   tridf() ;
    QString  apercu_pdf();
    QSqlQueryModel * recuperer_produit(int );
    QSqlQueryModel * rechercher_produit(const QString &b);


};


#endif // PRODUIT_H
