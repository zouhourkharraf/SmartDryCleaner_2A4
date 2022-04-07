#include "mainwindow.h"
#include <iostream>
#include "ui_mainwindow.h"
#include "client.h"
#include "statistique.h"
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QMetaObject>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QtPrintSupport>
#include <QMessageBox>
#include <QIntValidator>
#include <QStandardItem>
#include <QTabWidget>
#include <QPaintEvent>
#include <QCameraImageCapture>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QVBoxLayout>
#include <QCameraInfo>
#include <QFileDialog>
#include <QtWidgets/QApplication>
#include <QtWidgets>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "QrCode.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    //Controle de saisie
    ui->le_idclient->setValidator(new QIntValidator(0, 99999, this));
    ui->le_telclient->setValidator(new QIntValidator(0, 99999, this));
    ui->m_idclient->setValidator(new QIntValidator(0, 999999, this));
    ui->m_telclient->setValidator(new QIntValidator(0, 999999, this));
    ui->le_nbserviceclient->setValidator(new QIntValidator(0, 999, this));
    ui->m_nbserviceclient->setValidator(new QIntValidator(0, 999, this));
    //ui->s_idclient->setValidator(new QIntValidator(0, 99999, this));
        ui->tab_client->setModel(C.afficher_client());
    //Prise de la photo via la caméra
        mCamera = new QCamera(this);
        mCameraViewfinder = new QCameraViewfinder(this);
        mCameraImageCapture = new QCameraImageCapture(mCamera, this);


        m = new QVBoxLayout;
        mOpcionesMenu =new QMenu("Opcines", this);
        mEncenderAction = new QAction("Ouvrir camera",this);
        mApagarAction = new QAction("Prendre photo",this);
        mCapturarAction =new QAction("Enregistrer photo",this);


        mOpcionesMenu->addActions({ mEncenderAction,mApagarAction, mCapturarAction});
        ui->pushButton_9->setMenu(mOpcionesMenu);
         mCamera->setViewfinder(mCameraViewfinder);

      m->addWidget(mCameraViewfinder);
      m->setMargin(0);
    ui->scrollArea->setLayout(m);
    connect(mEncenderAction,&QAction:: triggered,[&]()
    {
    mCamera->start();
    });
    connect(mApagarAction,&QAction::triggered, [&]()
    {
    mCamera->stop();
    });
      connect (mCapturarAction,&QAction::triggered, [&]()
      {
          auto filename = QFileDialog:: getSaveFileName(this,"capturar","/",
                                                        "imagen (*.jpg;*.jpeg)");
          if(filename.isEmpty()){
              return;
      }
    mCameraImageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
    QImageEncoderSettings imageEncoderSettings;
    imageEncoderSettings.setCodec("image/jpeg");
    imageEncoderSettings.setResolution(1600,1200);
      mCameraImageCapture->setEncodingSettings(imageEncoderSettings);
      mCamera->setCaptureMode(QCamera::CaptureStillImage);
      mCamera->start();
      mCamera->searchAndLock();
      mCameraImageCapture->capture(filename);
      mCamera->unlock();

      });

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_buttonBox_Visite_accepted()
{
    std::cout<< "rdhrher";

    int Id = ui->le_idclient->text().toInt();
    QString Nom = ui->le_nomclient->text();
    QString Prenom = ui->le_prenomclient->text();
    QString Adresse = ui->le_adresseclient->text();
    int Tel = ui->le_telclient->text().toInt();
    int Nb_service = ui->le_nbserviceclient->text().toInt();

    QDate Date = ui->dateclient->date();

    client C(Id,Nom,Prenom,Adresse,Tel,Nb_service,Date);

    bool test = C.ajouter_client();
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Ajout effectuer\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_client->setModel(C.afficher_client());
        ui->le_idclient->clear();
        ui->le_nomclient->clear();
        ui->le_prenomclient->clear();
        ui->le_adresseclient->clear();
        ui->le_telclient->clear();
        ui->le_nbserviceclient->clear();
        ui->dateclient->clear();




    }else{
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                 QObject::tr("Echec de l'ajout\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel); }
}


void MainWindow::on_buttonBox_Visite_modif_accepted()
{

    int Id = ui->m_idclient->text().toInt();
    QString Nom = ui->m_nomclient->text();
    QString Prenom = ui->m_prenomclient->text();
    QString Adresse = ui->m_adresseclient->text();
    int Tel = ui->m_telclient->text().toInt();
    int Nb_service = ui->m_nbserviceclient->text().toInt();

    QDate Date = ui->m_dateclient->date();

    client C(Id,Nom,Prenom,Adresse,Tel,Nb_service,Date);
     bool test=C.modifier_client(Id,Nom,Prenom,Adresse,Tel,Nb_service,Date);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Modifier les données d'un client !"),
                                 QObject::tr(" Données du client modifiées ! \n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_client->setModel(C.afficher_client());
        ui->m_idclient->clear();
        ui->m_nomclient->clear();
        ui->m_prenomclient->clear();
        ui->m_adresseclient->clear();
        ui->m_telclient->clear();
        ui->m_nbserviceclient->clear();
        ui->m_dateclient->clear();
    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Modifier les données d'un client :"),
                              QObject::tr("Erreur la modification n'est pas effectuée!.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }
}




void MainWindow::on_tab_client_doubleClicked(const QModelIndex &index)
{

       //get and load the data
      int idc = index.data().toInt();
       client c;
       QSqlQueryModel* sqlQueryModel = c.recuperer(idc);
          QString ID_CLIENT = sqlQueryModel->record(0).value("ID_CLIENT").toString();
           QString NOM_CLIENT = sqlQueryModel->record(0).value("NOM_CLIENT").toString();
           QString PRENOM_CLIENT= sqlQueryModel->record(0).value("PRENOM_CLIENT").toString();
           QString ADRESSE_CLIENT= sqlQueryModel->record(0).value("ADRESSE_CLIENT").toString();
           QString Tel_CLIENT= sqlQueryModel->record(0).value("TEL_CLIENT").toString();
           QString  NB_SERVICE_UTILISE= sqlQueryModel->record(0).value("NB_SERVICE_UTILISE").toString();
           //QString  DATE_ENREGISTREMENT= sqlQueryModel->record(0).value(" DATE_ENREGISTREMENT").toString();


  ui->m_idclient->setText(ID_CLIENT);
   ui->m_nomclient->setText(NOM_CLIENT);
   ui->m_prenomclient->setText(PRENOM_CLIENT);
   ui->m_adresseclient->setText(ADRESSE_CLIENT);
   ui->m_telclient->setText(Tel_CLIENT);
   ui->m_nbserviceclient->setText(NB_SERVICE_UTILISE);
  // ui->m_dateclient->setText(DATE_ENREGISTREMENT);



        //ui->tabWidget_2->setCurrentIndex(2);


}




void MainWindow::on_boutonsupp_clicked()
{

        client c1;
        c1.setId_client(ui->m_idclient->text().toUInt());
        bool test=c1.supprimer_client(c1.getId_client());
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("Suppression effectuer\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tab_client->setModel(c1.afficher_client());
            ui->m_idclient->clear();
            ui->m_nomclient->clear();
            ui->m_prenomclient->clear();
            ui->m_adresseclient->clear();
            ui->m_telclient->clear();
            ui->m_nbserviceclient->clear();
            ui->m_dateclient->clear();
        }else{
            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                     QObject::tr("Suppresion non effectuer\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
    }

}




void MainWindow::on_trieparNom_clicked()
{
    QMessageBox msgBox ;
    client c;
    QSqlQueryModel * model = c.trier_clientNom();
                    ui->tab_client->setModel(model);
                    ui->tab_client->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}

void MainWindow::on_trieparDate_clicked()
{
    QMessageBox msgBox ;
    client c;
        QSqlQueryModel * model= c.trier_clientDate();
                    ui->tab_client->setModel(model);
                    ui->tab_client->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}

void MainWindow::on_trieparId_clicked()
{
    QMessageBox msgBox ;
    client c;
        QSqlQueryModel * model= c.trier_clientId();
                    ui->tab_client->setModel(model);
                    ui->tab_client->show();
                    msgBox.setText("Tri avec succés.");
                    msgBox.exec();
}


void MainWindow::on_recherche_textChanged(const QString &arg1)
{
    client c;
        if(ui->recherche->text() == "")
            {
                ui->tab_client->setModel(c.afficher_client());
            }
            else
            {
                 ui->tab_client->setModel(c.rechercher_client(ui->recherche->text()));
            }
}


void MainWindow::on_pushButton_2_clicked()
{
    statistique s;
    s.exec();
}




