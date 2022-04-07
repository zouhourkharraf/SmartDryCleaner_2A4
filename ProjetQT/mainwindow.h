#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "client.h"
#include <QtWidgets>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class QMenu;
class QAction;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:


      void on_buttonBox_Visite_accepted();
      void on_buttonBox_Visite_modif_accepted();
      void on_tab_client_doubleClicked(const QModelIndex &index);
      void on_boutonsupp_clicked();

      void on_trieparNom_clicked();
      void on_trieparDate_clicked();
      void on_trieparId_clicked();
      void on_recherche_textChanged(const QString &arg1);
      void on_pushButton_2_clicked();




private:
    Ui::MainWindow *ui;
     client C;

     //Déclaration des variables pour la prise de photo via Caméra
     QCamera *mCamera;
     QCameraViewfinder * mCameraViewfinder;
     QCameraImageCapture *mCameraImageCapture;
     QVBoxLayout *m;
     QMenu *mOpcionesMenu;
     QAction *mEncenderAction; // ouvrir
     QAction *mApagarAction; //stop
     QAction *mCapturarAction; //capture







};

#endif // MAINWINDOW_H
