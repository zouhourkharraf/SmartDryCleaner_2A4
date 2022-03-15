#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"employe.h"

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


    void on_bouton_page2_clicked();

    void on_bouton_page1_clicked();


    void on_pushButton_ok_aj_clicked();

    void on_pushButton_ok_md_clicked();

    void on_bouton_valider_clicked();

    void on_bouton_supprimer_clicked();

    void on_bouton_mat_modifier_clicked();

    void on_bouton_modifier_clicked();

// ce slot permet de vider tous les champs de saisie de la page modifier ainsi que les boutons radio et de rendre le champs de saisie mtricule activé s'il ne l'est pas
     void ViderLesChamps_PageModifier();

     void on_bouton_annuler_mdf_clicked();

private:
    Ui::MainWindow *ui;
    Employe E;
};
#endif // MAINWINDOW_H
