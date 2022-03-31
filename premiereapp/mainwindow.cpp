#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fournisseurs.h"
#include <QDate>
#include <QMessageBox>
#include <QTableWidget>
#include <QTableView>
#include "smtp.h"

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
            msg.exec();

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

void MainWindow::on_rech_clicked()
{
    int id_f=ui->idrech->text().toInt();
    ui->tabfourn->setModel(f.rechercher(id_f));

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
    player->setMedia(QUrl::fromLocalFile("C:/Users/bejao/Desktop/2.mp3"));
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
        obj.addField(0, "Code", "char(20)");
        obj.addField(1, "Prix", "char(20)");
        obj.addField(2, "Quantite", "char(20)");
        obj.addField(3, "Nom", "char(20)");
        obj.addField(4, "Type", "char(20)");




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
