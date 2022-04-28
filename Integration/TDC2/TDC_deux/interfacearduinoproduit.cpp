#include "interfacearduinoproduit.h"
#include "ui_interfacearduinoproduit.h"
#include<QMessageBox>
#include<QObject>
#include<QString>
#include<QTimer>
#include<QDateTime>

interfacearduinoproduit::interfacearduinoproduit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interfacearduinoproduit)
{
    ui->setupUi(this);
    int ret=A.connect_arduino(); // lancer la connexion à arduino
    switch(ret){
    case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
        break;
    case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
       break;
    case(-1):qDebug() << "arduino is not available";
    }
     QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer
     //le slot update_label suite à la reception du signal readyRead (reception des données).
}

interfacearduinoproduit::~interfacearduinoproduit()
{
    delete ui;
}


void interfacearduinoproduit::timerEvent(QTimerEvent *event)
{

   QString ss=QString::fromUtf8(A.read_from_arduino()); // 9rina mel arduino

   int i=0;
   for(int j=0;j<4;j++)
   {
       if(ss[j].isNumber())
       {

           i=i*10+ss[j].digitValue();
       }

   }
   qDebug() << i;
   if(i<40)
      QMessageBox::information(nullptr, QObject::tr("database is open"),
                   QObject::tr("alarme de feu .\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
void interfacearduinoproduit::on_off_buzzur_clicked()
{
    A.write_to_arduino("0");
}

void interfacearduinoproduit::on_lcd_incendie_clicked()
{
    A.write_to_arduino("1");
}

