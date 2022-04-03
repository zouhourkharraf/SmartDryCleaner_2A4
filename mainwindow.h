#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QStackedWidget>
#include <QMainWindow>
#include<QtGui>
#include<QFileDialog>
#include <QPrintDialog>
#include "QMessageBox"
#include "produit.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pb_ajouter_clicked();


    void on_supprimer_clicked();

    void on_pushButton_modifier_clicked();

    void on_Trier_clicked();



    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_Impdos_2_clicked();

    void on_commandLinkButton_clicked();

    void on_commandLinkButton_2_clicked();




    void on_ok_clicked();


    void on_image_2_clicked();
    void  augmenter();

    void on_augmenter_clicked();
    void showTime();




    void on_recherche_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    Produit Etmp ;
};



#endif // MAINWINDOW_H
