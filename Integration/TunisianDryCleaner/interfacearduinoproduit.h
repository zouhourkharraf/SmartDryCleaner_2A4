#ifndef INTERFACEARDUINOPRODUIT_H
#define INTERFACEARDUINOPRODUIT_H

#include <QDialog>
#include "arduino.h"


namespace Ui {
class interfacearduinoproduit;
}

class interfacearduinoproduit : public QDialog
{
    Q_OBJECT

public:
    explicit interfacearduinoproduit(QWidget *parent = nullptr);
    ~interfacearduinoproduit();
private slots:
    void on_off_buzzur_clicked();

    void on_lcd_incendie_clicked();

private:
    Ui::interfacearduinoproduit *ui;
    QByteArray data; // variable contenant les données reçues

    Arduino A; // objet temporaire
    int timerId;
     protected:
         void timerEvent(QTimerEvent *event);
};

#endif // INTERFACEARDUINOPRODUIT_H
