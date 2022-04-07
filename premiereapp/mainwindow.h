#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMediaPlayer>
#include <QMainWindow>
#include "fournisseurs.h"
#include "exportexcelobjec.h"
#include<QFileDialog>



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
    void on_ajouter_f_clicked();

    void on_supprimer_f_clicked();

    void on_pushButton_5_clicked();


    void on_trier_clicked();

    void on_stackedWidget_currentChanged(int arg1);

    void on_pushButton_clicked();

    void on_musique_clicked();
    void sendMail();
    void mailSent(QString);


    void on_sendBtn_clicked();

    void on_pushButton_3_clicked();

    void on_Impdos_2_clicked();

    void on_recherche_textChanged(const QString &arg1);

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    fournisseurs f;
    QMediaPlayer* player;
};
#endif // MAINWINDOW_H
