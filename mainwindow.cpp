#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "produit.h"
#include<QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include<QtGui>
#include<QTimer>
#include<QDateTime>

QTimer *timer1 = new QTimer();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(Etmp.afficher());
    ui->id->setValidator(new QIntValidator(0, 99999999, this));
    ui->qte->setValidator(new QIntValidator(0, 99999999, this));
    ui->prix->setValidator(new QIntValidator(0, 99999999, this));
    ui->priix->setValidator(new QIntValidator(0, 99999999, this));
    ui->ident->setValidator(new QIntValidator(0, 99999999, this));
    ui->qte2->setValidator(new QIntValidator(0, 99999999, this));

    connect (timer1 ,
             SIGNAL(timeout()),
             this ,
             SLOT(augmenter())
                );
   QTimer *timer = new QTimer(this);
   connect (
              timer ,
               SIGNAL(timeout()),
               this,
              SLOT (showTime())
               );
   timer->start();
   QDateTime dateTime=QDateTime:: currentDateTime();
   QString datetimetext=dateTime.toString();
   ui->DateTime->setText(datetimetext);

}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pb_ajouter_clicked()
{
    if ((ui->id->text()=="") || ( ui->qte->text()=="" ))
    {
        QMessageBox::information(this,"Erreur"," aaa ");
    }
    else {


int id_prod =ui->id->text().toInt();
int qte=ui->qte->text().toInt();
int prix_achat=ui->prix->text().toInt();
int id_f=ui->idf->text().toInt();
QString libelle_prod=ui->libelle->text();
QString classification =ui->classification->text();
QDate date_entree_enstock =ui->date->date();
Produit P (id_prod , qte , prix_achat , id_f,   libelle_prod , classification ,date_entree_enstock);
bool test= P.ajouter();
if (test)
{
    ui->tableView->setModel(Etmp.afficher());
    QMessageBox:: information ( nullptr , QObject :: tr("OK"),
                                QObject:: tr("Ajouter effectué\n"
                                             "Click Cancel to exit."), QMessageBox :: Cancel ) ;
}
else
    QMessageBox:: critical ( nullptr , QObject :: tr(" Not OK"),
                                QObject:: tr("Ajouter non effectué\n"
                                             "Click Cancel to exit."), QMessageBox :: Cancel ) ;
}
}

void MainWindow::on_supprimer_clicked()
{
    int id_prod =ui->ident->text().toInt();
    bool test= Etmp.supprimer(id_prod);
    if (test)
    {
        ui->tableView->setModel(Etmp.afficher());
        QMessageBox:: information ( nullptr , QObject :: tr("OK"),
                                    QObject:: tr("Suppression effectué\n"
                                                 "Click Cancel to exit."), QMessageBox :: Cancel ) ;
    }
    else
        QMessageBox:: critical ( nullptr , QObject :: tr(" Not OK"),
                                    QObject:: tr("Suppression non effectué\n"
                                                 "Click Cancel to exit."), QMessageBox :: Cancel ) ;
    }


void MainWindow::on_pushButton_modifier_clicked()
{
    int id_prod =ui->ident->text().toInt();
    int qte=ui->qte2->text().toInt();
    int prix_achat=ui->priix->text().toInt();
    int id_f=ui->idf2->text().toInt();
    QString libelle_prod=ui->lib->text();
    QString classification =ui->cls->text();
    QDate date_entree_enstock =ui->date2->date();

    bool test= Etmp.modifier(  id_prod, prix_achat ,  date_entree_enstock  , qte, classification ,  libelle_prod, id_f);
    if (test)
    {
        ui->tableView->setModel(Etmp.afficher());
        QMessageBox:: information ( nullptr , QObject :: tr("OK"),
                                    QObject:: tr("modifier effectué\n"
                                                 "Click Cancel to exit."), QMessageBox :: Cancel ) ;
    }
    else
        QMessageBox:: critical ( nullptr , QObject :: tr(" Not OK"),
                                    QObject:: tr("modifier non effectué\n"
                                                 "Click Cancel to exit."), QMessageBox :: Cancel ) ;

}

void MainWindow::on_Trier_clicked()
{
     ui->tableView->setModel(Etmp.tridesc());
}



void MainWindow::on_pushButton_clicked()
{
    ui->ident->clear();
    ui->qte2->clear();
    ui->priix->clear();
    ui->lib->clear();
    ui->cls->clear();
    ui->idf2->clear();
    ui->date2->clear();



}

void MainWindow::on_pushButton_2_clicked()
{
    ui->id->clear();
    ui->qte->clear();
    ui->prix->clear();
    ui->libelle->clear();
    ui->classification->clear();
    ui->idf->clear();
    ui->date->clear();

}

void MainWindow::on_Impdos_2_clicked()
{
    Produit c;
             QString text=c.apercu_pdf();
             ui->impc->setText(text);
             QPrinter printer ;
             printer.setPrinterName("imprim");
             QPrintDialog dialog (&printer,this);
             if(dialog.exec()==QDialog::Rejected) return ;
             ui->impc->print(&printer);

}







void MainWindow::on_commandLinkButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_commandLinkButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}







void MainWindow::on_ok_clicked()
{
    if (ui->ident->text()!="")

    {
        Etmp.setid_prod(ui->ident->text().toInt());
        QSqlQueryModel * Model = Etmp.recuperer_produit(Etmp.getid_prod());
        if (Model->rowCount()!=0 )
        {
            QString prix_string = Model->data(Model->index(0,2)).toString();
            QString qte_string = Model->data(Model->index(0,4)).toString();
            QString ifd_string = Model->data(Model->index(0,6)).toString();

            ui->qte2->setText(qte_string);
            ui->priix->setText(prix_string);
            ui->idf2->setText(ifd_string);
            ui->lib->setText(Model->data(Model->index(0,1)).toString());
            ui->cls->setText(Model->data(Model->index(0,5)).toString());
            ui->date2->setDate(Model->data(Model->index(0,3)).toDate());


        }
         else
        {
            QMessageBox::information(this,"Erreur","l'id n'existe pas");
        }
    }

}



void MainWindow::on_image_2_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("choose"),"",tr("Image (*.png *.jpg *.mp4)"));
        if(  QString::compare(filename,  QString())!=0) {
            QImage image;
            bool valid=image.load(filename);
            if(valid){
        image=image.scaledToHeight(ui->image1->height(),Qt::FastTransformation);
        image=image.scaledToHeight(ui->image1->height(),Qt::FastTransformation);
                ui->image1->setPixmap(QPixmap::fromImage(image));
            }
        }

}
void MainWindow:: augmenter()
{
    int aux ;
    aux = ui->progressBar->value();
    aux++;
    ui->progressBar->setValue(aux);
}

void MainWindow::on_augmenter_clicked()
{
    if (timer1->isActive())
    {
      timer1->stop();
      ui->augmenter->setText("augmenter");
    } else
    {
    timer1->start(1000);
    ui->augmenter->setText("pause");
    }
}
void MainWindow:: showTime(){
    QTime time=QTime ::currentTime();

    QString time_text= time.toString("hh : mm : ss");
    if ((time.second() %2) == 0)
    {
        time_text[3] = ' ';
        time_text[8] = ' ';
    }
    ui->Digtal_clock->setText(time_text);
}





void MainWindow::on_recherche_textChanged(const QString &arg1)
{
  Produit p;

        if(ui->recherche->text()=="")
        {
            ui->tableView->setModel(p.afficher());
        }
        else
        {
           ui->tableView->setModel(p.rechercher_produit(ui->recherche->text()));

    }
}
