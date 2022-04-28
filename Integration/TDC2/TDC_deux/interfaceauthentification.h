#ifndef INTERFACEAUTHENTIFICATION_H
#define INTERFACEAUTHENTIFICATION_H

#include <QMainWindow>
#include"employe.h"
#include"profil.h"
#include"mainwindow.h"
#include "arduino.h"

namespace Ui {
class InterfaceAuthentification;
}

class InterfaceAuthentification : public QMainWindow
{
    Q_OBJECT

public:
    explicit InterfaceAuthentification(QWidget *parent = nullptr);
    ~InterfaceAuthentification();


private slots:
    void on_bouton_connexion_clicked();
    //slot pour l'Arduino
    void mise_a_jour_avec_Arduino();

private:
    Ui::InterfaceAuthentification *uia;
    MainWindow w;
    Profil P;

    // attributs pour l'arduino
    QByteArray data; // variable contenant les données reçues
    Arduino A; // l'objet pour le traitement de l'Arduino
};

#endif // INTERFACEAUTHENTIFICATION_H
