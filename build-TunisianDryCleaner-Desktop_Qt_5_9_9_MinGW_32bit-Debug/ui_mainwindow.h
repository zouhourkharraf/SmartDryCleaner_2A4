/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QStackedWidget *stackedWidget;
    QWidget *page_ajouter;
    QLabel *label;
    QLabel *label_nom;
    QLabel *label_adresse;
    QLabel *label_prenom;
    QLabel *label_tel;
    QLabel *label_fonc;
    QLabel *label_salaire;
    QLabel *label_ev;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_adresse;
    QLineEdit *lineEdit_tel;
    QLineEdit *lineEdit_salaire;
    QRadioButton *radio1_ev;
    QRadioButton *radio2_ev;
    QRadioButton *radio3_ev;
    QPushButton *bouton_valider;
    QPushButton *bouton_annuler;
    QComboBox *comboBox_ajouter;
    QPushButton *bouton_page2;
    QWidget *page_modifier;
    QLabel *label_2;
    QLabel *label_nom_2;
    QLabel *label_prenom_2;
    QLabel *label_tel_2;
    QLabel *label_adresse_2;
    QLabel *label_salaire_2;
    QLabel *label_fonc_2;
    QLabel *label_ev_2;
    QLineEdit *lineEdit_nom_2;
    QLineEdit *lineEdit_prenom_2;
    QLineEdit *lineEdit_adresse_2;
    QLineEdit *lineEdit_tel_2;
    QLineEdit *lineEdit_salaire_2;
    QRadioButton *radio1_ev_2;
    QRadioButton *radio2_ev_2;
    QRadioButton *radio3_ev_2;
    QPushButton *bouton_modifier;
    QPushButton *bouton_annuler_mdf;
    QComboBox *comboBox_modifier;
    QLabel *label_3;
    QLabel *label_nom_3;
    QPushButton *bouton_supprimer;
    QPushButton *bouton_page1;
    QLabel *label_nom_4;
    QLineEdit *lineEdit_mat_modif;
    QPushButton *bouton_mat_modifier;
    QComboBox *comboBox_supression;
    QTableView *tab_employes;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 801, 571));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        stackedWidget = new QStackedWidget(tab);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 20, 381, 501));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        page_ajouter = new QWidget();
        page_ajouter->setObjectName(QStringLiteral("page_ajouter"));
        label = new QLabel(page_ajouter);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 171, 41));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setMargin(0);
        label_nom = new QLabel(page_ajouter);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(20, 65, 56, 16));
        label_nom->setFont(font);
        label_adresse = new QLabel(page_ajouter);
        label_adresse->setObjectName(QStringLiteral("label_adresse"));
        label_adresse->setGeometry(QRect(20, 135, 71, 16));
        label_adresse->setFont(font);
        label_prenom = new QLabel(page_ajouter);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));
        label_prenom->setGeometry(QRect(20, 100, 71, 16));
        label_prenom->setFont(font);
        label_tel = new QLabel(page_ajouter);
        label_tel->setObjectName(QStringLiteral("label_tel"));
        label_tel->setGeometry(QRect(20, 170, 101, 16));
        label_tel->setFont(font);
        label_fonc = new QLabel(page_ajouter);
        label_fonc->setObjectName(QStringLiteral("label_fonc"));
        label_fonc->setGeometry(QRect(20, 240, 81, 16));
        label_fonc->setFont(font);
        label_salaire = new QLabel(page_ajouter);
        label_salaire->setObjectName(QStringLiteral("label_salaire"));
        label_salaire->setGeometry(QRect(20, 205, 81, 16));
        label_salaire->setFont(font);
        label_ev = new QLabel(page_ajouter);
        label_ev->setObjectName(QStringLiteral("label_ev"));
        label_ev->setGeometry(QRect(20, 275, 201, 16));
        label_ev->setFont(font);
        lineEdit_nom = new QLineEdit(page_ajouter);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(115, 60, 230, 22));
        lineEdit_prenom = new QLineEdit(page_ajouter);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(115, 95, 230, 22));
        lineEdit_adresse = new QLineEdit(page_ajouter);
        lineEdit_adresse->setObjectName(QStringLiteral("lineEdit_adresse"));
        lineEdit_adresse->setGeometry(QRect(115, 130, 230, 22));
        lineEdit_tel = new QLineEdit(page_ajouter);
        lineEdit_tel->setObjectName(QStringLiteral("lineEdit_tel"));
        lineEdit_tel->setGeometry(QRect(115, 165, 230, 22));
        lineEdit_salaire = new QLineEdit(page_ajouter);
        lineEdit_salaire->setObjectName(QStringLiteral("lineEdit_salaire"));
        lineEdit_salaire->setGeometry(QRect(115, 200, 230, 22));
        radio1_ev = new QRadioButton(page_ajouter);
        radio1_ev->setObjectName(QStringLiteral("radio1_ev"));
        radio1_ev->setGeometry(QRect(210, 300, 121, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        radio1_ev->setFont(font1);
        radio2_ev = new QRadioButton(page_ajouter);
        radio2_ev->setObjectName(QStringLiteral("radio2_ev"));
        radio2_ev->setGeometry(QRect(210, 330, 97, 20));
        radio2_ev->setFont(font1);
        radio3_ev = new QRadioButton(page_ajouter);
        radio3_ev->setObjectName(QStringLiteral("radio3_ev"));
        radio3_ev->setGeometry(QRect(210, 360, 97, 20));
        radio3_ev->setFont(font1);
        bouton_valider = new QPushButton(page_ajouter);
        bouton_valider->setObjectName(QStringLiteral("bouton_valider"));
        bouton_valider->setGeometry(QRect(30, 400, 93, 28));
        bouton_annuler = new QPushButton(page_ajouter);
        bouton_annuler->setObjectName(QStringLiteral("bouton_annuler"));
        bouton_annuler->setGeometry(QRect(145, 400, 93, 28));
        comboBox_ajouter = new QComboBox(page_ajouter);
        comboBox_ajouter->setObjectName(QStringLiteral("comboBox_ajouter"));
        comboBox_ajouter->setGeometry(QRect(115, 235, 230, 22));
        bouton_page2 = new QPushButton(page_ajouter);
        bouton_page2->setObjectName(QStringLiteral("bouton_page2"));
        bouton_page2->setGeometry(QRect(260, 0, 75, 25));
        stackedWidget->addWidget(page_ajouter);
        page_modifier = new QWidget();
        page_modifier->setObjectName(QStringLiteral("page_modifier"));
        label_2 = new QLabel(page_modifier);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, -10, 341, 41));
        label_2->setFont(font);
        label_2->setMargin(0);
        label_nom_2 = new QLabel(page_modifier);
        label_nom_2->setObjectName(QStringLiteral("label_nom_2"));
        label_nom_2->setGeometry(QRect(20, 65, 56, 16));
        label_nom_2->setFont(font);
        label_prenom_2 = new QLabel(page_modifier);
        label_prenom_2->setObjectName(QStringLiteral("label_prenom_2"));
        label_prenom_2->setGeometry(QRect(20, 100, 71, 16));
        label_prenom_2->setFont(font);
        label_tel_2 = new QLabel(page_modifier);
        label_tel_2->setObjectName(QStringLiteral("label_tel_2"));
        label_tel_2->setGeometry(QRect(20, 170, 101, 16));
        label_tel_2->setFont(font);
        label_adresse_2 = new QLabel(page_modifier);
        label_adresse_2->setObjectName(QStringLiteral("label_adresse_2"));
        label_adresse_2->setGeometry(QRect(20, 135, 71, 16));
        label_adresse_2->setFont(font);
        label_salaire_2 = new QLabel(page_modifier);
        label_salaire_2->setObjectName(QStringLiteral("label_salaire_2"));
        label_salaire_2->setGeometry(QRect(20, 205, 81, 16));
        label_salaire_2->setFont(font);
        label_fonc_2 = new QLabel(page_modifier);
        label_fonc_2->setObjectName(QStringLiteral("label_fonc_2"));
        label_fonc_2->setGeometry(QRect(20, 240, 81, 16));
        label_fonc_2->setFont(font);
        label_ev_2 = new QLabel(page_modifier);
        label_ev_2->setObjectName(QStringLiteral("label_ev_2"));
        label_ev_2->setGeometry(QRect(20, 275, 201, 16));
        label_ev_2->setFont(font);
        lineEdit_nom_2 = new QLineEdit(page_modifier);
        lineEdit_nom_2->setObjectName(QStringLiteral("lineEdit_nom_2"));
        lineEdit_nom_2->setGeometry(QRect(115, 60, 230, 22));
        lineEdit_prenom_2 = new QLineEdit(page_modifier);
        lineEdit_prenom_2->setObjectName(QStringLiteral("lineEdit_prenom_2"));
        lineEdit_prenom_2->setGeometry(QRect(115, 95, 230, 22));
        lineEdit_adresse_2 = new QLineEdit(page_modifier);
        lineEdit_adresse_2->setObjectName(QStringLiteral("lineEdit_adresse_2"));
        lineEdit_adresse_2->setGeometry(QRect(115, 130, 230, 22));
        lineEdit_tel_2 = new QLineEdit(page_modifier);
        lineEdit_tel_2->setObjectName(QStringLiteral("lineEdit_tel_2"));
        lineEdit_tel_2->setGeometry(QRect(115, 165, 230, 22));
        lineEdit_salaire_2 = new QLineEdit(page_modifier);
        lineEdit_salaire_2->setObjectName(QStringLiteral("lineEdit_salaire_2"));
        lineEdit_salaire_2->setGeometry(QRect(115, 200, 230, 22));
        radio1_ev_2 = new QRadioButton(page_modifier);
        radio1_ev_2->setObjectName(QStringLiteral("radio1_ev_2"));
        radio1_ev_2->setGeometry(QRect(230, 275, 121, 20));
        radio1_ev_2->setFont(font1);
        radio2_ev_2 = new QRadioButton(page_modifier);
        radio2_ev_2->setObjectName(QStringLiteral("radio2_ev_2"));
        radio2_ev_2->setGeometry(QRect(230, 305, 97, 20));
        radio2_ev_2->setFont(font1);
        radio3_ev_2 = new QRadioButton(page_modifier);
        radio3_ev_2->setObjectName(QStringLiteral("radio3_ev_2"));
        radio3_ev_2->setGeometry(QRect(230, 340, 97, 20));
        radio3_ev_2->setFont(font1);
        bouton_modifier = new QPushButton(page_modifier);
        bouton_modifier->setObjectName(QStringLiteral("bouton_modifier"));
        bouton_modifier->setGeometry(QRect(70, 370, 93, 28));
        bouton_annuler_mdf = new QPushButton(page_modifier);
        bouton_annuler_mdf->setObjectName(QStringLiteral("bouton_annuler_mdf"));
        bouton_annuler_mdf->setGeometry(QRect(200, 370, 93, 28));
        comboBox_modifier = new QComboBox(page_modifier);
        comboBox_modifier->setObjectName(QStringLiteral("comboBox_modifier"));
        comboBox_modifier->setGeometry(QRect(115, 235, 200, 22));
        label_3 = new QLabel(page_modifier);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 395, 191, 41));
        label_3->setFont(font);
        label_3->setMargin(0);
        label_nom_3 = new QLabel(page_modifier);
        label_nom_3->setObjectName(QStringLiteral("label_nom_3"));
        label_nom_3->setGeometry(QRect(20, 435, 91, 21));
        label_nom_3->setFont(font);
        bouton_supprimer = new QPushButton(page_modifier);
        bouton_supprimer->setObjectName(QStringLiteral("bouton_supprimer"));
        bouton_supprimer->setGeometry(QRect(230, 435, 93, 26));
        bouton_page1 = new QPushButton(page_modifier);
        bouton_page1->setObjectName(QStringLiteral("bouton_page1"));
        bouton_page1->setGeometry(QRect(260, 0, 75, 25));
        label_nom_4 = new QLabel(page_modifier);
        label_nom_4->setObjectName(QStringLiteral("label_nom_4"));
        label_nom_4->setGeometry(QRect(20, 30, 91, 16));
        label_nom_4->setFont(font);
        lineEdit_mat_modif = new QLineEdit(page_modifier);
        lineEdit_mat_modif->setObjectName(QStringLiteral("lineEdit_mat_modif"));
        lineEdit_mat_modif->setGeometry(QRect(115, 30, 100, 22));
        bouton_mat_modifier = new QPushButton(page_modifier);
        bouton_mat_modifier->setObjectName(QStringLiteral("bouton_mat_modifier"));
        bouton_mat_modifier->setGeometry(QRect(230, 30, 93, 22));
        comboBox_supression = new QComboBox(page_modifier);
        comboBox_supression->setObjectName(QStringLiteral("comboBox_supression"));
        comboBox_supression->setGeometry(QRect(115, 435, 100, 25));
        stackedWidget->addWidget(page_modifier);
        tab_employes = new QTableView(tab);
        tab_employes->setObjectName(QStringLiteral("tab_employes"));
        tab_employes->setGeometry(QRect(420, 20, 361, 301));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Tunisian Dry Cleaner", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Ajouter un employ\303\251 :", Q_NULLPTR));
        label_nom->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        label_adresse->setText(QApplication::translate("MainWindow", "Adresse :", Q_NULLPTR));
        label_prenom->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", Q_NULLPTR));
        label_tel->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone :", Q_NULLPTR));
        label_fonc->setText(QApplication::translate("MainWindow", "Fonction :", Q_NULLPTR));
        label_salaire->setText(QApplication::translate("MainWindow", "Salaire :", Q_NULLPTR));
        label_ev->setText(QApplication::translate("MainWindow", "\303\211valuation de rendement:", Q_NULLPTR));
        radio1_ev->setText(QApplication::translate("MainWindow", "Satisfaisante", Q_NULLPTR));
        radio2_ev->setText(QApplication::translate("MainWindow", "Bonne", Q_NULLPTR));
        radio3_ev->setText(QApplication::translate("MainWindow", "Exellente", Q_NULLPTR));
        bouton_valider->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        bouton_annuler->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        bouton_page2->setText(QApplication::translate("MainWindow", "Suivant", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Modifier un employ\303\251 :", Q_NULLPTR));
        label_nom_2->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        label_prenom_2->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", Q_NULLPTR));
        label_tel_2->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone :", Q_NULLPTR));
        label_adresse_2->setText(QApplication::translate("MainWindow", "Adresse :", Q_NULLPTR));
        label_salaire_2->setText(QApplication::translate("MainWindow", "Salaire :", Q_NULLPTR));
        label_fonc_2->setText(QApplication::translate("MainWindow", "Fonction :", Q_NULLPTR));
        label_ev_2->setText(QApplication::translate("MainWindow", "\303\211valuation de rendement:", Q_NULLPTR));
        radio1_ev_2->setText(QApplication::translate("MainWindow", "Satisfaisante", Q_NULLPTR));
        radio2_ev_2->setText(QApplication::translate("MainWindow", "Bonne", Q_NULLPTR));
        radio3_ev_2->setText(QApplication::translate("MainWindow", "Exellente", Q_NULLPTR));
        bouton_modifier->setText(QApplication::translate("MainWindow", "Ok", Q_NULLPTR));
        bouton_annuler_mdf->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Supprimer un employ\303\251 :", Q_NULLPTR));
        label_nom_3->setText(QApplication::translate("MainWindow", "Matricule :", Q_NULLPTR));
        bouton_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        bouton_page1->setText(QApplication::translate("MainWindow", "Pr\303\251c\303\251dent", Q_NULLPTR));
        label_nom_4->setText(QApplication::translate("MainWindow", "Matricule :", Q_NULLPTR));
        bouton_mat_modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Gestion des employ\303\251s", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Gestion des clients", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Gestion des services", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Gestion des fournisseurs", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Gestion des produits", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
