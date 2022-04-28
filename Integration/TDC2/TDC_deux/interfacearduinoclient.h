#ifndef INTERFACEARDUINOCLIENT_H
#define INTERFACEARDUINOCLIENT_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
#include <QDialog>
#include "arduino.h"

namespace Ui {
class interfacearduinoclient;
}

class interfacearduinoclient : public QDialog
{
    Q_OBJECT

public:
    explicit interfacearduinoclient(QWidget *parent = nullptr);
    ~interfacearduinoclient();
    void update_label();

    void on_ouvrirbarriere_clicked();   // bouton ON
    void on_afficherLCDparking_clicked();
    void on_fermerbarriere_clicked();
    void on_miseajourparking_clicked();
    void on_demarrerparking_stateChanged(int arg1);
    void on_envoyerparking_clicked();
    void on_sqlparking_clicked();

private slots:


private:
    Ui::interfacearduinoclient *ui;
    QByteArray data; // variable contenant les données reçues


    Arduino A; // objet temporaire

};

#endif // INTERFACEARDUINOCLIENT_H
