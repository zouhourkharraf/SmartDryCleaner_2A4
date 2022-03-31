#ifndef INTERFACEAUTHENTIFICATION_H
#define INTERFACEAUTHENTIFICATION_H

#include <QMainWindow>
#include"employe.h"
#include"profil.h"
#include"mainwindow.h"

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

private:
    Ui::InterfaceAuthentification *uia;

    MainWindow w;
    Profil P;
};

#endif // INTERFACEAUTHENTIFICATION_H
