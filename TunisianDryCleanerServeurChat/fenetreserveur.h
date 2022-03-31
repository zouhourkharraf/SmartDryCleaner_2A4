#ifndef FENETRESERVEUR_H
#define FENETRESERVEUR_H

#include <QtGui>
#include <QtNetwork>
#include <QWidget>
#include<QLabel>
#include<QPushButton>

namespace Ui {
class FenetreServeur;
}

class FenetreServeur : public QWidget
{
    Q_OBJECT

public:

    ~FenetreServeur();

    FenetreServeur();
    void envoyerATous(const QString &message);

private slots:
    void nouvelleConnexion();
    void donneesRecues();
    void deconnexionClient();

private:
    Ui::FenetreServeur *ui;
    QLabel *etatServeur;
    QPushButton *boutonQuitter;

    QTcpServer *serveur;
    QList<QTcpSocket *> clients;
    quint16 tailleMessage;

};

#endif // FENETRESERVEUR_H
