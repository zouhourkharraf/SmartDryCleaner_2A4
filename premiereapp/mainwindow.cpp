#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fournisseurs.h"
#include <QDate>
#include <QMessageBox>
#include <QTableWidget>
#include <QTableView>
#include "smtp.h"
#include <QDesktopServices>
#include <QMessageBox>
#include<QString>
#include <QMediaPlayer>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include<QComboBox>
#include<QObject>
#include <QPrinter>
#include <QPrintDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    player = new QMediaPlayer(this);
    ui->setupUi(this);
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->exitBtn, SIGNAL(clicked()),this, SLOT(close()));
    ui->stackedWidget->setCurrentIndex(0);
    ui->idf->setValidator(new QIntValidator(0, 99999999, this));
    ui->telephonef->setValidator(new QIntValidator(0, 99999999, this));

    ui->tabfourn->setModel(f.afficher());
}

void MainWindow::sendMail()
{
    Smtp* smtp = new Smtp(ui->uname->text(), ui->paswd->text(), ui->server->text(), ui->port->text().toInt());
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}

void MainWindow::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}

MainWindow::~MainWindow()
{
    delete ui;

}



void MainWindow::on_ajouter_f_clicked()
{

        int id_f=ui->idf->text().toInt();
        QString nom_f=ui->nomf->text();
        QString prenom_f=ui->prenomf->text();
        QString adresse_f=ui->adressef->text();
        QString email_f=ui->emailf->text();
        int tel_f=ui->telephonef->text().toInt();
        fournisseurs f(id_f,nom_f,prenom_f,adresse_f,email_f,tel_f);

        //partie controle saisie :
                bool verif_code,verif_adrf,verif_prenf,verif_nomf, verif_emailf , verif_tele ;
               verif_code=true;
 verif_emailf =true;
 verif_tele=true;
               verif_nomf=true;
               verif_prenf=true;
               verif_adrf=true;

               //verif id
                QString code = ui->idf->text();
                     QString numbers = "0123456789";
                       bool verifHedhi = false;
                       for(int i = 0; i < code.length(); i++){
                           for(int j = 0; j < numbers.length(); j++){
                               if(code[i] == numbers[j]){
                                   verifHedhi = true;
                               }
                           }
                           if(verifHedhi == false ){
                               verif_code = false;
                               QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                           QObject::tr("Erreur id invalide doit etre numero .\n"
                                                       "Click Cancel to exit."), QMessageBox::Cancel);

                               break;
                           }
                       }
                       // verif nomf

                       QString libb = ui->nomf->text();
                              QString alphab = "azertyuiopqsdfghjklmwxcvbnéàçAZERTYUIOPQSDFGHJKLMWXCVBN";
                               verifHedhi = false;
                              for(int i = 0; i < libb.length(); i++){
                                  for(int j = 0; j < alphab.length(); j++){
                                      if(libb[i] == alphab[j]){
                                          verifHedhi = true;
                                      }
                                  }
                                  if(verifHedhi == false ){
                                      verif_nomf = false;
                                      QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                                  QObject::tr("nom doit etre sous forme caractére .\n"
                                                              "Click Cancel to exit."), QMessageBox::Cancel);

                                      break;
                                  }
                              }
                              // verif prenf

                              QString pren = ui->prenomf->text();

                                      verifHedhi = false;
                                     for(int i = 0; i < pren.length(); i++){
                                         for(int j = 0; j < alphab.length(); j++){
                                             if(pren[i] == alphab[j]){
                                                 verifHedhi = true;
                                             }
                                         }
                                         if(verifHedhi == false ){
                                             verif_prenf = false;
                                             QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                                         QObject::tr("prenom doit etre sous forme caractére .\n"
                                                                     "Click Cancel to exit."), QMessageBox::Cancel);

                                             break;
                                         }
                                     }
                                     // verif adressef

                                     QString adr = ui->adressef->text();
QString al="azertyuiopmlkjhgfdsqwxcvbnAZERTYUIOPMLKJHGFDSQWXCVBN123456789";
                                             verifHedhi = false;
                                            for(int i = 0; i < adr.length(); i++){
                                                for(int j = 0; j < al.length(); j++){
                                                    if(adr[i] == al[j]){
                                                        verifHedhi = true;
                                                    }
                                                }
                                                if(verifHedhi == false ){
                                                    verif_adrf = false;
                                                    QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                                                QObject::tr("doit doit etre sous forme caractére et numero seulement .\n"
                                                                            "Click Cancel to exit."), QMessageBox::Cancel);

                                                    break;
                                                }
                                            }
                                            // verif adressef

                                            QString email = ui->emailf->text();
                                                  QString alphabe = "azertyuiopqsdfghjklmwxcvbnéàçAZERTYUIOPQSDFGHJKLMWXCVBN@._-";
                                                    verifHedhi = false;
                                                   for(int i = 0; i < email.length(); i++){
                                                       for(int j = 0; j < alphabe.length(); j++){
                                                           if(email[i] == alphabe[j]){
                                                               verifHedhi = true;
                                                           }
                                                       }
                                                       if(verifHedhi == false ){
                                                           verif_emailf = false;
                                                           QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                                                       QObject::tr("email doit etre sous forme tttt@ttttt.ttt .\n"
                                                                                   "Click Cancel to exit."), QMessageBox::Cancel);

                                                           break;
                                                       }
                                                   }
                                                   //verif tele
                                                    QString tele = ui->telephonef->text();

                                                            verifHedhi = false;
                                                           for(int i = 0; i < tele.length(); i++){
                                                               for(int j = 0; j < numbers.length(); j++){
                                                                   if(tele[i] == numbers[j]){
                                                                       verifHedhi = true;
                                                                   }
                                                               }
                                                               if(verifHedhi == false ){
                                                                   verif_tele = false;
                                                                   QMessageBox::information(nullptr, QObject::tr("Erreur"),
                                                                               QObject::tr("Erreur numero invalide doit etre numerique .\n"
                                                                                           "Click Cancel to exit."), QMessageBox::Cancel);

                                                                   break;
                                                               }
                                                           }








                                                           if((verif_code )&&(verif_adrf)&&( verif_nomf)&&(verif_prenf)&&(verif_tele)&&(verif_emailf)){

        QMessageBox msg;
        bool test=f.ajouter();
                        if(test)
                        {



                            ui->tabfourn->setModel(f.afficher());
                 msg.setText("Ajout avec succes");
            }

                else {
                msg.setText("Echec au niveau de fournisseur");
            }
            msg.exec();}

}

void MainWindow::on_supprimer_f_clicked()
{

    fournisseurs f1; f1.setid_f(ui->id_sp->text().toInt());
    bool test=f1.supprimer(f1.getid_f());

     QMessageBox msg;
    if(test)
    {



msg.setText("suppression avec succes");
ui->tabfourn->setModel(f.afficher());
}

else {
msg.setText("Echec au niveau de fournisseur supp");
}
msg.exec();


}

void MainWindow::on_pushButton_5_clicked()
{
    int id_f=ui->idf->text().toInt();
    QString nom_f=ui->nomf->text();
    QString prenom_f=ui->prenomf->text();
    QString adresse_f=ui->adressef->text();
    QString email_f=ui->emailf->text();
    int tel_f=ui->telephonef->text().toInt();
    fournisseurs f(id_f,nom_f,prenom_f,adresse_f,email_f,tel_f);
    QMessageBox msg;
    bool test=f.modifier(id_f,nom_f,prenom_f,adresse_f,email_f,tel_f);
    if(test)
                    {

msg.setText("modification avec succes");
          ui->tabfourn->setModel(f.afficher());

        }

            else {
            msg.setText("Echec au niveau de modification de fournisseur");
        }
    msg.exec();

}



void MainWindow::on_trier_clicked()
{
    ui->tabfourn->setModel(f.tridesc());
}

void MainWindow::on_stackedWidget_currentChanged(int arg)
{
     //ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_musique_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/bejao/Desktop/1.mp3"));
           player->play();
           qDebug() << player ->errorString();
}

void MainWindow::on_sendBtn_clicked()
{

}

void MainWindow::on_pushButton_3_clicked()
{

        QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                        tr("Excel Files (*.xls)"));
        if (fileName.isEmpty())
            return;

        ExportExcelObject obj(fileName, "mydata", ui->tabfourn);

        //colums to export
        obj.addField(0, "id", "char(20)");
        obj.addField(1, "nom", "char(20)");
        obj.addField(2, "prenom", "char(20)");
        obj.addField(3, "adresse", "char(20)");
        obj.addField(4, "email", "char(20)");




        int retVal = obj.export2Excel();
        if( retVal > 0)
        {
            QMessageBox::information(this, tr("Done"),
                                     QString(tr("%1 exporter avec succes!")).arg(retVal)
                                     );
        }


}

void MainWindow::on_Impdos_2_clicked()
{
    fournisseurs c;
             QString text=c.apercu_pdf();
             ui->impc->setText(text);

             QPrinter printer ;
             printer.setPrinterName("imprim");
             QPrintDialog dialog (&printer,this);
             if(dialog.exec()==QDialog::Rejected) return ;
             ui->impc->print(&printer);



}

void MainWindow::on_recherche_textChanged(const QString &arg1)
{
    fournisseurs f;

        if(ui->recherche->text()=="")
        {
            ui->tabfourn->setModel(f.afficher());
        }
        else
        {
           ui->tabfourn->setModel(f.rechercher_fournisseur(ui->recherche->text()));
        }

}

void MainWindow::on_pushButton_4_clicked()
{




 QString p="ben arous";
    QDesktopServices::openUrl(QUrl("http://maps.google.com.sg/maps?q="+p+"&oe=utf-8&rls=org.mozilla:en-US:official&client=firefox-a&um=1&ie=UTF-8&hl=en&sa=N&tab=wl"));
}
