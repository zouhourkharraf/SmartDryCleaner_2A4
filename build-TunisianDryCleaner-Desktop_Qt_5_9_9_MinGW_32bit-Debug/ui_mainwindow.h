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
#include <QtWidgets/QTextEdit>
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
    QPushButton *boutonpg_2_vers_3;
    QWidget *page_fonct_avance;
    QLabel *label_4;
    QTableView *tab_employes_tri;
    QLabel *label_5;
    QRadioButton *radio_tri1;
    QRadioButton *radio_tri2;
    QRadioButton *radio_tri3;
    QLabel *label_6;
    QRadioButton *radio_rech2;
    QRadioButton *radio_rech3;
    QRadioButton *radio_rech1;
    QPushButton *boutonpg_3_vers_2;
    QLineEdit *lineEdit_recherche;
    QTableView *tab_recherche;
    QPushButton *boutonpg_3_vers_4;
    QWidget *page_gestion_profils;
    QPushButton *boutonpg_4_vers_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_nom_5;
    QComboBox *comboBox_matricule_profils;
    QPushButton *bouton_ok_matricule_profil;
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_mp_profil;
    QLabel *label_nom_6;
    QLabel *label_nom_7;
    QPushButton *bouton_ajouter_profil;
    QLabel *label_13;
    QLabel *label_nom_8;
    QLabel *label_nom_9;
    QLineEdit *lineEdit_login_modifier;
    QPushButton *bouton_ok_login_modifier;
    QLineEdit *lineEdit_mp_modifier;
    QPushButton *bouton_modifier_profil;
    QLabel *label_14;
    QComboBox *comboBox_supression_profils;
    QPushButton *bouton_supprimer_profil;
    QTableView *tab_employes;
    QLabel *label_7;
    QLabel *label_employe_connecte;
    QPushButton *boutonConnexion;
    QTextEdit *listeMessages;
    QPushButton *boutonEnvoyer;
    QLineEdit *message;
    QLineEdit *pseudo;
    QLabel *label_fonc_3;
    QPushButton *bouton_deconnecter;
    QLabel *label_15;
    QLabel *label_nom_10;
    QComboBox *comboBox_mat_bulletin_depaie;
    QPushButton *bouton_generer_bp;
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
        MainWindow->resize(900, 727);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, -10, 900, 721));
        tabWidget->setStyleSheet(QLatin1String("/*QTabWidget{\n"
"\n"
"	background-color: rgb(255, 0, 0);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton{\n"
"\n"
"}\n"
"\n"
"background-color: rgb(255, 0, 0);*/\n"
"\n"
"/*Copyright (c) DevSec Studio. All rights reserved.\n"
"\n"
"\n"
"\n"
"MIT License\n"
"\n"
"\n"
"\n"
"Permission is hereby granted, free of charge, to any person obtaining a copy\n"
"\n"
"of this software and associated documentation files (the \"Software\"), to deal\n"
"\n"
"in the Software without restriction, including without limitation the rights\n"
"\n"
"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n"
"\n"
"copies of the Software, and to permit persons to whom the Software is\n"
"\n"
"furnished to do so, subject to the following conditions:\n"
"\n"
"\n"
"\n"
"The above copyright notice and this permission notice shall be included in all\n"
"\n"
"copies or substantial portions of the Software.\n"
"\n"
"\n"
"\n"
"THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
"\n"
"IMPLIED, INCLUDING "
                        "BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
"\n"
"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n"
"\n"
"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"
"\n"
"LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
"\n"
"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n"
"\n"
"SOFTWARE.\n"
"\n"
"*/\n"
"\n"
"\n"
"\n"
"/*-----QWidget-----*/\n"
"\n"
"QWidget\n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(102, 115, 140, 255),stop:1 rgba(56, 63, 77, 255));\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"\n"
"QLabel\n"
"\n"
"{\n"
"\n"
"	background-color: transparent;\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QLabel::disabled\n"
"\n"
"{\n"
"\n"
"	background-color: transparent;\n"
"\n"
"	colo"
                        "r: #898988;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QMenuBar-----*/\n"
"\n"
"/*QMenuBar\n"
"\n"
"{\n"
"\n"
"	background-color: #484c58;\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QMenuBar::disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	color: #898988;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QMenuBar::item\n"
"\n"
"{\n"
"\n"
"    background-color: transparent;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QMenuBar::item:selected\n"
"\n"
"{\n"
"\n"
"    background-color: #c4c5c3;\n"
"\n"
"	color: #000000;\n"
"\n"
"    border: 1px solid #000000;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QMenuBar::item:pressed\n"
"\n"
"{\n"
"\n"
"    background-color: #979796;\n"
"\n"
"    border: 1px solid #000;\n"
"\n"
"    margin-bottom: -1px;\n"
"\n"
"    padding-bottom: 1px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"*/\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*----"
                        "-QMenu-----*/\n"
"\n"
"QMenu\n"
"\n"
"{\n"
"\n"
"    background-color: #c4c5c3;\n"
"\n"
"    border: 1px solid;\n"
"\n"
"    color: #000000;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QMenu::separator\n"
"\n"
"{\n"
"\n"
"    height: 1px;\n"
"\n"
"    background-color: #363942;\n"
"\n"
"    color: #ffffff;\n"
"\n"
"    padding-left: 4px;\n"
"\n"
"    margin-left: 10px;\n"
"\n"
"    margin-right: 5px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QMenu::item\n"
"\n"
"{\n"
"\n"
"    min-width : 150px;\n"
"\n"
"    padding: 3px 20px 3px 20px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QMenu::item:selected\n"
"\n"
"{\n"
"\n"
"    background-color: #363942;\n"
"\n"
"    color: #ffffff;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QMenu::item:disabled\n"
"\n"
"{\n"
"\n"
"    color: #898988;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QToolTip-----*/\n"
"\n"
"QToolTip\n"
"\n"
"{\n"
"\n"
"	background-color: #bbbcba;\n"
"\n"
"	color: #000000;\n"
"\n"
"	border-color:"
                        " #051a39;\n"
"\n"
"	border : 1px solid #000000;\n"
"\n"
"	border-radius: 2px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"\n"
"QPushButton\n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:repeat, x1:0.486, y1:0, x2:0.505, y2:1, stop:0.00480769 rgba(170, 0, 0, 255),stop:1 rgba(122, 0, 0, 255));\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"	border-style: solid;\n"
"\n"
"	border-width: 1px;\n"
"\n"
"	border-radius: 3px;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"	padding: 5px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton::disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	color: #656565;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton::hover\n"
"\n"
"{\n"
"\n"
"	background-color: #9c0000;\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	border-style: solid;\n"
"\n"
"	border-width: 1px;\n"
"\n"
"	border-radius: 3px;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"	padding: 5px;\n"
"\n"
"\n"
""
                        "\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton::pressed\n"
"\n"
"{\n"
"\n"
"	background-color: #880000;\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	border-style: solid;\n"
"\n"
"	border-width: 2px;\n"
"\n"
"	border-radius: 3px;\n"
"\n"
"	border-color: #000000;\n"
"\n"
"	padding: 5px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QToolButton-----*/\n"
"\n"
"QToolButton \n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(177, 181, 193, 255),stop:1 rgba(159, 163, 174, 255));\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"	border-style: solid;\n"
"\n"
"	border-width: 1px;\n"
"\n"
"	border-radius: 3px;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"	padding: 5px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QToolButton::disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	color: #656565;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QToolButton::hover\n"
"\n"
"{\n"
"\n"
"	background-color: "
                        "#9fa3ae;\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	border-style: solid;\n"
"\n"
"	border-width: 1px;\n"
"\n"
"	border-radius: 3px;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"	padding: 5px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QToolButton::pressed\n"
"\n"
"{\n"
"\n"
"	background-color: #7b7e86;\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	border-style: solid;\n"
"\n"
"	border-width: 2px;\n"
"\n"
"	border-radius: 3px;\n"
"\n"
"	border-color: #000000;\n"
"\n"
"	padding: 5px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QComboBox-----*/\n"
"\n"
"QComboBox\n"
"\n"
"{\n"
"\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(118, 118, 118, 255),stop:1 rgba(70, 70, 70, 255));\n"
"\n"
"    border: 1px solid #333333;\n"
"\n"
"    border-radius: 3px;\n"
"\n"
"    padding-left: 6px;\n"
"\n"
"    color: lightgray;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"    height: 20px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox::disabled\n"
"\n"
"{\n"
"\n"
"	background-colo"
                        "r: #404040;\n"
"\n"
"	color: #656565;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:hover\n"
"\n"
"{\n"
"\n"
"    background-color: #646464;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:on\n"
"\n"
"{\n"
"\n"
"    background-color: #979796;\n"
"\n"
"	color: #000000;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox QAbstractItemView\n"
"\n"
"{\n"
"\n"
"    background-color: #c4c5c3;\n"
"\n"
"    color: #000000;\n"
"\n"
"    border: 1px solid black;\n"
"\n"
"    selection-background-color: #363942;\n"
"\n"
"    selection-color: #ffffff;\n"
"\n"
"    outline: 0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox::drop-down\n"
"\n"
"{\n"
"\n"
"    subcontrol-origin: padding;\n"
"\n"
"    subcontrol-position: top right;\n"
"\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"\n"
"    border-left-color: darkgray;\n"
"\n"
"    border-left-style: solid; \n"
"\n"
"    border-top-right-radius: 3px; \n"
"\n"
"    border-bottom-rig"
                        "ht-radius: 3px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox::down-arrow\n"
"\n"
"{\n"
"\n"
"    image: url(://arrow-down.png);\n"
"\n"
"    width: 8px;\n"
"\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QSpinBox & QDoubleSpinBox & QDateTimeEdit-----*/\n"
"\n"
"QSpinBox, \n"
"\n"
"QDoubleSpinBox,\n"
"\n"
"QDateTimeEdit\n"
"\n"
"{\n"
"\n"
"	background-color: #000000;\n"
"\n"
"	color: #00ff00;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"	border: 1px solid #333333;\n"
"\n"
"	padding : 4px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSpinBox::disabled, \n"
"\n"
"QDoubleSpinBox::disabled,\n"
"\n"
"QDateTimeEdit::disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	color: #656565;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSpinBox:hover, \n"
"\n"
"QDoubleSpinBox::hover,\n"
"\n"
"QDateTimeEdit::hover\n"
"\n"
"{\n"
"\n"
"    border: 1px solid #00ff00;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSpinBox::up-button, QSpin"
                        "Box::down-button,\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
"\n"
"QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(118, 118, 118, 255),stop:1 rgba(70, 70, 70, 255));\n"
"\n"
"    border: 0px solid #333333;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSpinBox::disabled, \n"
"\n"
"QDoubleSpinBox::disabled,\n"
"\n"
"QDateTimeEdit::disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	color: #656565;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
"\n"
"QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
"\n"
"QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
"\n"
"{\n"
"\n"
"	background-color: #646464;\n"
"\n"
"    border: 1px solid #333333;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSpinBox::up-button:disabled, QS"
                        "pinBox::down-button:disabled,\n"
"\n"
"QDoubleSpinBox::up-button:disabled, QDoubleSpinBox::down-button:disabled,\n"
"\n"
"QDateTimeEdit::up-button:disabled, QDateTimeEdit::down-button:disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	color: #656565;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
"\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button::pressed,\n"
"\n"
"QDateTimeEdit::up-button:pressed, QDateTimeEdit::down-button::pressed\n"
"\n"
"{\n"
"\n"
"    background-color: #979796;\n"
"\n"
"    border: 1px solid #444444;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSpinBox::down-arrow,\n"
"\n"
"QDoubleSpinBox::down-arrow,\n"
"\n"
"QDateTimeEdit::down-arrow\n"
"\n"
"{\n"
"\n"
"    image: url(://arrow-down.png);\n"
"\n"
"    width: 7px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSpinBox::up-arrow,\n"
"\n"
"QDoubleSpinBox::up-arrow,\n"
"\n"
"QDateTimeEdit::up-arrow\n"
""
                        "\n"
"{\n"
"\n"
"    image: url(://arrow-up.png);\n"
"\n"
"    width: 7px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"\n"
"QLineEdit\n"
"\n"
"{\n"
"\n"
"	background-color: #000000;\n"
"\n"
"	color: #00ff00;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"    border: 1px solid #333333;\n"
"\n"
"	padding: 4px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QLineEdit:hover\n"
"\n"
"{\n"
"\n"
"    border: 1px solid #00ff00;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QLineEdit::disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	color: #656565;\n"
"\n"
"	border-width: 1px;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"	padding: 2px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QTextEdit-----*/\n"
"\n"
"QTextEdit\n"
"\n"
"{\n"
"\n"
"	background-color: #808080;\n"
"\n"
"	color: #fff;\n"
"\n"
"	border: 1px groove #333333;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTextEdit::disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	color: #656565"
                        ";\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QGroupBox-----*/\n"
"\n"
"QGroupBox \n"
"\n"
"{\n"
"\n"
"    border: 1px groove #333333;\n"
"\n"
"	border-radius: 2px;\n"
"\n"
"    margin-top: 20px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QGroupBox \n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:repeat, x1:0.486, y1:0, x2:0.505, y2:1, stop:0.00480769 rgba(170, 169, 169, 255),stop:1 rgba(122, 122, 122, 255));\n"
"\n"
"	font-weight: bold;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QGroupBox::title  \n"
"\n"
"{\n"
"\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(71, 75, 87, 255),stop:1 rgba(35, 37, 43, 255));\n"
"\n"
"    color: #ffffff;\n"
"\n"
"    border: 2px groove #333333;\n"
"\n"
"    subcontrol-origin: margin;\n"
"\n"
"    subcontrol-position: top left;\n"
"\n"
"    padding: 2px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QGroupBox::title::disabled\n"
"\n"
"{\n"
"\n"
"	background-"
                        "color: #404040;\n"
"\n"
"	color: #656565;\n"
"\n"
"    subcontrol-origin: margin;\n"
"\n"
"    subcontrol-position: top left;\n"
"\n"
"    padding: 5px;\n"
"\n"
"	border-top-left-radius: 3px;\n"
"\n"
"	border-top-right-radius: 3px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"\n"
"QCheckBox{\n"
"\n"
"	background-color: transparent;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"	color: #fff;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QCheckBox::indicator\n"
"\n"
"{\n"
"\n"
"    color: #b1b1b1;\n"
"\n"
"    background-color: #323232;\n"
"\n"
"    border: 2px solid #222222;\n"
"\n"
"    width: 12px;\n"
"\n"
"    height: 12px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QCheckBox::indicator:checked\n"
"\n"
"{\n"
"\n"
"    image:url(://checkbox.png);\n"
"\n"
"    border: 2px solid #00ff00;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"\n"
"{\n"
"\n"
"    border: 2px solid #00ff00;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QCh"
                        "eckBox::disabled\n"
"\n"
"{\n"
"\n"
"	color: #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #656565;\n"
"\n"
"	color: #656565;\n"
"\n"
"    border: 1px solid #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QRadioButton-----*/\n"
"\n"
"QRadioButton{\n"
"\n"
"	background-color: transparent;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"	color: #fff;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QRadioButton::indicator::unchecked\n"
"\n"
"{ \n"
"\n"
"	border: 2px inset #222222; \n"
"\n"
"	border-radius: 6px; \n"
"\n"
"	background-color:  #323232;\n"
"\n"
"	width: 9px; \n"
"\n"
"	height: 9px; \n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QRadioButton::indicator::unchecked:hover\n"
"\n"
"{ \n"
"\n"
"	border: 2px solid #00ff00; \n"
"\n"
"	border-radius: 5px; \n"
"\n"
"	background-color:  #323232;\n"
"\n"
"	width: 9px; \n"
"\n"
"	height: 9px; \n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QRadioButton::indicator::c"
                        "hecked\n"
"\n"
"{ \n"
"\n"
"	border: 2px inset #222222; \n"
"\n"
"	border-radius: 5px; \n"
"\n"
"	background-color: #00ff00; \n"
"\n"
"	width: 9px; \n"
"\n"
"	height: 9px; \n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QRadioButton::disabled\n"
"\n"
"{\n"
"\n"
"	color: #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QRadioButton::indicator:disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #656565;\n"
"\n"
"	color: #656565;\n"
"\n"
"    border: 2px solid #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QTableView & QTableWidget-----*/\n"
"\n"
"QTableView\n"
"\n"
"{\n"
"\n"
"    background-color: #808080;\n"
"\n"
"    border: 1px groove #333333;\n"
"\n"
"    color: #f0f0f0;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"    gridline-color: #333333;\n"
"\n"
"    outline : 0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTableView::disabled\n"
"\n"
"{\n"
"\n"
"    background-color: #242526;\n"
"\n"
"    border: 1px solid #32414B;\n"
"\n"
"    color: #656565;\n"
"\n"
"    gridline-color: #"
                        "656565;\n"
"\n"
"    outline : 0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTableView::item:hover \n"
"\n"
"{\n"
"\n"
"    background-color: #484c58;\n"
"\n"
"    color: #f0f0f0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTableView::item:selected \n"
"\n"
"{\n"
"\n"
"    background-color: #484c58;\n"
"\n"
"    border: 2px groove #00ff00;\n"
"\n"
"    color: #F0F0F0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTableView::item:selected:disabled\n"
"\n"
"{\n"
"\n"
"    background-color: #1a1b1c;\n"
"\n"
"    border: 2px solid #525251;\n"
"\n"
"    color: #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"\n"
"{\n"
"\n"
"    background-color: #282830;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section\n"
"\n"
"{\n"
"\n"
"    background-color: #282830;\n"
"\n"
"    color: #fff;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"    text-align: left;\n"
"\n"
"	padding: 4px;\n"
"\n"
"	\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section:d"
                        "isabled\n"
"\n"
"{\n"
"\n"
"    background-color: #525251;\n"
"\n"
"    color: #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"\n"
"{\n"
"\n"
"    background-color: #00ff00;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section:checked:disabled\n"
"\n"
"{\n"
"\n"
"    color: #656565;\n"
"\n"
"    background-color: #525251;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"\n"
"QHeaderView::section::vertical::only-one\n"
"\n"
"{\n"
"\n"
"    border-top: 0px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section::vertical\n"
"\n"
"{\n"
"\n"
"    border-top: 0px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"\n"
"QHeaderView::section::horizontal::only-one\n"
"\n"
"{\n"
"\n"
"    border-left: 0px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"\n"
"{\n"
"\n"
"    border-left: 0px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
""
                        "\n"
"\n"
"\n"
"\n"
"/*-----QTabWidget-----*/\n"
"\n"
"QTabBar::tab\n"
"\n"
"{\n"
"\n"
"	background-color: transparent;\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"	width: 150px;\n"
"\n"
"	height: 20px;\n"
"\n"
"	\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #656565;\n"
"\n"
"	color: #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabWidget::pane \n"
"\n"
"{\n"
"\n"
"	background-color: transparent;\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	border: 1px groove #333333;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:selected\n"
"\n"
"{\n"
"\n"
"    background-color: #484c58;\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	border: 1px groove #333333;\n"
"\n"
"	border-bottom: 0px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:selected:disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	color: #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:!selected \n"
"\n"
"{\n"
"\n"
"    ba"
                        "ckground-color: #a3a7b2;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:!selected:hover \n"
"\n"
"{\n"
"\n"
"    background-color: #484c58;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:top:!selected \n"
"\n"
"{\n"
"\n"
"    margin-top: 1px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:bottom:!selected \n"
"\n"
"{\n"
"\n"
"    margin-bottom: 3px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom \n"
"\n"
"{\n"
"\n"
"    min-width: 8ex;\n"
"\n"
"    margin-right: -1px;\n"
"\n"
"    padding: 5px 10px 5px 10px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:top:selected \n"
"\n"
"{\n"
"\n"
"    border-bottom-color: none;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:bottom:selected \n"
"\n"
"{\n"
"\n"
"    border-top-color: none;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one \n"
""
                        "\n"
"{\n"
"\n"
"    margin-right: 0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:left:!selected \n"
"\n"
"{\n"
"\n"
"    margin-right: 2px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:right:!selected\n"
"\n"
"{\n"
"\n"
"    margin-left: 2px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:left, QTabBar::tab:right \n"
"\n"
"{\n"
"\n"
"    min-height: 15ex;\n"
"\n"
"    margin-bottom: -1px;\n"
"\n"
"    padding: 10px 5px 10px 5px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:left:selected \n"
"\n"
"{\n"
"\n"
"    border-left-color: none;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:right:selected \n"
"\n"
"{\n"
"\n"
"    border-right-color: none;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one \n"
"\n"
"{\n"
"\n"
"    margin-bottom: 0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QSlider-----*/\n"
""
                        "\n"
"QSlider{\n"
"\n"
"	background-color: transparent;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::groove:horizontal \n"
"\n"
"{\n"
"\n"
"	background-color: transparent;\n"
"\n"
"	height: 6px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::sub-page:horizontal \n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"\n"
"	border: 1px solid #000;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::add-page:horizontal \n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	border: 1px solid #000; \n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::handle:horizontal \n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"\n"
"	border: 1px solid #000; \n"
"\n"
"	width: 12px;\n"
"\n"
"	margin-top: -6px;\n"
"\n"
"	margin-bottom: -6px;\n"
"\n"
"\n"
""
                        "\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::handle:horizontal:hover \n"
"\n"
"{\n"
"\n"
"	background-color: #808080;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::sub-page:horizontal:disabled \n"
"\n"
"{\n"
"\n"
"	background-color: #bbb;\n"
"\n"
"	border-color: #999;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::add-page:horizontal:disabled \n"
"\n"
"{\n"
"\n"
"	background-color: #eee;\n"
"\n"
"	border-color: #999;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::handle:horizontal:disabled \n"
"\n"
"{\n"
"\n"
"	background-color: #eee;\n"
"\n"
"	border: 1px solid #aaa;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::groove:vertical \n"
"\n"
"{\n"
"\n"
"	background-color: transparent;\n"
"\n"
"	width: 6px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::sub-page:vertical \n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:reflect, x1:0, y1:0.483, x2:1, y2:0.517, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"\n"
"	"
                        "border: 1px solid #000;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::add-page:vertical \n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	border: 1px solid #000;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::handle:vertical \n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:reflect, x1:0, y1:0.483, x2:1, y2:0.517, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"\n"
"	border: 1px solid #000;\n"
"\n"
"	height: 12px;\n"
"\n"
"	margin-left: -6px;\n"
"\n"
"	margin-right: -6px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::handle:vertical:hover \n"
"\n"
"{\n"
"\n"
"	background-color: #808080;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::sub-page:vertical:disabled \n"
"\n"
"{\n"
"\n"
"	background-color: #bbb;\n"
"\n"
"	border-color: #999;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::add-page:vertical:disabled \n"
"\n"
"{\n"
"\n"
"	background-color: #eee;\n"
"\n"
"	border-color: #999;\n"
"\n"
"\n"
"\n"
""
                        "}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::handle:vertical:disabled \n"
"\n"
"{\n"
"\n"
"	background-color: #eee;\n"
"\n"
"	border: 1px solid #aaa;\n"
"\n"
"	border-radius: 3px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QDial-----*/\n"
"\n"
"QDial\n"
"\n"
"{\n"
"\n"
"	background-color: #600000;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QDial::disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QScrollBar-----*/\n"
"\n"
"QScrollBar:horizontal\n"
"\n"
"{\n"
"\n"
"    border: 1px solid #222222;\n"
"\n"
"    background-color: #63676d;\n"
"\n"
"    height: 18px;\n"
"\n"
"    margin: 0px 18px 0 18px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::handle:horizontal\n"
"\n"
"{\n"
"\n"
"    background-color: #a6acb3;\n"
"\n"
"	border: 1px solid #656565;\n"
"\n"
"	border-radius: 2px;\n"
"\n"
"    min-height: 20px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal\n"
"\n"
"{\n"
"\n"
"    border"
                        ": 1px solid #1b1b19;\n"
"\n"
"    background-color: #a6acb3;\n"
"\n"
"    width: 18px;\n"
"\n"
"    subcontrol-position: right;\n"
"\n"
"    subcontrol-origin: margin;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::sub-line:horizontal\n"
"\n"
"{\n"
"\n"
"    border: 1px solid #1b1b19;\n"
"\n"
"    background-color: #a6acb3;\n"
"\n"
"    width: 18px;\n"
"\n"
"    subcontrol-position: left;\n"
"\n"
"    subcontrol-origin: margin;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::right-arrow:horizontal\n"
"\n"
"{\n"
"\n"
"    image: url(://arrow-right.png);\n"
"\n"
"    width: 8px;\n"
"\n"
"    height: 8px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::left-arrow:horizontal\n"
"\n"
"{\n"
"\n"
"    image: url(://arrow-left.png);\n"
"\n"
"    width: 8px;\n"
"\n"
"    height: 8px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"\n"
"{\n"
"\n"
"    background: none;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""
                        "\n"
"\n"
"QScrollBar:vertical\n"
"\n"
"{\n"
"\n"
"    background-color: #63676d;\n"
"\n"
"    width: 18px;\n"
"\n"
"    margin: 18px 0 18px 0;\n"
"\n"
"    border: 1px solid #222222;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::handle:vertical\n"
"\n"
"{\n"
"\n"
"    background-color: #a6acb3;\n"
"\n"
"	border: 1px solid #656565;\n"
"\n"
"	border-radius: 2px;\n"
"\n"
"    min-height: 20px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::add-line:vertical\n"
"\n"
"{\n"
"\n"
"    border: 1px solid #1b1b19;\n"
"\n"
"    background-color: #a6acb3;\n"
"\n"
"    height: 18px;\n"
"\n"
"    subcontrol-position: bottom;\n"
"\n"
"    subcontrol-origin: margin;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"\n"
"{\n"
"\n"
"    border: 1px solid #1b1b19;\n"
"\n"
"    background-color: #a6acb3;\n"
"\n"
"    height: 18px;\n"
"\n"
"    subcontrol-position: top;\n"
"\n"
"    subcontrol-origin: margin;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollB"
                        "ar::up-arrow:vertical\n"
"\n"
"{\n"
"\n"
"    image: url(://arrow-up.png);\n"
"\n"
"    width: 8px;\n"
"\n"
"    height: 8px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::down-arrow:vertical\n"
"\n"
"{\n"
"\n"
"    image: url(://arrow-down.png);\n"
"\n"
"    width: 8px;\n"
"\n"
"    height: 8px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"\n"
"{\n"
"\n"
"    background: none;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QProgressBar-----*/\n"
"\n"
"QProgressBar\n"
"\n"
"{\n"
"\n"
"	background-color: #000;\n"
"\n"
"	color: #00ff00;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"	border: 0px groove #000;\n"
"\n"
"	border-radius: 10px;\n"
"\n"
"	text-align: center;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QProgressBar:disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #404040;\n"
"\n"
"	color: #656565;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"	border: 1px solid #000;\n"
"\n"
"	border-radius: 10px;\n"
"\n"
"	text-alig"
                        "n: center;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QProgressBar::chunk {\n"
"\n"
"	background-color: #ffaf02;\n"
"\n"
"	border: 0px;\n"
"\n"
"	border-radius: 10px;\n"
"\n"
"	color: #000;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QProgressBar::chunk:disabled {\n"
"\n"
"	background-color: #333;\n"
"\n"
"	border: 0px;\n"
"\n"
"	border-radius: 10px;\n"
"\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QStatusBar-----*/\n"
"\n"
"QStatusBar\n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(102, 115, 140, 255),stop:1 rgba(56, 63, 77, 255));\n"
"\n"
"	color: #ffffff;\n"
"\n"
"	border-color: #051a39;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        stackedWidget = new QStackedWidget(tab);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 40, 381, 501));
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
        bouton_valider->setFont(font1);
        bouton_annuler = new QPushButton(page_ajouter);
        bouton_annuler->setObjectName(QStringLiteral("bouton_annuler"));
        bouton_annuler->setGeometry(QRect(145, 400, 93, 28));
        bouton_annuler->setFont(font1);
        comboBox_ajouter = new QComboBox(page_ajouter);
        comboBox_ajouter->setObjectName(QStringLiteral("comboBox_ajouter"));
        comboBox_ajouter->setGeometry(QRect(115, 235, 230, 22));
        bouton_page2 = new QPushButton(page_ajouter);
        bouton_page2->setObjectName(QStringLiteral("bouton_page2"));
        bouton_page2->setGeometry(QRect(300, 470, 75, 25));
        bouton_page2->setFont(font1);
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
        bouton_modifier->setFont(font1);
        bouton_annuler_mdf = new QPushButton(page_modifier);
        bouton_annuler_mdf->setObjectName(QStringLiteral("bouton_annuler_mdf"));
        bouton_annuler_mdf->setGeometry(QRect(200, 370, 93, 28));
        bouton_annuler_mdf->setFont(font1);
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
        bouton_supprimer->setFont(font1);
        bouton_page1 = new QPushButton(page_modifier);
        bouton_page1->setObjectName(QStringLiteral("bouton_page1"));
        bouton_page1->setGeometry(QRect(220, 470, 75, 25));
        bouton_page1->setFont(font1);
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
        bouton_mat_modifier->setFont(font1);
        comboBox_supression = new QComboBox(page_modifier);
        comboBox_supression->setObjectName(QStringLiteral("comboBox_supression"));
        comboBox_supression->setGeometry(QRect(115, 435, 100, 25));
        boutonpg_2_vers_3 = new QPushButton(page_modifier);
        boutonpg_2_vers_3->setObjectName(QStringLiteral("boutonpg_2_vers_3"));
        boutonpg_2_vers_3->setGeometry(QRect(300, 470, 75, 25));
        boutonpg_2_vers_3->setFont(font1);
        stackedWidget->addWidget(page_modifier);
        page_fonct_avance = new QWidget();
        page_fonct_avance->setObjectName(QStringLiteral("page_fonct_avance"));
        label_4 = new QLabel(page_fonct_avance);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, -5, 341, 41));
        label_4->setFont(font);
        label_4->setMargin(0);
        tab_employes_tri = new QTableView(page_fonct_avance);
        tab_employes_tri->setObjectName(QStringLiteral("tab_employes_tri"));
        tab_employes_tri->setGeometry(QRect(10, 70, 351, 191));
        label_5 = new QLabel(page_fonct_avance);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 25, 111, 41));
        label_5->setFont(font);
        label_5->setMargin(0);
        radio_tri1 = new QRadioButton(page_fonct_avance);
        radio_tri1->setObjectName(QStringLiteral("radio_tri1"));
        radio_tri1->setGeometry(QRect(110, 40, 97, 20));
        radio_tri1->setFont(font1);
        radio_tri2 = new QRadioButton(page_fonct_avance);
        radio_tri2->setObjectName(QStringLiteral("radio_tri2"));
        radio_tri2->setGeometry(QRect(180, 40, 97, 20));
        radio_tri2->setFont(font1);
        radio_tri3 = new QRadioButton(page_fonct_avance);
        radio_tri3->setObjectName(QStringLiteral("radio_tri3"));
        radio_tri3->setGeometry(QRect(270, 40, 97, 20));
        radio_tri3->setFont(font1);
        label_6 = new QLabel(page_fonct_avance);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 260, 221, 41));
        label_6->setFont(font);
        label_6->setMargin(0);
        radio_rech2 = new QRadioButton(page_fonct_avance);
        radio_rech2->setObjectName(QStringLiteral("radio_rech2"));
        radio_rech2->setGeometry(QRect(120, 295, 141, 20));
        radio_rech2->setFont(font1);
        radio_rech3 = new QRadioButton(page_fonct_avance);
        radio_rech3->setObjectName(QStringLiteral("radio_rech3"));
        radio_rech3->setGeometry(QRect(270, 295, 97, 20));
        radio_rech3->setFont(font1);
        radio_rech1 = new QRadioButton(page_fonct_avance);
        radio_rech1->setObjectName(QStringLiteral("radio_rech1"));
        radio_rech1->setGeometry(QRect(20, 295, 97, 20));
        radio_rech1->setFont(font1);
        boutonpg_3_vers_2 = new QPushButton(page_fonct_avance);
        boutonpg_3_vers_2->setObjectName(QStringLiteral("boutonpg_3_vers_2"));
        boutonpg_3_vers_2->setGeometry(QRect(220, 470, 75, 25));
        boutonpg_3_vers_2->setFont(font1);
        lineEdit_recherche = new QLineEdit(page_fonct_avance);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(20, 325, 331, 22));
        tab_recherche = new QTableView(page_fonct_avance);
        tab_recherche->setObjectName(QStringLiteral("tab_recherche"));
        tab_recherche->setGeometry(QRect(10, 355, 351, 110));
        boutonpg_3_vers_4 = new QPushButton(page_fonct_avance);
        boutonpg_3_vers_4->setObjectName(QStringLiteral("boutonpg_3_vers_4"));
        boutonpg_3_vers_4->setGeometry(QRect(300, 470, 75, 25));
        boutonpg_3_vers_4->setFont(font1);
        stackedWidget->addWidget(page_fonct_avance);
        page_gestion_profils = new QWidget();
        page_gestion_profils->setObjectName(QStringLiteral("page_gestion_profils"));
        boutonpg_4_vers_3 = new QPushButton(page_gestion_profils);
        boutonpg_4_vers_3->setObjectName(QStringLiteral("boutonpg_4_vers_3"));
        boutonpg_4_vers_3->setGeometry(QRect(220, 470, 75, 25));
        boutonpg_4_vers_3->setFont(font1);
        label_8 = new QLabel(page_gestion_profils);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, -5, 351, 41));
        label_8->setFont(font);
        label_8->setMargin(0);
        label_9 = new QLabel(page_gestion_profils);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 25, 371, 41));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        label_9->setFont(font2);
        label_9->setTextFormat(Qt::AutoText);
        label_9->setMargin(0);
        label_10 = new QLabel(page_gestion_profils);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 45, 371, 41));
        label_10->setFont(font2);
        label_10->setTextFormat(Qt::AutoText);
        label_10->setMargin(0);
        label_12 = new QLabel(page_gestion_profils);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 65, 371, 41));
        label_12->setFont(font2);
        label_12->setTextFormat(Qt::AutoText);
        label_12->setMargin(0);
        label_11 = new QLabel(page_gestion_profils);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 90, 351, 41));
        label_11->setFont(font);
        label_11->setMargin(0);
        label_nom_5 = new QLabel(page_gestion_profils);
        label_nom_5->setObjectName(QStringLiteral("label_nom_5"));
        label_nom_5->setGeometry(QRect(10, 130, 91, 21));
        label_nom_5->setFont(font);
        comboBox_matricule_profils = new QComboBox(page_gestion_profils);
        comboBox_matricule_profils->setObjectName(QStringLiteral("comboBox_matricule_profils"));
        comboBox_matricule_profils->setGeometry(QRect(125, 130, 100, 25));
        bouton_ok_matricule_profil = new QPushButton(page_gestion_profils);
        bouton_ok_matricule_profil->setObjectName(QStringLiteral("bouton_ok_matricule_profil"));
        bouton_ok_matricule_profil->setGeometry(QRect(240, 130, 41, 26));
        bouton_ok_matricule_profil->setFont(font1);
        lineEdit_login = new QLineEdit(page_gestion_profils);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));
        lineEdit_login->setGeometry(QRect(125, 165, 201, 22));
        lineEdit_mp_profil = new QLineEdit(page_gestion_profils);
        lineEdit_mp_profil->setObjectName(QStringLiteral("lineEdit_mp_profil"));
        lineEdit_mp_profil->setGeometry(QRect(125, 195, 101, 22));
        lineEdit_mp_profil->setEchoMode(QLineEdit::Password);
        label_nom_6 = new QLabel(page_gestion_profils);
        label_nom_6->setObjectName(QStringLiteral("label_nom_6"));
        label_nom_6->setGeometry(QRect(10, 165, 91, 21));
        label_nom_6->setFont(font);
        label_nom_7 = new QLabel(page_gestion_profils);
        label_nom_7->setObjectName(QStringLiteral("label_nom_7"));
        label_nom_7->setGeometry(QRect(10, 195, 111, 21));
        label_nom_7->setFont(font);
        bouton_ajouter_profil = new QPushButton(page_gestion_profils);
        bouton_ajouter_profil->setObjectName(QStringLiteral("bouton_ajouter_profil"));
        bouton_ajouter_profil->setGeometry(QRect(240, 195, 93, 25));
        bouton_ajouter_profil->setFont(font1);
        label_13 = new QLabel(page_gestion_profils);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 225, 351, 41));
        label_13->setFont(font);
        label_13->setMargin(0);
        label_nom_8 = new QLabel(page_gestion_profils);
        label_nom_8->setObjectName(QStringLiteral("label_nom_8"));
        label_nom_8->setGeometry(QRect(10, 260, 91, 21));
        label_nom_8->setFont(font);
        label_nom_9 = new QLabel(page_gestion_profils);
        label_nom_9->setObjectName(QStringLiteral("label_nom_9"));
        label_nom_9->setGeometry(QRect(10, 290, 191, 21));
        label_nom_9->setFont(font);
        lineEdit_login_modifier = new QLineEdit(page_gestion_profils);
        lineEdit_login_modifier->setObjectName(QStringLiteral("lineEdit_login_modifier"));
        lineEdit_login_modifier->setGeometry(QRect(70, 260, 201, 22));
        bouton_ok_login_modifier = new QPushButton(page_gestion_profils);
        bouton_ok_login_modifier->setObjectName(QStringLiteral("bouton_ok_login_modifier"));
        bouton_ok_login_modifier->setGeometry(QRect(280, 260, 41, 26));
        bouton_ok_login_modifier->setFont(font1);
        lineEdit_mp_modifier = new QLineEdit(page_gestion_profils);
        lineEdit_mp_modifier->setObjectName(QStringLiteral("lineEdit_mp_modifier"));
        lineEdit_mp_modifier->setGeometry(QRect(200, 290, 101, 22));
        lineEdit_mp_modifier->setEchoMode(QLineEdit::Password);
        bouton_modifier_profil = new QPushButton(page_gestion_profils);
        bouton_modifier_profil->setObjectName(QStringLiteral("bouton_modifier_profil"));
        bouton_modifier_profil->setGeometry(QRect(130, 320, 93, 25));
        bouton_modifier_profil->setFont(font1);
        label_14 = new QLabel(page_gestion_profils);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 345, 351, 41));
        label_14->setFont(font);
        label_14->setMargin(0);
        comboBox_supression_profils = new QComboBox(page_gestion_profils);
        comboBox_supression_profils->setObjectName(QStringLiteral("comboBox_supression_profils"));
        comboBox_supression_profils->setGeometry(QRect(40, 390, 151, 25));
        bouton_supprimer_profil = new QPushButton(page_gestion_profils);
        bouton_supprimer_profil->setObjectName(QStringLiteral("bouton_supprimer_profil"));
        bouton_supprimer_profil->setGeometry(QRect(210, 390, 93, 25));
        bouton_supprimer_profil->setFont(font1);
        stackedWidget->addWidget(page_gestion_profils);
        tab_employes = new QTableView(tab);
        tab_employes->setObjectName(QStringLiteral("tab_employes"));
        tab_employes->setGeometry(QRect(420, 35, 461, 301));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(430, 0, 351, 41));
        label_7->setFont(font);
        label_7->setMargin(0);
        label_employe_connecte = new QLabel(tab);
        label_employe_connecte->setObjectName(QStringLiteral("label_employe_connecte"));
        label_employe_connecte->setGeometry(QRect(20, 0, 281, 41));
        label_employe_connecte->setFont(font);
        label_employe_connecte->setMargin(0);
        boutonConnexion = new QPushButton(tab);
        boutonConnexion->setObjectName(QStringLiteral("boutonConnexion"));
        boutonConnexion->setGeometry(QRect(460, 340, 341, 31));
        boutonConnexion->setFont(font1);
        listeMessages = new QTextEdit(tab);
        listeMessages->setObjectName(QStringLiteral("listeMessages"));
        listeMessages->setGeometry(QRect(420, 380, 461, 201));
        listeMessages->setReadOnly(true);
        boutonEnvoyer = new QPushButton(tab);
        boutonEnvoyer->setObjectName(QStringLiteral("boutonEnvoyer"));
        boutonEnvoyer->setGeometry(QRect(820, 600, 71, 41));
        boutonEnvoyer->setFont(font1);
        message = new QLineEdit(tab);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(579, 590, 231, 51));
        pseudo = new QLineEdit(tab);
        pseudo->setObjectName(QStringLiteral("pseudo"));
        pseudo->setGeometry(QRect(430, 610, 141, 31));
        label_fonc_3 = new QLabel(tab);
        label_fonc_3->setObjectName(QStringLiteral("label_fonc_3"));
        label_fonc_3->setGeometry(QRect(430, 590, 141, 16));
        label_fonc_3->setFont(font2);
        bouton_deconnecter = new QPushButton(tab);
        bouton_deconnecter->setObjectName(QStringLiteral("bouton_deconnecter"));
        bouton_deconnecter->setGeometry(QRect(310, 10, 93, 28));
        bouton_deconnecter->setFont(font1);
        label_15 = new QLabel(tab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 540, 221, 41));
        label_15->setFont(font);
        label_15->setMargin(0);
        label_nom_10 = new QLabel(tab);
        label_nom_10->setObjectName(QStringLiteral("label_nom_10"));
        label_nom_10->setGeometry(QRect(20, 580, 91, 21));
        label_nom_10->setFont(font);
        comboBox_mat_bulletin_depaie = new QComboBox(tab);
        comboBox_mat_bulletin_depaie->setObjectName(QStringLiteral("comboBox_mat_bulletin_depaie"));
        comboBox_mat_bulletin_depaie->setGeometry(QRect(115, 580, 100, 25));
        bouton_generer_bp = new QPushButton(tab);
        bouton_generer_bp->setObjectName(QStringLiteral("bouton_generer_bp"));
        bouton_generer_bp->setGeometry(QRect(240, 580, 93, 26));
        bouton_generer_bp->setFont(font1);
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
        menubar->setGeometry(QRect(0, 0, 900, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(2);


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
        boutonpg_2_vers_3->setText(QApplication::translate("MainWindow", "Suivant", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Autres fonctionnalit\303\251s :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Trier par :", Q_NULLPTR));
        radio_tri1->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        radio_tri2->setText(QApplication::translate("MainWindow", "Pr\303\251nom", Q_NULLPTR));
        radio_tri3->setText(QApplication::translate("MainWindow", "Salaire", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Chercher un employ\303\251 selon :", Q_NULLPTR));
        radio_rech2->setText(QApplication::translate("MainWindow", "Nom ou pr\303\251nom", Q_NULLPTR));
        radio_rech3->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        radio_rech1->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        boutonpg_3_vers_2->setText(QApplication::translate("MainWindow", "Pr\303\251c\303\251dent", Q_NULLPTR));
        boutonpg_3_vers_4->setText(QApplication::translate("MainWindow", "Suivant", Q_NULLPTR));
        boutonpg_4_vers_3->setText(QApplication::translate("MainWindow", "Pr\303\251c\303\251dent", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Gestion des profils (L'authentification) :", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Remarque : le login du profil est toujours par d\303\251faut ", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "compos\303\251 de votre matricule plus votre nom et vous", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", " ne pouvez jamais le modifier .", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Ajouter un profil :", Q_NULLPTR));
        label_nom_5->setText(QApplication::translate("MainWindow", "Matricule :", Q_NULLPTR));
        bouton_ok_matricule_profil->setText(QApplication::translate("MainWindow", "Ok", Q_NULLPTR));
        label_nom_6->setText(QApplication::translate("MainWindow", "Login :", Q_NULLPTR));
        label_nom_7->setText(QApplication::translate("MainWindow", "Mot de passe :", Q_NULLPTR));
        bouton_ajouter_profil->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Modifier profil (Changer le mot de passe ) :", Q_NULLPTR));
        label_nom_8->setText(QApplication::translate("MainWindow", "Login :", Q_NULLPTR));
        label_nom_9->setText(QApplication::translate("MainWindow", "Nouveau mot de passe :", Q_NULLPTR));
        bouton_ok_login_modifier->setText(QApplication::translate("MainWindow", "Ok", Q_NULLPTR));
        bouton_modifier_profil->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Supprimer un profil :", Q_NULLPTR));
        bouton_supprimer_profil->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "La liste des employ\303\251s :", Q_NULLPTR));
        label_employe_connecte->setText(QString());
        boutonConnexion->setText(QApplication::translate("MainWindow", "D\303\251mmarer le Chat", Q_NULLPTR));
        boutonEnvoyer->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        label_fonc_3->setText(QApplication::translate("MainWindow", "Login :", Q_NULLPTR));
        bouton_deconnecter->setText(QApplication::translate("MainWindow", "D\303\251connecter", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "G\303\251n\303\251rer un bulletin de paie :", Q_NULLPTR));
        label_nom_10->setText(QApplication::translate("MainWindow", "Matricule :", Q_NULLPTR));
        bouton_generer_bp->setText(QApplication::translate("MainWindow", "Ok", Q_NULLPTR));
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
