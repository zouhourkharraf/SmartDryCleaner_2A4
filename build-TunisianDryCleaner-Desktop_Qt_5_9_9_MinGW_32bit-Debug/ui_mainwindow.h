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
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
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
    QLabel *label_ajouter_emp;
    QLabel *label_nom_emp;
    QLabel *label_adresse_emp;
    QLabel *label_prenom_emp;
    QLabel *label_tel_emp;
    QLabel *label_fonc_emp;
    QLabel *label_salaire_emp;
    QLabel *label_ev_emp;
    QLineEdit *lineEdit_nom_emp;
    QLineEdit *lineEdit_prenom_emp;
    QLineEdit *lineEdit_adresse_emp;
    QLineEdit *lineEdit_tel_emp;
    QLineEdit *lineEdit_salaire_emp;
    QRadioButton *radio1_ev;
    QRadioButton *radio2_ev;
    QRadioButton *radio3_ev;
    QPushButton *bouton_valider_emp;
    QComboBox *comboBox_ajouter_emp;
    QPushButton *bouton_page2_emp;
    QWidget *page_modifier;
    QLabel *label_modif_emp;
    QLabel *label_nom_emp2;
    QLabel *label_prenom_emp2;
    QLabel *label_tel_emp2;
    QLabel *label_adresse_emp2;
    QLabel *label_salaire_emp2;
    QLabel *label_fonc_emp2;
    QLabel *label_ev_emp_2;
    QLineEdit *lineEdit_nom_2_emp;
    QLineEdit *lineEdit_prenom_2_emp;
    QLineEdit *lineEdit_adresse_2_emp;
    QLineEdit *lineEdit_tel_2_emp;
    QLineEdit *lineEdit_salaire_2_emp;
    QRadioButton *radio1_ev_2;
    QRadioButton *radio2_ev_2;
    QRadioButton *radio3_ev_2;
    QPushButton *bouton_modifier_emp;
    QPushButton *bouton_annuler_mdf;
    QComboBox *comboBox_modifier_employe;
    QLabel *label_supp_emp;
    QLabel *label_mat_supp_emp;
    QPushButton *bouton_supprimer_emp;
    QPushButton *bouton_page1_emp;
    QLabel *labelmodif_matricule;
    QLineEdit *lineEdit_mat_modif;
    QPushButton *bouton_mat_modifier;
    QComboBox *comboBox_supression_emp;
    QPushButton *boutonpg_2_vers_3_emp;
    QWidget *page_fonct_avance;
    QLabel *label_tri_et_rech;
    QTableView *tab_employes_tri;
    QLabel *label_trierselon;
    QRadioButton *radio_tri1;
    QRadioButton *radio_tri2;
    QRadioButton *radio_tri3;
    QLabel *label_rech_selon;
    QRadioButton *radio_rech2;
    QRadioButton *radio_rech3;
    QRadioButton *radio_rech1;
    QPushButton *boutonpg_3_vers_2_emp;
    QLineEdit *lineEdit_recherche_emp;
    QTableView *tab_recherche_emp;
    QPushButton *boutonpg_3_vers_4_emp;
    QWidget *page_gestion_profils;
    QPushButton *boutonpg_4_vers_3_emp;
    QLabel *label_gestion_profils;
    QLabel *label_9;
    QLabel *label_rq_gestion_profil;
    QLabel *label_12;
    QLabel *label_ajouter_profil;
    QLabel *label_profil_matricule;
    QComboBox *comboBox_matricule_profils;
    QPushButton *bouton_ok_matricule_profil;
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_mp_profil;
    QLabel *label_login_profil;
    QLabel *label_mp_profil;
    QPushButton *bouton_ajouter_profil;
    QLabel *label_modif_profil;
    QLabel *label_login_mofif_emp;
    QLabel *label_mp_modif_emp;
    QLineEdit *lineEdit_login_modifier;
    QPushButton *bouton_ok_login_modifier;
    QLineEdit *lineEdit_mp_modifier;
    QPushButton *bouton_modifier_profil;
    QLabel *label_supp_profil;
    QComboBox *comboBox_supression_profils;
    QPushButton *bouton_supprimer_profil;
    QTableView *tab_employes;
    QLabel *label_liste_emp;
    QLabel *label_employe_connecte;
    QPushButton *boutonConnexionChat;
    QTextEdit *listeMessages;
    QPushButton *boutonEnvoyerChat;
    QLineEdit *messageChat;
    QLineEdit *pseudoChat;
    QLabel *label_login_chat;
    QLabel *label_bulletin_paie;
    QLabel *label_matricule_pdf;
    QComboBox *comboBox_mat_bulletin_depaie;
    QPushButton *bouton_generer_bp;
    QWidget *tab_2;
    QTabWidget *tabWidgetClient;
    QWidget *tab_6;
    QGroupBox *groupBoxClient;
    QLabel *labelidclient;
    QLabel *labelnomclient;
    QLabel *labelprenomclient;
    QLabel *labeladresseclient;
    QLabel *labeltelclient;
    QLabel *labeldateclient;
    QLineEdit *le_idclient;
    QLineEdit *le_nomclient;
    QLineEdit *le_prenomclient;
    QLineEdit *le_adresseclient;
    QLineEdit *le_telclient;
    QDateTimeEdit *dateclient;
    QLabel *labelnbclient;
    QLineEdit *le_nbserviceclient;
    QDialogButtonBox *buttonajoutclient;
    QPushButton *optioncamclient;
    QScrollArea *scrollAreaclient;
    QWidget *scrollAreaWidgetContents;
    QPushButton *arduinoclient;
    QWidget *tabWidgetafficherclient;
    QTableView *tab_client;
    QRadioButton *trieparNomclient;
    QRadioButton *trieparDateclient;
    QRadioButton *trieparIdclient;
    QLineEdit *rechercheclient;
    QFrame *frame;
    QLabel *labelrechclient;
    QPushButton *afficherstatclient;
    QPushButton *qrcodeButton;
    QLabel *qrcodeLabel;
    QLabel *labelclientqr;
    QWidget *tab_7;
    QGroupBox *groupBox_2;
    QLabel *labelclient_5;
    QLabel *labelclient;
    QLabel *labelclient_2;
    QLabel *labelclient_4;
    QLabel *labelclient_3;
    QLabel *labelclient_6;
    QLineEdit *m_idclient;
    QLineEdit *m_nomclient;
    QLineEdit *m_prenomclient;
    QLineEdit *m_adresseclient;
    QLineEdit *m_telclient;
    QDateTimeEdit *m_dateclient;
    QLabel *labelclient_7;
    QLineEdit *m_nbserviceclient;
    QDialogButtonBox *buttonBox_Visite_modif;
    QPushButton *boutonsuppclient;
    QWidget *tab_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_8;
    QGroupBox *groupBox_3;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *le_id;
    QLineEdit *lineEdit_nomservice;
    QLineEdit *lineEdit_typeservice;
    QLineEdit *lineEdit_emplacementservice;
    QLineEdit *lineEdit_prixservice;
    QLabel *label_16;
    QLineEdit *lineEdit_descriptionservice;
    QLabel *label_17;
    QDateEdit *dateEdit;
    QPushButton *ajouterservice;
    QWidget *tabWidgetPage1;
    QTableView *tableservice;
    QLineEdit *lineEdit_recherche;
    QComboBox *Tri;
    QLabel *label_18;
    QLabel *label_19;
    QGroupBox *groupBox_5;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *lineEdit_idservice_3;
    QLineEdit *lineEdit_nomservice_3;
    QLineEdit *lineEdit_typeservice_3;
    QLineEdit *lineEdit_emplacementservice_3;
    QLineEdit *lineEdit_prixservice_3;
    QLabel *label_25;
    QLineEdit *lineEdit_descriptionservice_3;
    QPushButton *supprimerservice;
    QDateEdit *dateEdit_3;
    QLabel *label_41;
    QPushButton *modifierservice;
    QWidget *tab_10;
    QLabel *label_42;
    QDialogButtonBox *buttonBox_supprimerS;
    QLineEdit *histoservice;
    QFrame *line;
    QFrame *line_2;
    QLineEdit *lineEdit_mail;
    QPushButton *envoyer;
    QLabel *label_43;
    QLabel *label_44;
    QTextEdit *textEdit;
    QWidget *tab_4;
    QLineEdit *recherche_fournisseur;
    QLabel *label_10;
    QTableView *tabfourn;
    QRadioButton *teltriefournisseur;
    QRadioButton *nomtriefournisseur;
    QRadioButton *idtriefournisseur;
    QPushButton *localisation_f;
    QLabel *label_8;
    QPushButton *excel_f;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QGroupBox *groupBox;
    QLineEdit *idfournisseur;
    QLineEdit *nomfournisseur;
    QLineEdit *prenomfournisseur;
    QLineEdit *adressefournisseur;
    QLineEdit *emailfournisseur;
    QLineEdit *telephonefournisseur;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *ajouter_f;
    QPushButton *modifier_f;
    QPushButton *musique;
    QPushButton *arduinoproduit;
    QPushButton *supprimer_f;
    QWidget *page_2;
    QGroupBox *groupBox_4;
    QLabel *label_45;
    QWidget *tab_5;
    QGroupBox *groupBox_10;
    QLabel *Digtal_clock;
    QLabel *DateTime;
    QRadioButton *modenuit;
    QLabel *label_40;
    QLineEdit *rechercheproduit;
    QTableView *tableView;
    QPushButton *trieridfproduit;
    QPushButton *trinomproduit;
    QPushButton *Trieridproduit;
    QPushButton *Impdosproduit;
    QTextEdit *impc;
    QStackedWidget *stackedWidgetProduit;
    QWidget *stackedWidgetPage1Produit;
    QGroupBox *groupBoxProduit;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *prixproduit_2;
    QLabel *label_28;
    QDateEdit *dateproduit_2;
    QLabel *label_29;
    QLabel *label_30;
    QLineEdit *qteproduit_2;
    QLineEdit *idproduit_2;
    QPushButton *ajouterproduit_2;
    QLabel *label_31;
    QLineEdit *classificationproduit_2;
    QPushButton *annulerproduit_2;
    QLabel *label_32;
    QLineEdit *idfproduit_2;
    QLineEdit *libelleproduit_2;
    QCommandLinkButton *nextproduit_2;
    QWidget *stackedWidgetPage2Produit;
    QGroupBox *groupBoxProduit2;
    QLabel *label_33;
    QLabel *label_34;
    QLineEdit *idproduit2_2;
    QLineEdit *prixproduit2_2;
    QPushButton *modifierproduit_2;
    QPushButton *supprimerproduit_2;
    QLabel *label_35;
    QLineEdit *classificationproduit2_2;
    QLineEdit *qteproduit2_2;
    QLabel *label_36;
    QLabel *label_37;
    QDateEdit *dateproduit2_2;
    QPushButton *annulerproduit2_2;
    QLabel *label_38;
    QLineEdit *idfproduit2_2;
    QLabel *label_39;
    QLineEdit *libelleproduit2_2;
    QCommandLinkButton *next2produit_2;
    QPushButton *okproduit_2;
    QWidget *stackedWidgetPage3Produit;
    QGroupBox *groupBoxProduit3;
    QCommandLinkButton *next3produit_2;
    QPushButton *imageproduit_2;
    QLabel *image1_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1038, 737);
        MainWindow->setStyleSheet(QLatin1String("/*QTabWidget{\n"
"	background-color: rgb(255, 0, 0);\n"
"}\n"
"\n"
"QPushButton{\n"
"}\n"
"background-color: rgb(255, 0, 0);*/\n"
"/*Copyright (c) DevSec Studio. All rights reserved.\n"
"\n"
"MIT License\n"
"\n"
"Permission is hereby granted, free of charge, to any person obtaining a copy\n"
"of this software and associated documentation files (the \"Software\"), to deal\n"
"in the Software without restriction, including without limitation the rights\n"
"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n"
"copies of the Software, and to permit persons to whom the Software is\n"
"furnished to do so, subject to the following conditions:\n"
"\n"
"The above copyright notice and this permission notice shall be included in all\n"
"copies or substantial portions of the Software.\n"
"\n"
"THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT"
                        ". IN NO EVENT SHALL THE\n"
"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"
"LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n"
"SOFTWARE.\n"
"*/\n"
"\n"
"/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(102, 115, 140, 255),stop:1 rgba(56, 63, 77, 255));\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QLabel::disabled\n"
"{\n"
"	background-color: transparent;\n"
"	color: #898988;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QMenuBar-----*/\n"
"/*QMenuBar\n"
"{\n"
"	background-color: #484c58;\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::disabled\n"
"{\n"
"	background-color: #40404"
                        "0;\n"
"	color: #898988;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background-color: #c4c5c3;\n"
"	color: #000000;\n"
"    border: 1px solid #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background-color: #979796;\n"
"    border: 1px solid #000;\n"
"    margin-bottom: -1px;\n"
"    padding-bottom: 1px;\n"
"\n"
"}\n"
"*/\n"
"\n"
"\n"
"/*-----QMenu-----*/\n"
"QMenu\n"
"{\n"
"    background-color: #c4c5c3;\n"
"    border: 1px solid;\n"
"    color: #000000;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 1px;\n"
"    background-color: #363942;\n"
"    color: #ffffff;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item\n"
"{\n"
"    min-width : 150px;\n"
"    padding: 3px 20px 3px 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    background"
                        "-color: #363942;\n"
"    color: #ffffff;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item:disabled\n"
"{\n"
"    color: #898988;\n"
"}\n"
"\n"
"\n"
"/*-----QToolTip-----*/\n"
"QToolTip\n"
"{\n"
"	background-color: #bbbcba;\n"
"	color: #000000;\n"
"	border-color: #051a39;\n"
"	border : 1px solid #000000;\n"
"	border-radius: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:0.486, y1:0, x2:0.505, y2:1, stop:0.00480769 rgba(170, 0, 0, 255),stop:1 rgba(122, 0, 0, 255));\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: #9c0000;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
""
                        "	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #880000;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-radius: 3px;\n"
"	border-color: #000000;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QToolButton-----*/\n"
"QToolButton \n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(177, 181, 193, 255),stop:1 rgba(159, 163, 174, 255));\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::hover\n"
"{\n"
"	background-color: #9fa3ae;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
""
                        "\n"
"\n"
"QToolButton::pressed\n"
"{\n"
"	background-color: #7b7e86;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-radius: 3px;\n"
"	border-color: #000000;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QComboBox-----*/\n"
"QComboBox\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(118, 118, 118, 255),stop:1 rgba(70, 70, 70, 255));\n"
"    border: 1px solid #333333;\n"
"    border-radius: 3px;\n"
"    padding-left: 6px;\n"
"    color: lightgray;\n"
"	font-weight: bold;\n"
"    height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox:hover\n"
"{\n"
"    background-color: #646464;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    background-color: #979796;\n"
"	color: #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    background-color: #c4c5c3;\n"
"    color: #000000;\n"
"  "
                        "  border: 1px solid black;\n"
"    selection-background-color: #363942;\n"
"    selection-color: #ffffff;\n"
"    outline: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; \n"
"    border-top-right-radius: 3px; \n"
"    border-bottom-right-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"}\n"
"\n"
"\n"
"/*-----QSpinBox & QDoubleSpinBox & QDateTimeEdit-----*/\n"
"QSpinBox, \n"
"QDoubleSpinBox,\n"
"QDateTimeEdit\n"
"{\n"
"	background-color: #000000;\n"
"	color: #00ff00;\n"
"	font-weight: bold;\n"
"	border: 1px solid #333333;\n"
"	padding : 4px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::disabled, \n"
"QDoubleSpinBox::disabled,\n"
"QDateTimeEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	b"
                        "order-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox:hover, \n"
"QDoubleSpinBox::hover,\n"
"QDateTimeEdit::hover\n"
"{\n"
"    border: 1px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button, QSpinBox::down-button,\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
"QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(118, 118, 118, 255),stop:1 rgba(70, 70, 70, 255));\n"
"    border: 0px solid #333333;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::disabled, \n"
"QDoubleSpinBox::disabled,\n"
"QDateTimeEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
"QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
"QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
"{\n"
"	background-color: #646464;\n"
"    border: 1px solid #333333;\n"
"\n"
"\n"
""
                        "}\n"
"\n"
"\n"
"QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
"QDoubleSpinBox::up-button:disabled, QDoubleSpinBox::down-button:disabled,\n"
"QDateTimeEdit::up-button:disabled, QDateTimeEdit::down-button:disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button::pressed,\n"
"QDateTimeEdit::up-button:pressed, QDateTimeEdit::down-button::pressed\n"
"{\n"
"    background-color: #979796;\n"
"    border: 1px solid #444444;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::down-arrow,\n"
"QDoubleSpinBox::down-arrow,\n"
"QDateTimeEdit::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 7px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-arrow,\n"
"QDoubleSpinBox::up-arrow,\n"
"QDateTimeEdit::up-arrow\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 7px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QL"
                        "ineEdit\n"
"{\n"
"	background-color: #000000;\n"
"	color: #00ff00;\n"
"	font-weight: bold;\n"
"    border: 1px solid #333333;\n"
"	padding: 4px;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit:hover\n"
"{\n"
"    border: 1px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-width: 1px;\n"
"	border-color: #051a39;\n"
"	padding: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTextEdit-----*/\n"
"QTextEdit\n"
"{\n"
"	background-color: #808080;\n"
"	color: #fff;\n"
"	border: 1px groove #333333;\n"
"\n"
"}\n"
"\n"
"\n"
"QTextEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QGroupBox-----*/\n"
"QGroupBox \n"
"{\n"
"    border: 1px groove #333333;\n"
"	border-radius: 2px;\n"
"    margin-top: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox \n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:0.486, y1:0, x2:0.505, y2:1, stop:0.00480769 rgba(170, 169, 169, 255),stop:1 rgba(1"
                        "22, 122, 122, 255));\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title  \n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(71, 75, 87, 255),stop:1 rgba(35, 37, 43, 255));\n"
"    color: #ffffff;\n"
"    border: 2px groove #333333;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 5px;\n"
"	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox{\n"
"	background-color: transparent;\n"
"	font-weight: bold;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 2px solid #222222;\n"
"    width: 12px;\n"
"    height: 12px;\n"
"\n"
"}\n"
"\n"
"\n"
"Q"
                        "CheckBox::indicator:checked\n"
"{\n"
"    image:url(://checkbox.png);\n"
"    border: 2px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"    border: 2px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 1px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QRadioButton-----*/\n"
"QRadioButton{\n"
"	background-color: transparent;\n"
"	font-weight: bold;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::unchecked\n"
"{ \n"
"	border: 2px inset #222222; \n"
"	border-radius: 6px; \n"
"	background-color:  #323232;\n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::unchecked:hover\n"
"{ \n"
"	border: 2px solid #00ff00; \n"
"	border-radius: 5px; \n"
"	background-color:  #323232;\n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::"
                        "checked\n"
"{ \n"
"	border: 2px inset #222222; \n"
"	border-radius: 5px; \n"
"	background-color: #00ff00; \n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 2px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTableView & QTableWidget-----*/\n"
"QTableView\n"
"{\n"
"    background-color: #808080;\n"
"    border: 1px groove #333333;\n"
"    color: #f0f0f0;\n"
"	font-weight: bold;\n"
"    gridline-color: #333333;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::disabled\n"
"{\n"
"    background-color: #242526;\n"
"    border: 1px solid #32414B;\n"
"    color: #656565;\n"
"    gridline-color: #656565;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:hover \n"
"{\n"
"    background-color: #484c58;\n"
"    color: #f0f0f0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected \n"
"{\n"
"    background-colo"
                        "r: #484c58;\n"
"    border: 2px groove #00ff00;\n"
"    color: #F0F0F0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected:disabled\n"
"{\n"
"    background-color: #1a1b1c;\n"
"    border: 2px solid #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: #282830;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #282830;\n"
"    color: #fff;\n"
"	font-weight: bold;\n"
"    text-align: left;\n"
"	padding: 4px;\n"
"	\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked:disabled\n"
"{\n"
"    color: #656565;\n"
"    background-color: #525251;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::"
                        "section::vertical\n"
"{\n"
"    border-top: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTabWidget-----*/\n"
"QTabBar::tab\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"	width: 150px;\n"
"	height: 20px;\n"
"	\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabWidget::pane \n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	border: 1px groove #333333;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    background-color: #484c58;\n"
"	color: #ffffff;\n"
"	border: 1px groove #333333;\n"
"	border-bottom: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected:disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
""
                        "QTabBar::tab:!selected \n"
"{\n"
"    background-color: #a3a7b2;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:!selected:hover \n"
"{\n"
"    background-color: #484c58;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:!selected \n"
"{\n"
"    margin-top: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:bottom:!selected \n"
"{\n"
"    margin-bottom: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom \n"
"{\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:selected \n"
"{\n"
"    border-bottom-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:bottom:selected \n"
"{\n"
"    border-top-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one \n"
"{\n"
"    margin-right: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left:!selected \n"
"{\n"
"    margin-right: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:right:!selected\n"
"{\n"
"    margin-left: 2px;\n"
"\n"
""
                        "}\n"
"\n"
"\n"
"QTabBar::tab:left, QTabBar::tab:right \n"
"{\n"
"    min-height: 15ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left:selected \n"
"{\n"
"    border-left-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:right:selected \n"
"{\n"
"    border-right-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one \n"
"{\n"
"    margin-bottom: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QSlider-----*/\n"
"QSlider{\n"
"	background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::groove:horizontal \n"
"{\n"
"	background-color: transparent;\n"
"	height: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:horizontal \n"
"{\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:horizontal \n"
"{\n"
"	back"
                        "ground-color: #404040;\n"
"	border: 1px solid #000; \n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal \n"
"{\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000; \n"
"	width: 12px;\n"
"	margin-top: -6px;\n"
"	margin-bottom: -6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal:hover \n"
"{\n"
"	background-color: #808080;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:horizontal:disabled \n"
"{\n"
"	background-color: #bbb;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:horizontal:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border: 1px solid #aaa;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::groove:vertical \n"
"{\n"
"	background-color: transparent;\n"
"	width: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:vertical \n"
"{\n"
"	background-color: ql"
                        "ineargradient(spread:reflect, x1:0, y1:0.483, x2:1, y2:0.517, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical \n"
"{\n"
"	background-color: #404040;\n"
"	border: 1px solid #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical \n"
"{\n"
"	background-color: qlineargradient(spread:reflect, x1:0, y1:0.483, x2:1, y2:0.517, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000;\n"
"	height: 12px;\n"
"	margin-left: -6px;\n"
"	margin-right: -6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical:hover \n"
"{\n"
"	background-color: #808080;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:vertical:disabled \n"
"{\n"
"	background-color: #bbb;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical:disabled \n"
"{\n"
"	background-color: #"
                        "eee;\n"
"	border: 1px solid #aaa;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QDial-----*/\n"
"QDial\n"
"{\n"
"	background-color: #600000;\n"
"\n"
"}\n"
"\n"
"\n"
"QDial::disabled\n"
"{\n"
"	background-color: #404040;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QScrollBar-----*/\n"
"QScrollBar:horizontal\n"
"{\n"
"    border: 1px solid #222222;\n"
"    background-color: #63676d;\n"
"    height: 18px;\n"
"    margin: 0px 18px 0 18px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"    background-color: #a6acb3;\n"
"	border: 1px solid #656565;\n"
"	border-radius: 2px;\n"
"    min-height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    width: 18px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-line:horizontal\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    width: 18px;\n"
"    subcontrol-position: "
                        "left;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::right-arrow:horizontal\n"
"{\n"
"    image: url(://arrow-right.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::left-arrow:horizontal\n"
"{\n"
"    image: url(://arrow-left.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"    background: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background-color: #63676d;\n"
"    width: 18px;\n"
"    margin: 18px 0 18px 0;\n"
"    border: 1px solid #222222;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background-color: #a6acb3;\n"
"	border: 1px solid #656565;\n"
"	border-radius: 2px;\n"
"    min-height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    height: 18px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: mar"
                        "gin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    height: 18px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::up-arrow:vertical\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::down-arrow:vertical\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"    background: none;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QProgressBar-----*/\n"
"QProgressBar\n"
"{\n"
"	background-color: #000;\n"
"	color: #00ff00;\n"
"	font-weight: bold;\n"
"	border: 0px groove #000;\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar:disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"	border: 1px solid #000;\n"
"	"
                        "border-radius: 10px;\n"
"	text-align: center;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar::chunk {\n"
"	background-color: #ffaf02;\n"
"	border: 0px;\n"
"	border-radius: 10px;\n"
"	color: #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar::chunk:disabled {\n"
"	background-color: #333;\n"
"	border: 0px;\n"
"	border-radius: 10px;\n"
"	color: #656565;\n"
"}\n"
"\n"
"\n"
"/*-----QStatusBar-----*/\n"
"QStatusBar\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(102, 115, 140, 255),stop:1 rgba(56, 63, 77, 255));\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("/*QTabWidget{\n"
"	background-color: rgb(255, 0, 0);\n"
"}\n"
"\n"
"QPushButton{\n"
"}\n"
"background-color: rgb(255, 0, 0);*/\n"
"/*Copyright (c) DevSec Studio. All rights reserved.\n"
"\n"
"MIT License\n"
"\n"
"Permission is hereby granted, free of charge, to any person obtaining a copy\n"
"of this software and associated documentation files (the \"Software\"), to deal\n"
"in the Software without restriction, including without limitation the rights\n"
"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n"
"copies of the Software, and to permit persons to whom the Software is\n"
"furnished to do so, subject to the following conditions:\n"
"\n"
"The above copyright notice and this permission notice shall be included in all\n"
"copies or substantial portions of the Software.\n"
"\n"
"THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT"
                        ". IN NO EVENT SHALL THE\n"
"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"
"LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n"
"SOFTWARE.\n"
"*/\n"
"\n"
"/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(102, 115, 140, 255),stop:1 rgba(56, 63, 77, 255));\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QLabel::disabled\n"
"{\n"
"	background-color: transparent;\n"
"	color: #898988;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QMenuBar-----*/\n"
"/*QMenuBar\n"
"{\n"
"	background-color: #484c58;\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::disabled\n"
"{\n"
"	background-color: #40404"
                        "0;\n"
"	color: #898988;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background-color: #c4c5c3;\n"
"	color: #000000;\n"
"    border: 1px solid #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background-color: #979796;\n"
"    border: 1px solid #000;\n"
"    margin-bottom: -1px;\n"
"    padding-bottom: 1px;\n"
"\n"
"}\n"
"*/\n"
"\n"
"\n"
"/*-----QMenu-----*/\n"
"QMenu\n"
"{\n"
"    background-color: #c4c5c3;\n"
"    border: 1px solid;\n"
"    color: #000000;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 1px;\n"
"    background-color: #363942;\n"
"    color: #ffffff;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item\n"
"{\n"
"    min-width : 150px;\n"
"    padding: 3px 20px 3px 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    background"
                        "-color: #363942;\n"
"    color: #ffffff;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item:disabled\n"
"{\n"
"    color: #898988;\n"
"}\n"
"\n"
"\n"
"/*-----QToolTip-----*/\n"
"QToolTip\n"
"{\n"
"	background-color: #bbbcba;\n"
"	color: #000000;\n"
"	border-color: #051a39;\n"
"	border : 1px solid #000000;\n"
"	border-radius: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:0.486, y1:0, x2:0.505, y2:1, stop:0.00480769 rgba(170, 0, 0, 255),stop:1 rgba(122, 0, 0, 255));\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: #9c0000;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
""
                        "	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #880000;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-radius: 3px;\n"
"	border-color: #000000;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QToolButton-----*/\n"
"QToolButton \n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(177, 181, 193, 255),stop:1 rgba(159, 163, 174, 255));\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::hover\n"
"{\n"
"	background-color: #9fa3ae;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
""
                        "\n"
"\n"
"QToolButton::pressed\n"
"{\n"
"	background-color: #7b7e86;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-radius: 3px;\n"
"	border-color: #000000;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QComboBox-----*/\n"
"QComboBox\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(118, 118, 118, 255),stop:1 rgba(70, 70, 70, 255));\n"
"    border: 1px solid #333333;\n"
"    border-radius: 3px;\n"
"    padding-left: 6px;\n"
"    color: lightgray;\n"
"	font-weight: bold;\n"
"    height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox:hover\n"
"{\n"
"    background-color: #646464;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    background-color: #979796;\n"
"	color: #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    background-color: #c4c5c3;\n"
"    color: #000000;\n"
"  "
                        "  border: 1px solid black;\n"
"    selection-background-color: #363942;\n"
"    selection-color: #ffffff;\n"
"    outline: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; \n"
"    border-top-right-radius: 3px; \n"
"    border-bottom-right-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"}\n"
"\n"
"\n"
"/*-----QSpinBox & QDoubleSpinBox & QDateTimeEdit-----*/\n"
"QSpinBox, \n"
"QDoubleSpinBox,\n"
"QDateTimeEdit\n"
"{\n"
"	background-color: #000000;\n"
"	color: #00ff00;\n"
"	font-weight: bold;\n"
"	border: 1px solid #333333;\n"
"	padding : 4px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::disabled, \n"
"QDoubleSpinBox::disabled,\n"
"QDateTimeEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	b"
                        "order-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox:hover, \n"
"QDoubleSpinBox::hover,\n"
"QDateTimeEdit::hover\n"
"{\n"
"    border: 1px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button, QSpinBox::down-button,\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
"QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(118, 118, 118, 255),stop:1 rgba(70, 70, 70, 255));\n"
"    border: 0px solid #333333;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::disabled, \n"
"QDoubleSpinBox::disabled,\n"
"QDateTimeEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
"QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
"QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
"{\n"
"	background-color: #646464;\n"
"    border: 1px solid #333333;\n"
"\n"
"\n"
""
                        "}\n"
"\n"
"\n"
"QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
"QDoubleSpinBox::up-button:disabled, QDoubleSpinBox::down-button:disabled,\n"
"QDateTimeEdit::up-button:disabled, QDateTimeEdit::down-button:disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button::pressed,\n"
"QDateTimeEdit::up-button:pressed, QDateTimeEdit::down-button::pressed\n"
"{\n"
"    background-color: #979796;\n"
"    border: 1px solid #444444;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::down-arrow,\n"
"QDoubleSpinBox::down-arrow,\n"
"QDateTimeEdit::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 7px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-arrow,\n"
"QDoubleSpinBox::up-arrow,\n"
"QDateTimeEdit::up-arrow\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 7px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QL"
                        "ineEdit\n"
"{\n"
"	background-color: #000000;\n"
"	color: #00ff00;\n"
"	font-weight: bold;\n"
"    border: 1px solid #333333;\n"
"	padding: 4px;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit:hover\n"
"{\n"
"    border: 1px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-width: 1px;\n"
"	border-color: #051a39;\n"
"	padding: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTextEdit-----*/\n"
"QTextEdit\n"
"{\n"
"	background-color: #808080;\n"
"	color: #fff;\n"
"	border: 1px groove #333333;\n"
"\n"
"}\n"
"\n"
"\n"
"QTextEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QGroupBox-----*/\n"
"QGroupBox \n"
"{\n"
"    border: 1px groove #333333;\n"
"	border-radius: 2px;\n"
"    margin-top: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox \n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:0.486, y1:0, x2:0.505, y2:1, stop:0.00480769 rgba(170, 169, 169, 255),stop:1 rgba(1"
                        "22, 122, 122, 255));\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title  \n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(71, 75, 87, 255),stop:1 rgba(35, 37, 43, 255));\n"
"    color: #ffffff;\n"
"    border: 2px groove #333333;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 5px;\n"
"	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox{\n"
"	background-color: transparent;\n"
"	font-weight: bold;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 2px solid #222222;\n"
"    width: 12px;\n"
"    height: 12px;\n"
"\n"
"}\n"
"\n"
"\n"
"Q"
                        "CheckBox::indicator:checked\n"
"{\n"
"    image:url(://checkbox.png);\n"
"    border: 2px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"    border: 2px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 1px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QRadioButton-----*/\n"
"QRadioButton{\n"
"	background-color: transparent;\n"
"	font-weight: bold;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::unchecked\n"
"{ \n"
"	border: 2px inset #222222; \n"
"	border-radius: 6px; \n"
"	background-color:  #323232;\n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::unchecked:hover\n"
"{ \n"
"	border: 2px solid #00ff00; \n"
"	border-radius: 5px; \n"
"	background-color:  #323232;\n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::"
                        "checked\n"
"{ \n"
"	border: 2px inset #222222; \n"
"	border-radius: 5px; \n"
"	background-color: #00ff00; \n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 2px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTableView & QTableWidget-----*/\n"
"QTableView\n"
"{\n"
"    background-color: #808080;\n"
"    border: 1px groove #333333;\n"
"    color: #f0f0f0;\n"
"	font-weight: bold;\n"
"    gridline-color: #333333;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::disabled\n"
"{\n"
"    background-color: #242526;\n"
"    border: 1px solid #32414B;\n"
"    color: #656565;\n"
"    gridline-color: #656565;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:hover \n"
"{\n"
"    background-color: #484c58;\n"
"    color: #f0f0f0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected \n"
"{\n"
"    background-colo"
                        "r: #484c58;\n"
"    border: 2px groove #00ff00;\n"
"    color: #F0F0F0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected:disabled\n"
"{\n"
"    background-color: #1a1b1c;\n"
"    border: 2px solid #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: #282830;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #282830;\n"
"    color: #fff;\n"
"	font-weight: bold;\n"
"    text-align: left;\n"
"	padding: 4px;\n"
"	\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked:disabled\n"
"{\n"
"    color: #656565;\n"
"    background-color: #525251;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::"
                        "section::vertical\n"
"{\n"
"    border-top: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTabWidget-----*/\n"
"QTabBar::tab\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"	width: 150px;\n"
"	height: 20px;\n"
"	\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabWidget::pane \n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	border: 1px groove #333333;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    background-color: #484c58;\n"
"	color: #ffffff;\n"
"	border: 1px groove #333333;\n"
"	border-bottom: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected:disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
""
                        "QTabBar::tab:!selected \n"
"{\n"
"    background-color: #a3a7b2;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:!selected:hover \n"
"{\n"
"    background-color: #484c58;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:!selected \n"
"{\n"
"    margin-top: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:bottom:!selected \n"
"{\n"
"    margin-bottom: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom \n"
"{\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:selected \n"
"{\n"
"    border-bottom-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:bottom:selected \n"
"{\n"
"    border-top-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one \n"
"{\n"
"    margin-right: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left:!selected \n"
"{\n"
"    margin-right: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:right:!selected\n"
"{\n"
"    margin-left: 2px;\n"
"\n"
""
                        "}\n"
"\n"
"\n"
"QTabBar::tab:left, QTabBar::tab:right \n"
"{\n"
"    min-height: 15ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left:selected \n"
"{\n"
"    border-left-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:right:selected \n"
"{\n"
"    border-right-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one \n"
"{\n"
"    margin-bottom: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QSlider-----*/\n"
"QSlider{\n"
"	background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::groove:horizontal \n"
"{\n"
"	background-color: transparent;\n"
"	height: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:horizontal \n"
"{\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:horizontal \n"
"{\n"
"	back"
                        "ground-color: #404040;\n"
"	border: 1px solid #000; \n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal \n"
"{\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000; \n"
"	width: 12px;\n"
"	margin-top: -6px;\n"
"	margin-bottom: -6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal:hover \n"
"{\n"
"	background-color: #808080;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:horizontal:disabled \n"
"{\n"
"	background-color: #bbb;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:horizontal:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border: 1px solid #aaa;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::groove:vertical \n"
"{\n"
"	background-color: transparent;\n"
"	width: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:vertical \n"
"{\n"
"	background-color: ql"
                        "ineargradient(spread:reflect, x1:0, y1:0.483, x2:1, y2:0.517, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical \n"
"{\n"
"	background-color: #404040;\n"
"	border: 1px solid #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical \n"
"{\n"
"	background-color: qlineargradient(spread:reflect, x1:0, y1:0.483, x2:1, y2:0.517, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000;\n"
"	height: 12px;\n"
"	margin-left: -6px;\n"
"	margin-right: -6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical:hover \n"
"{\n"
"	background-color: #808080;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:vertical:disabled \n"
"{\n"
"	background-color: #bbb;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical:disabled \n"
"{\n"
"	background-color: #"
                        "eee;\n"
"	border: 1px solid #aaa;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QDial-----*/\n"
"QDial\n"
"{\n"
"	background-color: #600000;\n"
"\n"
"}\n"
"\n"
"\n"
"QDial::disabled\n"
"{\n"
"	background-color: #404040;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QScrollBar-----*/\n"
"QScrollBar:horizontal\n"
"{\n"
"    border: 1px solid #222222;\n"
"    background-color: #63676d;\n"
"    height: 18px;\n"
"    margin: 0px 18px 0 18px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"    background-color: #a6acb3;\n"
"	border: 1px solid #656565;\n"
"	border-radius: 2px;\n"
"    min-height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    width: 18px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-line:horizontal\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    width: 18px;\n"
"    subcontrol-position: "
                        "left;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::right-arrow:horizontal\n"
"{\n"
"    image: url(://arrow-right.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::left-arrow:horizontal\n"
"{\n"
"    image: url(://arrow-left.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"    background: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background-color: #63676d;\n"
"    width: 18px;\n"
"    margin: 18px 0 18px 0;\n"
"    border: 1px solid #222222;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background-color: #a6acb3;\n"
"	border: 1px solid #656565;\n"
"	border-radius: 2px;\n"
"    min-height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    height: 18px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: mar"
                        "gin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    height: 18px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::up-arrow:vertical\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::down-arrow:vertical\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"    background: none;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QProgressBar-----*/\n"
"QProgressBar\n"
"{\n"
"	background-color: #000;\n"
"	color: #00ff00;\n"
"	font-weight: bold;\n"
"	border: 0px groove #000;\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar:disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"	border: 1px solid #000;\n"
"	"
                        "border-radius: 10px;\n"
"	text-align: center;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar::chunk {\n"
"	background-color: #ffaf02;\n"
"	border: 0px;\n"
"	border-radius: 10px;\n"
"	color: #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar::chunk:disabled {\n"
"	background-color: #333;\n"
"	border: 0px;\n"
"	border-radius: 10px;\n"
"	color: #656565;\n"
"}\n"
"\n"
"\n"
"/*-----QStatusBar-----*/\n"
"QStatusBar\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(102, 115, 140, 255),stop:1 rgba(56, 63, 77, 255));\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1021, 721));
        tabWidget->setStyleSheet(QLatin1String("/*QTabWidget{\n"
"	background-color: rgb(255, 0, 0);\n"
"}\n"
"\n"
"QPushButton{\n"
"}\n"
"background-color: rgb(255, 0, 0);*/\n"
"/*Copyright (c) DevSec Studio. All rights reserved.\n"
"\n"
"MIT License\n"
"\n"
"Permission is hereby granted, free of charge, to any person obtaining a copy\n"
"of this software and associated documentation files (the \"Software\"), to deal\n"
"in the Software without restriction, including without limitation the rights\n"
"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n"
"copies of the Software, and to permit persons to whom the Software is\n"
"furnished to do so, subject to the following conditions:\n"
"\n"
"The above copyright notice and this permission notice shall be included in all\n"
"copies or substantial portions of the Software.\n"
"\n"
"THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT"
                        ". IN NO EVENT SHALL THE\n"
"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"
"LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n"
"SOFTWARE.\n"
"*/\n"
"\n"
"/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(102, 115, 140, 255),stop:1 rgba(56, 63, 77, 255));\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QLabel::disabled\n"
"{\n"
"	background-color: transparent;\n"
"	color: #898988;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QMenuBar-----*/\n"
"/*QMenuBar\n"
"{\n"
"	background-color: #484c58;\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::disabled\n"
"{\n"
"	background-color: #40404"
                        "0;\n"
"	color: #898988;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background-color: #c4c5c3;\n"
"	color: #000000;\n"
"    border: 1px solid #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background-color: #979796;\n"
"    border: 1px solid #000;\n"
"    margin-bottom: -1px;\n"
"    padding-bottom: 1px;\n"
"\n"
"}\n"
"*/\n"
"\n"
"\n"
"/*-----QMenu-----*/\n"
"QMenu\n"
"{\n"
"    background-color: #c4c5c3;\n"
"    border: 1px solid;\n"
"    color: #000000;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 1px;\n"
"    background-color: #363942;\n"
"    color: #ffffff;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item\n"
"{\n"
"    min-width : 150px;\n"
"    padding: 3px 20px 3px 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    background"
                        "-color: #363942;\n"
"    color: #ffffff;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item:disabled\n"
"{\n"
"    color: #898988;\n"
"}\n"
"\n"
"\n"
"/*-----QToolTip-----*/\n"
"QToolTip\n"
"{\n"
"	background-color: #bbbcba;\n"
"	color: #000000;\n"
"	border-color: #051a39;\n"
"	border : 1px solid #000000;\n"
"	border-radius: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:0.486, y1:0, x2:0.505, y2:1, stop:0.00480769 rgba(170, 0, 0, 255),stop:1 rgba(122, 0, 0, 255));\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: #9c0000;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
""
                        "	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #880000;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-radius: 3px;\n"
"	border-color: #000000;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QToolButton-----*/\n"
"QToolButton \n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(177, 181, 193, 255),stop:1 rgba(159, 163, 174, 255));\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::hover\n"
"{\n"
"	background-color: #9fa3ae;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #051a39;\n"
"	padding: 5px;\n"
"\n"
"}\n"
""
                        "\n"
"\n"
"QToolButton::pressed\n"
"{\n"
"	background-color: #7b7e86;\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-radius: 3px;\n"
"	border-color: #000000;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QComboBox-----*/\n"
"QComboBox\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(118, 118, 118, 255),stop:1 rgba(70, 70, 70, 255));\n"
"    border: 1px solid #333333;\n"
"    border-radius: 3px;\n"
"    padding-left: 6px;\n"
"    color: lightgray;\n"
"	font-weight: bold;\n"
"    height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox:hover\n"
"{\n"
"    background-color: #646464;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    background-color: #979796;\n"
"	color: #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    background-color: #c4c5c3;\n"
"    color: #000000;\n"
"  "
                        "  border: 1px solid black;\n"
"    selection-background-color: #363942;\n"
"    selection-color: #ffffff;\n"
"    outline: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; \n"
"    border-top-right-radius: 3px; \n"
"    border-bottom-right-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"}\n"
"\n"
"\n"
"/*-----QSpinBox & QDoubleSpinBox & QDateTimeEdit-----*/\n"
"QSpinBox, \n"
"QDoubleSpinBox,\n"
"QDateTimeEdit\n"
"{\n"
"	background-color: #000000;\n"
"	color: #00ff00;\n"
"	font-weight: bold;\n"
"	border: 1px solid #333333;\n"
"	padding : 4px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::disabled, \n"
"QDoubleSpinBox::disabled,\n"
"QDateTimeEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	b"
                        "order-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox:hover, \n"
"QDoubleSpinBox::hover,\n"
"QDateTimeEdit::hover\n"
"{\n"
"    border: 1px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button, QSpinBox::down-button,\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
"QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(118, 118, 118, 255),stop:1 rgba(70, 70, 70, 255));\n"
"    border: 0px solid #333333;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::disabled, \n"
"QDoubleSpinBox::disabled,\n"
"QDateTimeEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
"QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
"QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
"{\n"
"	background-color: #646464;\n"
"    border: 1px solid #333333;\n"
"\n"
"\n"
""
                        "}\n"
"\n"
"\n"
"QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
"QDoubleSpinBox::up-button:disabled, QDoubleSpinBox::down-button:disabled,\n"
"QDateTimeEdit::up-button:disabled, QDateTimeEdit::down-button:disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button::pressed,\n"
"QDateTimeEdit::up-button:pressed, QDateTimeEdit::down-button::pressed\n"
"{\n"
"    background-color: #979796;\n"
"    border: 1px solid #444444;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::down-arrow,\n"
"QDoubleSpinBox::down-arrow,\n"
"QDateTimeEdit::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 7px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-arrow,\n"
"QDoubleSpinBox::up-arrow,\n"
"QDateTimeEdit::up-arrow\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 7px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QL"
                        "ineEdit\n"
"{\n"
"	background-color: #000000;\n"
"	color: #00ff00;\n"
"	font-weight: bold;\n"
"    border: 1px solid #333333;\n"
"	padding: 4px;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit:hover\n"
"{\n"
"    border: 1px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-width: 1px;\n"
"	border-color: #051a39;\n"
"	padding: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTextEdit-----*/\n"
"QTextEdit\n"
"{\n"
"	background-color: #808080;\n"
"	color: #fff;\n"
"	border: 1px groove #333333;\n"
"\n"
"}\n"
"\n"
"\n"
"QTextEdit::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QGroupBox-----*/\n"
"QGroupBox \n"
"{\n"
"    border: 1px groove #333333;\n"
"	border-radius: 2px;\n"
"    margin-top: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox \n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:0.486, y1:0, x2:0.505, y2:1, stop:0.00480769 rgba(170, 169, 169, 255),stop:1 rgba(1"
                        "22, 122, 122, 255));\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title  \n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(71, 75, 87, 255),stop:1 rgba(35, 37, 43, 255));\n"
"    color: #ffffff;\n"
"    border: 2px groove #333333;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 5px;\n"
"	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox{\n"
"	background-color: transparent;\n"
"	font-weight: bold;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 2px solid #222222;\n"
"    width: 12px;\n"
"    height: 12px;\n"
"\n"
"}\n"
"\n"
"\n"
"Q"
                        "CheckBox::indicator:checked\n"
"{\n"
"    image:url(://checkbox.png);\n"
"    border: 2px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"    border: 2px solid #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 1px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QRadioButton-----*/\n"
"QRadioButton{\n"
"	background-color: transparent;\n"
"	font-weight: bold;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::unchecked\n"
"{ \n"
"	border: 2px inset #222222; \n"
"	border-radius: 6px; \n"
"	background-color:  #323232;\n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::unchecked:hover\n"
"{ \n"
"	border: 2px solid #00ff00; \n"
"	border-radius: 5px; \n"
"	background-color:  #323232;\n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::"
                        "checked\n"
"{ \n"
"	border: 2px inset #222222; \n"
"	border-radius: 5px; \n"
"	background-color: #00ff00; \n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 2px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTableView & QTableWidget-----*/\n"
"QTableView\n"
"{\n"
"    background-color: #808080;\n"
"    border: 1px groove #333333;\n"
"    color: #f0f0f0;\n"
"	font-weight: bold;\n"
"    gridline-color: #333333;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::disabled\n"
"{\n"
"    background-color: #242526;\n"
"    border: 1px solid #32414B;\n"
"    color: #656565;\n"
"    gridline-color: #656565;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:hover \n"
"{\n"
"    background-color: #484c58;\n"
"    color: #f0f0f0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected \n"
"{\n"
"    background-colo"
                        "r: #484c58;\n"
"    border: 2px groove #00ff00;\n"
"    color: #F0F0F0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected:disabled\n"
"{\n"
"    background-color: #1a1b1c;\n"
"    border: 2px solid #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: #282830;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #282830;\n"
"    color: #fff;\n"
"	font-weight: bold;\n"
"    text-align: left;\n"
"	padding: 4px;\n"
"	\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: #00ff00;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked:disabled\n"
"{\n"
"    color: #656565;\n"
"    background-color: #525251;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::"
                        "section::vertical\n"
"{\n"
"    border-top: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTabWidget-----*/\n"
"QTabBar::tab\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"	width: 150px;\n"
"	height: 20px;\n"
"	\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabWidget::pane \n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	border: 1px groove #333333;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    background-color: #484c58;\n"
"	color: #ffffff;\n"
"	border: 1px groove #333333;\n"
"	border-bottom: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected:disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
""
                        "QTabBar::tab:!selected \n"
"{\n"
"    background-color: #a3a7b2;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:!selected:hover \n"
"{\n"
"    background-color: #484c58;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:!selected \n"
"{\n"
"    margin-top: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:bottom:!selected \n"
"{\n"
"    margin-bottom: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom \n"
"{\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:selected \n"
"{\n"
"    border-bottom-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:bottom:selected \n"
"{\n"
"    border-top-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one \n"
"{\n"
"    margin-right: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left:!selected \n"
"{\n"
"    margin-right: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:right:!selected\n"
"{\n"
"    margin-left: 2px;\n"
"\n"
""
                        "}\n"
"\n"
"\n"
"QTabBar::tab:left, QTabBar::tab:right \n"
"{\n"
"    min-height: 15ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left:selected \n"
"{\n"
"    border-left-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:right:selected \n"
"{\n"
"    border-right-color: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one \n"
"{\n"
"    margin-bottom: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QSlider-----*/\n"
"QSlider{\n"
"	background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::groove:horizontal \n"
"{\n"
"	background-color: transparent;\n"
"	height: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:horizontal \n"
"{\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:horizontal \n"
"{\n"
"	back"
                        "ground-color: #404040;\n"
"	border: 1px solid #000; \n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal \n"
"{\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000; \n"
"	width: 12px;\n"
"	margin-top: -6px;\n"
"	margin-bottom: -6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal:hover \n"
"{\n"
"	background-color: #808080;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:horizontal:disabled \n"
"{\n"
"	background-color: #bbb;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:horizontal:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border: 1px solid #aaa;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::groove:vertical \n"
"{\n"
"	background-color: transparent;\n"
"	width: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:vertical \n"
"{\n"
"	background-color: ql"
                        "ineargradient(spread:reflect, x1:0, y1:0.483, x2:1, y2:0.517, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical \n"
"{\n"
"	background-color: #404040;\n"
"	border: 1px solid #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical \n"
"{\n"
"	background-color: qlineargradient(spread:reflect, x1:0, y1:0.483, x2:1, y2:0.517, stop:0.00480769 rgba(201, 201, 201, 255),stop:1 rgba(72, 72, 72, 255));\n"
"	border: 1px solid #000;\n"
"	height: 12px;\n"
"	margin-left: -6px;\n"
"	margin-right: -6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical:hover \n"
"{\n"
"	background-color: #808080;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:vertical:disabled \n"
"{\n"
"	background-color: #bbb;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:vertical:disabled \n"
"{\n"
"	background-color: #"
                        "eee;\n"
"	border: 1px solid #aaa;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QDial-----*/\n"
"QDial\n"
"{\n"
"	background-color: #600000;\n"
"\n"
"}\n"
"\n"
"\n"
"QDial::disabled\n"
"{\n"
"	background-color: #404040;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QScrollBar-----*/\n"
"QScrollBar:horizontal\n"
"{\n"
"    border: 1px solid #222222;\n"
"    background-color: #63676d;\n"
"    height: 18px;\n"
"    margin: 0px 18px 0 18px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"    background-color: #a6acb3;\n"
"	border: 1px solid #656565;\n"
"	border-radius: 2px;\n"
"    min-height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    width: 18px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-line:horizontal\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    width: 18px;\n"
"    subcontrol-position: "
                        "left;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::right-arrow:horizontal\n"
"{\n"
"    image: url(://arrow-right.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::left-arrow:horizontal\n"
"{\n"
"    image: url(://arrow-left.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"    background: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background-color: #63676d;\n"
"    width: 18px;\n"
"    margin: 18px 0 18px 0;\n"
"    border: 1px solid #222222;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background-color: #a6acb3;\n"
"	border: 1px solid #656565;\n"
"	border-radius: 2px;\n"
"    min-height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    height: 18px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: mar"
                        "gin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    background-color: #a6acb3;\n"
"    height: 18px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::up-arrow:vertical\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::down-arrow:vertical\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"    background: none;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QProgressBar-----*/\n"
"QProgressBar\n"
"{\n"
"	background-color: #000;\n"
"	color: #00ff00;\n"
"	font-weight: bold;\n"
"	border: 0px groove #000;\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar:disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"	border: 1px solid #000;\n"
"	"
                        "border-radius: 10px;\n"
"	text-align: center;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar::chunk {\n"
"	background-color: #ffaf02;\n"
"	border: 0px;\n"
"	border-radius: 10px;\n"
"	color: #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar::chunk:disabled {\n"
"	background-color: #333;\n"
"	border: 0px;\n"
"	border-radius: 10px;\n"
"	color: #656565;\n"
"}\n"
"\n"
"\n"
"/*-----QStatusBar-----*/\n"
"QStatusBar\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(102, 115, 140, 255),stop:1 rgba(56, 63, 77, 255));\n"
"	color: #ffffff;\n"
"	border-color: #051a39;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
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
        label_ajouter_emp = new QLabel(page_ajouter);
        label_ajouter_emp->setObjectName(QStringLiteral("label_ajouter_emp"));
        label_ajouter_emp->setGeometry(QRect(10, 0, 171, 41));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_ajouter_emp->setFont(font);
        label_ajouter_emp->setMargin(0);
        label_nom_emp = new QLabel(page_ajouter);
        label_nom_emp->setObjectName(QStringLiteral("label_nom_emp"));
        label_nom_emp->setGeometry(QRect(20, 65, 56, 16));
        label_nom_emp->setFont(font);
        label_adresse_emp = new QLabel(page_ajouter);
        label_adresse_emp->setObjectName(QStringLiteral("label_adresse_emp"));
        label_adresse_emp->setGeometry(QRect(20, 135, 71, 16));
        label_adresse_emp->setFont(font);
        label_prenom_emp = new QLabel(page_ajouter);
        label_prenom_emp->setObjectName(QStringLiteral("label_prenom_emp"));
        label_prenom_emp->setGeometry(QRect(20, 100, 71, 16));
        label_prenom_emp->setFont(font);
        label_tel_emp = new QLabel(page_ajouter);
        label_tel_emp->setObjectName(QStringLiteral("label_tel_emp"));
        label_tel_emp->setGeometry(QRect(20, 170, 101, 16));
        label_tel_emp->setFont(font);
        label_fonc_emp = new QLabel(page_ajouter);
        label_fonc_emp->setObjectName(QStringLiteral("label_fonc_emp"));
        label_fonc_emp->setGeometry(QRect(20, 240, 81, 16));
        label_fonc_emp->setFont(font);
        label_salaire_emp = new QLabel(page_ajouter);
        label_salaire_emp->setObjectName(QStringLiteral("label_salaire_emp"));
        label_salaire_emp->setGeometry(QRect(20, 205, 81, 16));
        label_salaire_emp->setFont(font);
        label_ev_emp = new QLabel(page_ajouter);
        label_ev_emp->setObjectName(QStringLiteral("label_ev_emp"));
        label_ev_emp->setGeometry(QRect(20, 275, 201, 16));
        label_ev_emp->setFont(font);
        lineEdit_nom_emp = new QLineEdit(page_ajouter);
        lineEdit_nom_emp->setObjectName(QStringLiteral("lineEdit_nom_emp"));
        lineEdit_nom_emp->setGeometry(QRect(115, 60, 230, 22));
        lineEdit_prenom_emp = new QLineEdit(page_ajouter);
        lineEdit_prenom_emp->setObjectName(QStringLiteral("lineEdit_prenom_emp"));
        lineEdit_prenom_emp->setGeometry(QRect(115, 95, 230, 22));
        lineEdit_adresse_emp = new QLineEdit(page_ajouter);
        lineEdit_adresse_emp->setObjectName(QStringLiteral("lineEdit_adresse_emp"));
        lineEdit_adresse_emp->setGeometry(QRect(115, 130, 230, 22));
        lineEdit_tel_emp = new QLineEdit(page_ajouter);
        lineEdit_tel_emp->setObjectName(QStringLiteral("lineEdit_tel_emp"));
        lineEdit_tel_emp->setGeometry(QRect(115, 165, 230, 22));
        lineEdit_salaire_emp = new QLineEdit(page_ajouter);
        lineEdit_salaire_emp->setObjectName(QStringLiteral("lineEdit_salaire_emp"));
        lineEdit_salaire_emp->setGeometry(QRect(115, 200, 230, 22));
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
        bouton_valider_emp = new QPushButton(page_ajouter);
        bouton_valider_emp->setObjectName(QStringLiteral("bouton_valider_emp"));
        bouton_valider_emp->setGeometry(QRect(30, 400, 93, 28));
        bouton_valider_emp->setFont(font1);
        comboBox_ajouter_emp = new QComboBox(page_ajouter);
        comboBox_ajouter_emp->setObjectName(QStringLiteral("comboBox_ajouter_emp"));
        comboBox_ajouter_emp->setGeometry(QRect(115, 235, 230, 22));
        bouton_page2_emp = new QPushButton(page_ajouter);
        bouton_page2_emp->setObjectName(QStringLiteral("bouton_page2_emp"));
        bouton_page2_emp->setGeometry(QRect(300, 470, 75, 25));
        bouton_page2_emp->setFont(font1);
        stackedWidget->addWidget(page_ajouter);
        page_modifier = new QWidget();
        page_modifier->setObjectName(QStringLiteral("page_modifier"));
        label_modif_emp = new QLabel(page_modifier);
        label_modif_emp->setObjectName(QStringLiteral("label_modif_emp"));
        label_modif_emp->setGeometry(QRect(10, -10, 341, 41));
        label_modif_emp->setFont(font);
        label_modif_emp->setMargin(0);
        label_nom_emp2 = new QLabel(page_modifier);
        label_nom_emp2->setObjectName(QStringLiteral("label_nom_emp2"));
        label_nom_emp2->setGeometry(QRect(20, 65, 56, 16));
        label_nom_emp2->setFont(font);
        label_prenom_emp2 = new QLabel(page_modifier);
        label_prenom_emp2->setObjectName(QStringLiteral("label_prenom_emp2"));
        label_prenom_emp2->setGeometry(QRect(20, 100, 71, 16));
        label_prenom_emp2->setFont(font);
        label_tel_emp2 = new QLabel(page_modifier);
        label_tel_emp2->setObjectName(QStringLiteral("label_tel_emp2"));
        label_tel_emp2->setGeometry(QRect(20, 170, 101, 16));
        label_tel_emp2->setFont(font);
        label_adresse_emp2 = new QLabel(page_modifier);
        label_adresse_emp2->setObjectName(QStringLiteral("label_adresse_emp2"));
        label_adresse_emp2->setGeometry(QRect(20, 135, 71, 16));
        label_adresse_emp2->setFont(font);
        label_salaire_emp2 = new QLabel(page_modifier);
        label_salaire_emp2->setObjectName(QStringLiteral("label_salaire_emp2"));
        label_salaire_emp2->setGeometry(QRect(20, 205, 81, 16));
        label_salaire_emp2->setFont(font);
        label_fonc_emp2 = new QLabel(page_modifier);
        label_fonc_emp2->setObjectName(QStringLiteral("label_fonc_emp2"));
        label_fonc_emp2->setGeometry(QRect(20, 240, 81, 16));
        label_fonc_emp2->setFont(font);
        label_ev_emp_2 = new QLabel(page_modifier);
        label_ev_emp_2->setObjectName(QStringLiteral("label_ev_emp_2"));
        label_ev_emp_2->setGeometry(QRect(20, 275, 201, 16));
        label_ev_emp_2->setFont(font);
        lineEdit_nom_2_emp = new QLineEdit(page_modifier);
        lineEdit_nom_2_emp->setObjectName(QStringLiteral("lineEdit_nom_2_emp"));
        lineEdit_nom_2_emp->setGeometry(QRect(115, 60, 230, 22));
        lineEdit_prenom_2_emp = new QLineEdit(page_modifier);
        lineEdit_prenom_2_emp->setObjectName(QStringLiteral("lineEdit_prenom_2_emp"));
        lineEdit_prenom_2_emp->setGeometry(QRect(115, 95, 230, 22));
        lineEdit_adresse_2_emp = new QLineEdit(page_modifier);
        lineEdit_adresse_2_emp->setObjectName(QStringLiteral("lineEdit_adresse_2_emp"));
        lineEdit_adresse_2_emp->setGeometry(QRect(115, 130, 230, 22));
        lineEdit_tel_2_emp = new QLineEdit(page_modifier);
        lineEdit_tel_2_emp->setObjectName(QStringLiteral("lineEdit_tel_2_emp"));
        lineEdit_tel_2_emp->setGeometry(QRect(115, 165, 230, 22));
        lineEdit_salaire_2_emp = new QLineEdit(page_modifier);
        lineEdit_salaire_2_emp->setObjectName(QStringLiteral("lineEdit_salaire_2_emp"));
        lineEdit_salaire_2_emp->setGeometry(QRect(115, 200, 230, 22));
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
        bouton_modifier_emp = new QPushButton(page_modifier);
        bouton_modifier_emp->setObjectName(QStringLiteral("bouton_modifier_emp"));
        bouton_modifier_emp->setGeometry(QRect(70, 370, 93, 28));
        bouton_modifier_emp->setFont(font1);
        bouton_annuler_mdf = new QPushButton(page_modifier);
        bouton_annuler_mdf->setObjectName(QStringLiteral("bouton_annuler_mdf"));
        bouton_annuler_mdf->setGeometry(QRect(200, 370, 93, 28));
        bouton_annuler_mdf->setFont(font1);
        comboBox_modifier_employe = new QComboBox(page_modifier);
        comboBox_modifier_employe->setObjectName(QStringLiteral("comboBox_modifier_employe"));
        comboBox_modifier_employe->setGeometry(QRect(115, 235, 200, 22));
        label_supp_emp = new QLabel(page_modifier);
        label_supp_emp->setObjectName(QStringLiteral("label_supp_emp"));
        label_supp_emp->setGeometry(QRect(10, 395, 191, 41));
        label_supp_emp->setFont(font);
        label_supp_emp->setMargin(0);
        label_mat_supp_emp = new QLabel(page_modifier);
        label_mat_supp_emp->setObjectName(QStringLiteral("label_mat_supp_emp"));
        label_mat_supp_emp->setGeometry(QRect(20, 435, 91, 21));
        label_mat_supp_emp->setFont(font);
        bouton_supprimer_emp = new QPushButton(page_modifier);
        bouton_supprimer_emp->setObjectName(QStringLiteral("bouton_supprimer_emp"));
        bouton_supprimer_emp->setGeometry(QRect(230, 435, 93, 26));
        bouton_supprimer_emp->setFont(font1);
        bouton_page1_emp = new QPushButton(page_modifier);
        bouton_page1_emp->setObjectName(QStringLiteral("bouton_page1_emp"));
        bouton_page1_emp->setGeometry(QRect(220, 470, 75, 25));
        bouton_page1_emp->setFont(font1);
        labelmodif_matricule = new QLabel(page_modifier);
        labelmodif_matricule->setObjectName(QStringLiteral("labelmodif_matricule"));
        labelmodif_matricule->setGeometry(QRect(20, 30, 91, 16));
        labelmodif_matricule->setFont(font);
        lineEdit_mat_modif = new QLineEdit(page_modifier);
        lineEdit_mat_modif->setObjectName(QStringLiteral("lineEdit_mat_modif"));
        lineEdit_mat_modif->setGeometry(QRect(115, 30, 100, 22));
        bouton_mat_modifier = new QPushButton(page_modifier);
        bouton_mat_modifier->setObjectName(QStringLiteral("bouton_mat_modifier"));
        bouton_mat_modifier->setGeometry(QRect(230, 30, 93, 22));
        bouton_mat_modifier->setFont(font1);
        comboBox_supression_emp = new QComboBox(page_modifier);
        comboBox_supression_emp->setObjectName(QStringLiteral("comboBox_supression_emp"));
        comboBox_supression_emp->setGeometry(QRect(115, 435, 100, 25));
        boutonpg_2_vers_3_emp = new QPushButton(page_modifier);
        boutonpg_2_vers_3_emp->setObjectName(QStringLiteral("boutonpg_2_vers_3_emp"));
        boutonpg_2_vers_3_emp->setGeometry(QRect(300, 470, 75, 25));
        boutonpg_2_vers_3_emp->setFont(font1);
        stackedWidget->addWidget(page_modifier);
        page_fonct_avance = new QWidget();
        page_fonct_avance->setObjectName(QStringLiteral("page_fonct_avance"));
        label_tri_et_rech = new QLabel(page_fonct_avance);
        label_tri_et_rech->setObjectName(QStringLiteral("label_tri_et_rech"));
        label_tri_et_rech->setGeometry(QRect(10, -5, 341, 41));
        label_tri_et_rech->setFont(font);
        label_tri_et_rech->setMargin(0);
        tab_employes_tri = new QTableView(page_fonct_avance);
        tab_employes_tri->setObjectName(QStringLiteral("tab_employes_tri"));
        tab_employes_tri->setGeometry(QRect(10, 70, 351, 191));
        label_trierselon = new QLabel(page_fonct_avance);
        label_trierselon->setObjectName(QStringLiteral("label_trierselon"));
        label_trierselon->setGeometry(QRect(10, 25, 111, 41));
        label_trierselon->setFont(font);
        label_trierselon->setMargin(0);
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
        label_rech_selon = new QLabel(page_fonct_avance);
        label_rech_selon->setObjectName(QStringLiteral("label_rech_selon"));
        label_rech_selon->setGeometry(QRect(10, 260, 221, 41));
        label_rech_selon->setFont(font);
        label_rech_selon->setMargin(0);
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
        boutonpg_3_vers_2_emp = new QPushButton(page_fonct_avance);
        boutonpg_3_vers_2_emp->setObjectName(QStringLiteral("boutonpg_3_vers_2_emp"));
        boutonpg_3_vers_2_emp->setGeometry(QRect(220, 470, 75, 25));
        boutonpg_3_vers_2_emp->setFont(font1);
        lineEdit_recherche_emp = new QLineEdit(page_fonct_avance);
        lineEdit_recherche_emp->setObjectName(QStringLiteral("lineEdit_recherche_emp"));
        lineEdit_recherche_emp->setGeometry(QRect(20, 325, 331, 22));
        tab_recherche_emp = new QTableView(page_fonct_avance);
        tab_recherche_emp->setObjectName(QStringLiteral("tab_recherche_emp"));
        tab_recherche_emp->setGeometry(QRect(10, 355, 351, 110));
        boutonpg_3_vers_4_emp = new QPushButton(page_fonct_avance);
        boutonpg_3_vers_4_emp->setObjectName(QStringLiteral("boutonpg_3_vers_4_emp"));
        boutonpg_3_vers_4_emp->setGeometry(QRect(300, 470, 75, 25));
        boutonpg_3_vers_4_emp->setFont(font1);
        stackedWidget->addWidget(page_fonct_avance);
        page_gestion_profils = new QWidget();
        page_gestion_profils->setObjectName(QStringLiteral("page_gestion_profils"));
        boutonpg_4_vers_3_emp = new QPushButton(page_gestion_profils);
        boutonpg_4_vers_3_emp->setObjectName(QStringLiteral("boutonpg_4_vers_3_emp"));
        boutonpg_4_vers_3_emp->setGeometry(QRect(220, 470, 75, 25));
        boutonpg_4_vers_3_emp->setFont(font1);
        label_gestion_profils = new QLabel(page_gestion_profils);
        label_gestion_profils->setObjectName(QStringLiteral("label_gestion_profils"));
        label_gestion_profils->setGeometry(QRect(10, -5, 351, 41));
        label_gestion_profils->setFont(font);
        label_gestion_profils->setMargin(0);
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
        label_rq_gestion_profil = new QLabel(page_gestion_profils);
        label_rq_gestion_profil->setObjectName(QStringLiteral("label_rq_gestion_profil"));
        label_rq_gestion_profil->setGeometry(QRect(10, 45, 371, 41));
        label_rq_gestion_profil->setFont(font2);
        label_rq_gestion_profil->setTextFormat(Qt::AutoText);
        label_rq_gestion_profil->setMargin(0);
        label_12 = new QLabel(page_gestion_profils);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 65, 371, 41));
        label_12->setFont(font2);
        label_12->setTextFormat(Qt::AutoText);
        label_12->setMargin(0);
        label_ajouter_profil = new QLabel(page_gestion_profils);
        label_ajouter_profil->setObjectName(QStringLiteral("label_ajouter_profil"));
        label_ajouter_profil->setGeometry(QRect(10, 90, 351, 41));
        label_ajouter_profil->setFont(font);
        label_ajouter_profil->setMargin(0);
        label_profil_matricule = new QLabel(page_gestion_profils);
        label_profil_matricule->setObjectName(QStringLiteral("label_profil_matricule"));
        label_profil_matricule->setGeometry(QRect(10, 130, 91, 21));
        label_profil_matricule->setFont(font);
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
        label_login_profil = new QLabel(page_gestion_profils);
        label_login_profil->setObjectName(QStringLiteral("label_login_profil"));
        label_login_profil->setGeometry(QRect(10, 165, 91, 21));
        label_login_profil->setFont(font);
        label_mp_profil = new QLabel(page_gestion_profils);
        label_mp_profil->setObjectName(QStringLiteral("label_mp_profil"));
        label_mp_profil->setGeometry(QRect(10, 195, 111, 21));
        label_mp_profil->setFont(font);
        bouton_ajouter_profil = new QPushButton(page_gestion_profils);
        bouton_ajouter_profil->setObjectName(QStringLiteral("bouton_ajouter_profil"));
        bouton_ajouter_profil->setGeometry(QRect(240, 195, 93, 25));
        bouton_ajouter_profil->setFont(font1);
        label_modif_profil = new QLabel(page_gestion_profils);
        label_modif_profil->setObjectName(QStringLiteral("label_modif_profil"));
        label_modif_profil->setGeometry(QRect(10, 225, 351, 41));
        label_modif_profil->setFont(font);
        label_modif_profil->setMargin(0);
        label_login_mofif_emp = new QLabel(page_gestion_profils);
        label_login_mofif_emp->setObjectName(QStringLiteral("label_login_mofif_emp"));
        label_login_mofif_emp->setGeometry(QRect(10, 260, 91, 21));
        label_login_mofif_emp->setFont(font);
        label_mp_modif_emp = new QLabel(page_gestion_profils);
        label_mp_modif_emp->setObjectName(QStringLiteral("label_mp_modif_emp"));
        label_mp_modif_emp->setGeometry(QRect(10, 290, 191, 21));
        label_mp_modif_emp->setFont(font);
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
        label_supp_profil = new QLabel(page_gestion_profils);
        label_supp_profil->setObjectName(QStringLiteral("label_supp_profil"));
        label_supp_profil->setGeometry(QRect(10, 345, 351, 41));
        label_supp_profil->setFont(font);
        label_supp_profil->setMargin(0);
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
        label_liste_emp = new QLabel(tab);
        label_liste_emp->setObjectName(QStringLiteral("label_liste_emp"));
        label_liste_emp->setGeometry(QRect(430, 0, 351, 41));
        label_liste_emp->setFont(font);
        label_liste_emp->setMargin(0);
        label_employe_connecte = new QLabel(tab);
        label_employe_connecte->setObjectName(QStringLiteral("label_employe_connecte"));
        label_employe_connecte->setGeometry(QRect(20, 0, 281, 41));
        label_employe_connecte->setFont(font);
        label_employe_connecte->setMargin(0);
        boutonConnexionChat = new QPushButton(tab);
        boutonConnexionChat->setObjectName(QStringLiteral("boutonConnexionChat"));
        boutonConnexionChat->setGeometry(QRect(460, 340, 341, 31));
        boutonConnexionChat->setFont(font1);
        listeMessages = new QTextEdit(tab);
        listeMessages->setObjectName(QStringLiteral("listeMessages"));
        listeMessages->setGeometry(QRect(420, 380, 461, 201));
        listeMessages->setReadOnly(true);
        boutonEnvoyerChat = new QPushButton(tab);
        boutonEnvoyerChat->setObjectName(QStringLiteral("boutonEnvoyerChat"));
        boutonEnvoyerChat->setGeometry(QRect(820, 600, 71, 41));
        boutonEnvoyerChat->setFont(font1);
        messageChat = new QLineEdit(tab);
        messageChat->setObjectName(QStringLiteral("messageChat"));
        messageChat->setGeometry(QRect(579, 590, 231, 51));
        pseudoChat = new QLineEdit(tab);
        pseudoChat->setObjectName(QStringLiteral("pseudoChat"));
        pseudoChat->setGeometry(QRect(430, 610, 141, 31));
        label_login_chat = new QLabel(tab);
        label_login_chat->setObjectName(QStringLiteral("label_login_chat"));
        label_login_chat->setGeometry(QRect(430, 590, 141, 16));
        label_login_chat->setFont(font2);
        label_bulletin_paie = new QLabel(tab);
        label_bulletin_paie->setObjectName(QStringLiteral("label_bulletin_paie"));
        label_bulletin_paie->setGeometry(QRect(20, 540, 221, 41));
        label_bulletin_paie->setFont(font);
        label_bulletin_paie->setMargin(0);
        label_matricule_pdf = new QLabel(tab);
        label_matricule_pdf->setObjectName(QStringLiteral("label_matricule_pdf"));
        label_matricule_pdf->setGeometry(QRect(20, 580, 91, 21));
        label_matricule_pdf->setFont(font);
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
        tabWidgetClient = new QTabWidget(tab_2);
        tabWidgetClient->setObjectName(QStringLiteral("tabWidgetClient"));
        tabWidgetClient->setGeometry(QRect(0, 0, 1081, 671));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        groupBoxClient = new QGroupBox(tab_6);
        groupBoxClient->setObjectName(QStringLiteral("groupBoxClient"));
        groupBoxClient->setGeometry(QRect(120, 80, 741, 411));
        labelidclient = new QLabel(groupBoxClient);
        labelidclient->setObjectName(QStringLiteral("labelidclient"));
        labelidclient->setGeometry(QRect(20, 50, 81, 16));
        labelnomclient = new QLabel(groupBoxClient);
        labelnomclient->setObjectName(QStringLiteral("labelnomclient"));
        labelnomclient->setGeometry(QRect(20, 90, 111, 16));
        labelprenomclient = new QLabel(groupBoxClient);
        labelprenomclient->setObjectName(QStringLiteral("labelprenomclient"));
        labelprenomclient->setGeometry(QRect(20, 130, 131, 16));
        labeladresseclient = new QLabel(groupBoxClient);
        labeladresseclient->setObjectName(QStringLiteral("labeladresseclient"));
        labeladresseclient->setGeometry(QRect(20, 170, 121, 16));
        labeltelclient = new QLabel(groupBoxClient);
        labeltelclient->setObjectName(QStringLiteral("labeltelclient"));
        labeltelclient->setGeometry(QRect(20, 220, 161, 16));
        labeldateclient = new QLabel(groupBoxClient);
        labeldateclient->setObjectName(QStringLiteral("labeldateclient"));
        labeldateclient->setGeometry(QRect(20, 300, 161, 16));
        le_idclient = new QLineEdit(groupBoxClient);
        le_idclient->setObjectName(QStringLiteral("le_idclient"));
        le_idclient->setGeometry(QRect(230, 40, 221, 22));
        le_nomclient = new QLineEdit(groupBoxClient);
        le_nomclient->setObjectName(QStringLiteral("le_nomclient"));
        le_nomclient->setGeometry(QRect(230, 90, 221, 22));
        le_prenomclient = new QLineEdit(groupBoxClient);
        le_prenomclient->setObjectName(QStringLiteral("le_prenomclient"));
        le_prenomclient->setGeometry(QRect(230, 130, 221, 22));
        le_adresseclient = new QLineEdit(groupBoxClient);
        le_adresseclient->setObjectName(QStringLiteral("le_adresseclient"));
        le_adresseclient->setGeometry(QRect(230, 170, 221, 31));
        le_telclient = new QLineEdit(groupBoxClient);
        le_telclient->setObjectName(QStringLiteral("le_telclient"));
        le_telclient->setGeometry(QRect(230, 220, 221, 22));
        dateclient = new QDateTimeEdit(groupBoxClient);
        dateclient->setObjectName(QStringLiteral("dateclient"));
        dateclient->setGeometry(QRect(230, 300, 221, 22));
        labelnbclient = new QLabel(groupBoxClient);
        labelnbclient->setObjectName(QStringLiteral("labelnbclient"));
        labelnbclient->setGeometry(QRect(20, 260, 171, 20));
        le_nbserviceclient = new QLineEdit(groupBoxClient);
        le_nbserviceclient->setObjectName(QStringLiteral("le_nbserviceclient"));
        le_nbserviceclient->setGeometry(QRect(230, 260, 221, 21));
        buttonajoutclient = new QDialogButtonBox(groupBoxClient);
        buttonajoutclient->setObjectName(QStringLiteral("buttonajoutclient"));
        buttonajoutclient->setGeometry(QRect(40, 340, 341, 32));
        buttonajoutclient->setOrientation(Qt::Horizontal);
        buttonajoutclient->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        optioncamclient = new QPushButton(groupBoxClient);
        optioncamclient->setObjectName(QStringLiteral("optioncamclient"));
        optioncamclient->setGeometry(QRect(520, 120, 151, 34));
        optioncamclient->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        scrollAreaclient = new QScrollArea(groupBoxClient);
        scrollAreaclient->setObjectName(QStringLiteral("scrollAreaclient"));
        scrollAreaclient->setGeometry(QRect(500, 180, 191, 151));
        scrollAreaclient->setStyleSheet(QLatin1String("QscrollArea\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #000000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        scrollAreaclient->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 189, 149));
        scrollAreaclient->setWidget(scrollAreaWidgetContents);
        arduinoclient = new QPushButton(groupBoxClient);
        arduinoclient->setObjectName(QStringLiteral("arduinoclient"));
        arduinoclient->setGeometry(QRect(80, 370, 93, 28));
        tabWidgetClient->addTab(tab_6, QString());
        tabWidgetafficherclient = new QWidget();
        tabWidgetafficherclient->setObjectName(QStringLiteral("tabWidgetafficherclient"));
        tab_client = new QTableView(tabWidgetafficherclient);
        tab_client->setObjectName(QStringLiteral("tab_client"));
        tab_client->setGeometry(QRect(10, 40, 651, 411));
        trieparNomclient = new QRadioButton(tabWidgetafficherclient);
        trieparNomclient->setObjectName(QStringLiteral("trieparNomclient"));
        trieparNomclient->setGeometry(QRect(170, 450, 121, 20));
        trieparDateclient = new QRadioButton(tabWidgetafficherclient);
        trieparDateclient->setObjectName(QStringLiteral("trieparDateclient"));
        trieparDateclient->setGeometry(QRect(310, 450, 231, 20));
        trieparIdclient = new QRadioButton(tabWidgetafficherclient);
        trieparIdclient->setObjectName(QStringLiteral("trieparIdclient"));
        trieparIdclient->setGeometry(QRect(50, 450, 101, 20));
        rechercheclient = new QLineEdit(tabWidgetafficherclient);
        rechercheclient->setObjectName(QStringLiteral("rechercheclient"));
        rechercheclient->setGeometry(QRect(160, 510, 231, 22));
        frame = new QFrame(tabWidgetafficherclient);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(130, 480, 291, 21));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        labelrechclient = new QLabel(frame);
        labelrechclient->setObjectName(QStringLiteral("labelrechclient"));
        labelrechclient->setGeometry(QRect(30, 0, 231, 16));
        afficherstatclient = new QPushButton(tabWidgetafficherclient);
        afficherstatclient->setObjectName(QStringLiteral("afficherstatclient"));
        afficherstatclient->setGeometry(QRect(670, 30, 281, 28));
        qrcodeButton = new QPushButton(tabWidgetafficherclient);
        qrcodeButton->setObjectName(QStringLiteral("qrcodeButton"));
        qrcodeButton->setGeometry(QRect(670, 70, 281, 28));
        qrcodeLabel = new QLabel(tabWidgetafficherclient);
        qrcodeLabel->setObjectName(QStringLiteral("qrcodeLabel"));
        qrcodeLabel->setGeometry(QRect(700, 140, 271, 231));
        labelclientqr = new QLabel(tabWidgetafficherclient);
        labelclientqr->setObjectName(QStringLiteral("labelclientqr"));
        labelclientqr->setGeometry(QRect(670, 100, 321, 16));
        tabWidgetClient->addTab(tabWidgetafficherclient, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        groupBox_2 = new QGroupBox(tab_7);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(170, 60, 651, 431));
        labelclient_5 = new QLabel(groupBox_2);
        labelclient_5->setObjectName(QStringLiteral("labelclient_5"));
        labelclient_5->setGeometry(QRect(20, 50, 81, 16));
        labelclient = new QLabel(groupBox_2);
        labelclient->setObjectName(QStringLiteral("labelclient"));
        labelclient->setGeometry(QRect(20, 90, 111, 16));
        labelclient_2 = new QLabel(groupBox_2);
        labelclient_2->setObjectName(QStringLiteral("labelclient_2"));
        labelclient_2->setGeometry(QRect(20, 130, 131, 16));
        labelclient_4 = new QLabel(groupBox_2);
        labelclient_4->setObjectName(QStringLiteral("labelclient_4"));
        labelclient_4->setGeometry(QRect(20, 170, 121, 16));
        labelclient_3 = new QLabel(groupBox_2);
        labelclient_3->setObjectName(QStringLiteral("labelclient_3"));
        labelclient_3->setGeometry(QRect(20, 220, 161, 16));
        labelclient_6 = new QLabel(groupBox_2);
        labelclient_6->setObjectName(QStringLiteral("labelclient_6"));
        labelclient_6->setGeometry(QRect(20, 300, 161, 16));
        m_idclient = new QLineEdit(groupBox_2);
        m_idclient->setObjectName(QStringLiteral("m_idclient"));
        m_idclient->setGeometry(QRect(230, 40, 221, 22));
        m_nomclient = new QLineEdit(groupBox_2);
        m_nomclient->setObjectName(QStringLiteral("m_nomclient"));
        m_nomclient->setGeometry(QRect(230, 90, 221, 22));
        m_prenomclient = new QLineEdit(groupBox_2);
        m_prenomclient->setObjectName(QStringLiteral("m_prenomclient"));
        m_prenomclient->setGeometry(QRect(230, 130, 221, 22));
        m_adresseclient = new QLineEdit(groupBox_2);
        m_adresseclient->setObjectName(QStringLiteral("m_adresseclient"));
        m_adresseclient->setGeometry(QRect(230, 170, 221, 31));
        m_telclient = new QLineEdit(groupBox_2);
        m_telclient->setObjectName(QStringLiteral("m_telclient"));
        m_telclient->setGeometry(QRect(230, 220, 221, 22));
        m_dateclient = new QDateTimeEdit(groupBox_2);
        m_dateclient->setObjectName(QStringLiteral("m_dateclient"));
        m_dateclient->setGeometry(QRect(230, 300, 221, 22));
        labelclient_7 = new QLabel(groupBox_2);
        labelclient_7->setObjectName(QStringLiteral("labelclient_7"));
        labelclient_7->setGeometry(QRect(20, 260, 171, 20));
        m_nbserviceclient = new QLineEdit(groupBox_2);
        m_nbserviceclient->setObjectName(QStringLiteral("m_nbserviceclient"));
        m_nbserviceclient->setGeometry(QRect(230, 260, 221, 21));
        buttonBox_Visite_modif = new QDialogButtonBox(groupBox_2);
        buttonBox_Visite_modif->setObjectName(QStringLiteral("buttonBox_Visite_modif"));
        buttonBox_Visite_modif->setGeometry(QRect(90, 360, 341, 32));
        buttonBox_Visite_modif->setOrientation(Qt::Horizontal);
        buttonBox_Visite_modif->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        boutonsuppclient = new QPushButton(groupBox_2);
        boutonsuppclient->setObjectName(QStringLiteral("boutonsuppclient"));
        boutonsuppclient->setGeometry(QRect(500, 360, 93, 28));
        tabWidgetClient->addTab(tab_7, QString());
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_2 = new QTabWidget(tab_3);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 1091, 681));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        groupBox_3 = new QGroupBox(tab_8);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(200, 50, 651, 431));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 40, 81, 16));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 90, 91, 16));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 140, 91, 16));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 180, 141, 16));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 220, 91, 16));
        le_id = new QLineEdit(groupBox_3);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(230, 40, 221, 22));
        lineEdit_nomservice = new QLineEdit(groupBox_3);
        lineEdit_nomservice->setObjectName(QStringLiteral("lineEdit_nomservice"));
        lineEdit_nomservice->setGeometry(QRect(230, 90, 221, 22));
        lineEdit_typeservice = new QLineEdit(groupBox_3);
        lineEdit_typeservice->setObjectName(QStringLiteral("lineEdit_typeservice"));
        lineEdit_typeservice->setGeometry(QRect(230, 140, 221, 22));
        lineEdit_emplacementservice = new QLineEdit(groupBox_3);
        lineEdit_emplacementservice->setObjectName(QStringLiteral("lineEdit_emplacementservice"));
        lineEdit_emplacementservice->setGeometry(QRect(230, 180, 221, 22));
        lineEdit_prixservice = new QLineEdit(groupBox_3);
        lineEdit_prixservice->setObjectName(QStringLiteral("lineEdit_prixservice"));
        lineEdit_prixservice->setGeometry(QRect(230, 220, 221, 22));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 260, 131, 20));
        lineEdit_descriptionservice = new QLineEdit(groupBox_3);
        lineEdit_descriptionservice->setObjectName(QStringLiteral("lineEdit_descriptionservice"));
        lineEdit_descriptionservice->setGeometry(QRect(230, 260, 221, 21));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 300, 111, 20));
        dateEdit = new QDateEdit(groupBox_3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(230, 300, 110, 22));
        ajouterservice = new QPushButton(groupBox_3);
        ajouterservice->setObjectName(QStringLiteral("ajouterservice"));
        ajouterservice->setGeometry(QRect(410, 350, 93, 28));
        tabWidget_2->addTab(tab_8, QString());
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QStringLiteral("tabWidgetPage1"));
        tableservice = new QTableView(tabWidgetPage1);
        tableservice->setObjectName(QStringLiteral("tableservice"));
        tableservice->setGeometry(QRect(10, 70, 501, 411));
        lineEdit_recherche = new QLineEdit(tabWidgetPage1);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(110, 30, 141, 22));
        Tri = new QComboBox(tabWidgetPage1);
        Tri->setObjectName(QStringLiteral("Tri"));
        Tri->setGeometry(QRect(340, 30, 73, 22));
        label_18 = new QLabel(tabWidgetPage1);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 30, 81, 20));
        label_19 = new QLabel(tabWidgetPage1);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(290, 30, 31, 20));
        groupBox_5 = new QGroupBox(tabWidgetPage1);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(520, 50, 491, 431));
        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 40, 81, 16));
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(20, 90, 91, 16));
        label_22 = new QLabel(groupBox_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(20, 140, 91, 16));
        label_23 = new QLabel(groupBox_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(20, 180, 151, 16));
        label_24 = new QLabel(groupBox_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(20, 220, 81, 16));
        lineEdit_idservice_3 = new QLineEdit(groupBox_5);
        lineEdit_idservice_3->setObjectName(QStringLiteral("lineEdit_idservice_3"));
        lineEdit_idservice_3->setGeometry(QRect(230, 40, 221, 22));
        lineEdit_nomservice_3 = new QLineEdit(groupBox_5);
        lineEdit_nomservice_3->setObjectName(QStringLiteral("lineEdit_nomservice_3"));
        lineEdit_nomservice_3->setGeometry(QRect(230, 90, 221, 22));
        lineEdit_typeservice_3 = new QLineEdit(groupBox_5);
        lineEdit_typeservice_3->setObjectName(QStringLiteral("lineEdit_typeservice_3"));
        lineEdit_typeservice_3->setGeometry(QRect(230, 140, 221, 22));
        lineEdit_emplacementservice_3 = new QLineEdit(groupBox_5);
        lineEdit_emplacementservice_3->setObjectName(QStringLiteral("lineEdit_emplacementservice_3"));
        lineEdit_emplacementservice_3->setGeometry(QRect(230, 180, 221, 22));
        lineEdit_prixservice_3 = new QLineEdit(groupBox_5);
        lineEdit_prixservice_3->setObjectName(QStringLiteral("lineEdit_prixservice_3"));
        lineEdit_prixservice_3->setGeometry(QRect(230, 220, 221, 22));
        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 260, 141, 20));
        lineEdit_descriptionservice_3 = new QLineEdit(groupBox_5);
        lineEdit_descriptionservice_3->setObjectName(QStringLiteral("lineEdit_descriptionservice_3"));
        lineEdit_descriptionservice_3->setGeometry(QRect(230, 260, 221, 21));
        supprimerservice = new QPushButton(groupBox_5);
        supprimerservice->setObjectName(QStringLiteral("supprimerservice"));
        supprimerservice->setGeometry(QRect(330, 350, 93, 28));
        dateEdit_3 = new QDateEdit(groupBox_5);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));
        dateEdit_3->setGeometry(QRect(230, 300, 110, 22));
        label_41 = new QLabel(groupBox_5);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(20, 300, 91, 20));
        modifierservice = new QPushButton(groupBox_5);
        modifierservice->setObjectName(QStringLiteral("modifierservice"));
        modifierservice->setGeometry(QRect(210, 350, 93, 28));
        tabWidget_2->addTab(tabWidgetPage1, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_42 = new QLabel(tab_10);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(40, 40, 331, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_42->setFont(font3);
        buttonBox_supprimerS = new QDialogButtonBox(tab_10);
        buttonBox_supprimerS->setObjectName(QStringLiteral("buttonBox_supprimerS"));
        buttonBox_supprimerS->setGeometry(QRect(390, 60, 81, 61));
        buttonBox_supprimerS->setOrientation(Qt::Vertical);
        buttonBox_supprimerS->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        histoservice = new QLineEdit(tab_10);
        histoservice->setObjectName(QStringLiteral("histoservice"));
        histoservice->setGeometry(QRect(40, 80, 301, 31));
        line = new QFrame(tab_10);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 150, 501, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(tab_10);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 10, 501, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        lineEdit_mail = new QLineEdit(tab_10);
        lineEdit_mail->setObjectName(QStringLiteral("lineEdit_mail"));
        lineEdit_mail->setGeometry(QRect(40, 220, 301, 31));
        envoyer = new QPushButton(tab_10);
        envoyer->setObjectName(QStringLiteral("envoyer"));
        envoyer->setGeometry(QRect(370, 220, 93, 31));
        label_43 = new QLabel(tab_10);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(40, 190, 111, 16));
        label_44 = new QLabel(tab_10);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(40, 260, 111, 16));
        textEdit = new QTextEdit(tab_10);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 290, 311, 111));
        tabWidget_2->addTab(tab_10, QString());
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        recherche_fournisseur = new QLineEdit(tab_4);
        recherche_fournisseur->setObjectName(QStringLiteral("recherche_fournisseur"));
        recherche_fournisseur->setGeometry(QRect(650, 30, 301, 22));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(500, 30, 91, 16));
        tabfourn = new QTableView(tab_4);
        tabfourn->setObjectName(QStringLiteral("tabfourn"));
        tabfourn->setGeometry(QRect(510, 60, 491, 281));
        teltriefournisseur = new QRadioButton(tab_4);
        teltriefournisseur->setObjectName(QStringLiteral("teltriefournisseur"));
        teltriefournisseur->setGeometry(QRect(840, 360, 97, 20));
        nomtriefournisseur = new QRadioButton(tab_4);
        nomtriefournisseur->setObjectName(QStringLiteral("nomtriefournisseur"));
        nomtriefournisseur->setGeometry(QRect(690, 360, 97, 20));
        idtriefournisseur = new QRadioButton(tab_4);
        idtriefournisseur->setObjectName(QStringLiteral("idtriefournisseur"));
        idtriefournisseur->setGeometry(QRect(540, 360, 97, 20));
        localisation_f = new QPushButton(tab_4);
        localisation_f->setObjectName(QStringLiteral("localisation_f"));
        localisation_f->setGeometry(QRect(710, 390, 111, 28));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(510, 420, 501, 16));
        excel_f = new QPushButton(tab_4);
        excel_f->setObjectName(QStringLiteral("excel_f"));
        excel_f->setGeometry(QRect(770, 440, 111, 28));
        stackedWidget_2 = new QStackedWidget(tab_4);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(0, 10, 501, 481));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 481, 291));
        idfournisseur = new QLineEdit(groupBox);
        idfournisseur->setObjectName(QStringLiteral("idfournisseur"));
        idfournisseur->setGeometry(QRect(180, 50, 113, 22));
        nomfournisseur = new QLineEdit(groupBox);
        nomfournisseur->setObjectName(QStringLiteral("nomfournisseur"));
        nomfournisseur->setGeometry(QRect(180, 90, 113, 22));
        prenomfournisseur = new QLineEdit(groupBox);
        prenomfournisseur->setObjectName(QStringLiteral("prenomfournisseur"));
        prenomfournisseur->setGeometry(QRect(180, 130, 113, 22));
        adressefournisseur = new QLineEdit(groupBox);
        adressefournisseur->setObjectName(QStringLiteral("adressefournisseur"));
        adressefournisseur->setGeometry(QRect(180, 160, 291, 22));
        emailfournisseur = new QLineEdit(groupBox);
        emailfournisseur->setObjectName(QStringLiteral("emailfournisseur"));
        emailfournisseur->setGeometry(QRect(180, 240, 191, 22));
        telephonefournisseur = new QLineEdit(groupBox);
        telephonefournisseur->setObjectName(QStringLiteral("telephonefournisseur"));
        telephonefournisseur->setGeometry(QRect(180, 200, 191, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 101, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 121, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 141, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 170, 151, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 240, 131, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 200, 151, 20));
        ajouter_f = new QPushButton(page);
        ajouter_f->setObjectName(QStringLiteral("ajouter_f"));
        ajouter_f->setGeometry(QRect(30, 370, 93, 28));
        modifier_f = new QPushButton(page);
        modifier_f->setObjectName(QStringLiteral("modifier_f"));
        modifier_f->setGeometry(QRect(160, 370, 93, 28));
        musique = new QPushButton(page);
        musique->setObjectName(QStringLiteral("musique"));
        musique->setGeometry(QRect(20, 0, 31, 31));
        musique->setStyleSheet(QStringLiteral("font: 75 14pt \"MS Shell Dlg 2\";"));
        arduinoproduit = new QPushButton(page);
        arduinoproduit->setObjectName(QStringLiteral("arduinoproduit"));
        arduinoproduit->setGeometry(QRect(350, 430, 93, 28));
        supprimer_f = new QPushButton(page);
        supprimer_f->setObjectName(QStringLiteral("supprimer_f"));
        supprimer_f->setGeometry(QRect(290, 370, 93, 28));
        stackedWidget_2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_4 = new QGroupBox(page_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(-10, 0, 561, 511));
        stackedWidget_2->addWidget(page_2);
        label_45 = new QLabel(tab_4);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(510, 450, 241, 16));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_10 = new QGroupBox(tab_5);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(470, 10, 391, 151));
        Digtal_clock = new QLabel(groupBox_10);
        Digtal_clock->setObjectName(QStringLiteral("Digtal_clock"));
        Digtal_clock->setGeometry(QRect(10, 20, 211, 81));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        Digtal_clock->setFont(font4);
        DateTime = new QLabel(groupBox_10);
        DateTime->setObjectName(QStringLiteral("DateTime"));
        DateTime->setGeometry(QRect(40, 70, 341, 71));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        DateTime->setFont(font5);
        modenuit = new QRadioButton(tab_5);
        modenuit->setObjectName(QStringLiteral("modenuit"));
        modenuit->setGeometry(QRect(890, 50, 97, 20));
        label_40 = new QLabel(tab_5);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(890, 120, 111, 16));
        rechercheproduit = new QLineEdit(tab_5);
        rechercheproduit->setObjectName(QStringLiteral("rechercheproduit"));
        rechercheproduit->setGeometry(QRect(870, 150, 141, 22));
        tableView = new QTableView(tab_5);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(470, 180, 541, 151));
        trieridfproduit = new QPushButton(tab_5);
        trieridfproduit->setObjectName(QStringLiteral("trieridfproduit"));
        trieridfproduit->setGeometry(QRect(860, 340, 151, 28));
        trinomproduit = new QPushButton(tab_5);
        trinomproduit->setObjectName(QStringLiteral("trinomproduit"));
        trinomproduit->setGeometry(QRect(740, 340, 111, 28));
        Trieridproduit = new QPushButton(tab_5);
        Trieridproduit->setObjectName(QStringLiteral("Trieridproduit"));
        Trieridproduit->setGeometry(QRect(640, 340, 93, 28));
        Impdosproduit = new QPushButton(tab_5);
        Impdosproduit->setObjectName(QStringLiteral("Impdosproduit"));
        Impdosproduit->setGeometry(QRect(470, 340, 161, 28));
        impc = new QTextEdit(tab_5);
        impc->setObjectName(QStringLiteral("impc"));
        impc->setGeometry(QRect(470, 370, 541, 191));
        stackedWidgetProduit = new QStackedWidget(tab_5);
        stackedWidgetProduit->setObjectName(QStringLiteral("stackedWidgetProduit"));
        stackedWidgetProduit->setGeometry(QRect(10, 20, 451, 541));
        stackedWidgetProduit->setStyleSheet(QLatin1String("/*QTabWidget{\n"
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
"\n"
"\n"
"\n"
""));
        stackedWidgetPage1Produit = new QWidget();
        stackedWidgetPage1Produit->setObjectName(QStringLiteral("stackedWidgetPage1Produit"));
        groupBoxProduit = new QGroupBox(stackedWidgetPage1Produit);
        groupBoxProduit->setObjectName(QStringLiteral("groupBoxProduit"));
        groupBoxProduit->setGeometry(QRect(0, 0, 431, 491));
        label_26 = new QLabel(groupBoxProduit);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(20, 90, 56, 16));
        label_27 = new QLabel(groupBoxProduit);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(20, 130, 71, 16));
        prixproduit_2 = new QLineEdit(groupBoxProduit);
        prixproduit_2->setObjectName(QStringLiteral("prixproduit_2"));
        prixproduit_2->setGeometry(QRect(130, 120, 151, 22));
        label_28 = new QLabel(groupBoxProduit);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 170, 71, 16));
        dateproduit_2 = new QDateEdit(groupBoxProduit);
        dateproduit_2->setObjectName(QStringLiteral("dateproduit_2"));
        dateproduit_2->setGeometry(QRect(130, 160, 151, 22));
        label_29 = new QLabel(groupBoxProduit);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 200, 56, 16));
        label_30 = new QLabel(groupBoxProduit);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(20, 40, 56, 16));
        qteproduit_2 = new QLineEdit(groupBoxProduit);
        qteproduit_2->setObjectName(QStringLiteral("qteproduit_2"));
        qteproduit_2->setGeometry(QRect(130, 200, 151, 22));
        idproduit_2 = new QLineEdit(groupBoxProduit);
        idproduit_2->setObjectName(QStringLiteral("idproduit_2"));
        idproduit_2->setGeometry(QRect(130, 40, 151, 22));
        ajouterproduit_2 = new QPushButton(groupBoxProduit);
        ajouterproduit_2->setObjectName(QStringLiteral("ajouterproduit_2"));
        ajouterproduit_2->setGeometry(QRect(90, 340, 111, 28));
        label_31 = new QLabel(groupBoxProduit);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(20, 240, 71, 16));
        classificationproduit_2 = new QLineEdit(groupBoxProduit);
        classificationproduit_2->setObjectName(QStringLiteral("classificationproduit_2"));
        classificationproduit_2->setGeometry(QRect(130, 240, 151, 22));
        annulerproduit_2 = new QPushButton(groupBoxProduit);
        annulerproduit_2->setObjectName(QStringLiteral("annulerproduit_2"));
        annulerproduit_2->setGeometry(QRect(230, 340, 111, 28));
        label_32 = new QLabel(groupBoxProduit);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(20, 280, 101, 16));
        idfproduit_2 = new QLineEdit(groupBoxProduit);
        idfproduit_2->setObjectName(QStringLiteral("idfproduit_2"));
        idfproduit_2->setGeometry(QRect(130, 280, 151, 22));
        libelleproduit_2 = new QLineEdit(groupBoxProduit);
        libelleproduit_2->setObjectName(QStringLiteral("libelleproduit_2"));
        libelleproduit_2->setGeometry(QRect(130, 80, 151, 22));
        nextproduit_2 = new QCommandLinkButton(groupBoxProduit);
        nextproduit_2->setObjectName(QStringLiteral("nextproduit_2"));
        nextproduit_2->setGeometry(QRect(350, 410, 61, 41));
        stackedWidgetProduit->addWidget(stackedWidgetPage1Produit);
        stackedWidgetPage2Produit = new QWidget();
        stackedWidgetPage2Produit->setObjectName(QStringLiteral("stackedWidgetPage2Produit"));
        groupBoxProduit2 = new QGroupBox(stackedWidgetPage2Produit);
        groupBoxProduit2->setObjectName(QStringLiteral("groupBoxProduit2"));
        groupBoxProduit2->setGeometry(QRect(10, 10, 421, 491));
        label_33 = new QLabel(groupBoxProduit2);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(20, 40, 56, 16));
        label_34 = new QLabel(groupBoxProduit2);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(20, 130, 71, 16));
        idproduit2_2 = new QLineEdit(groupBoxProduit2);
        idproduit2_2->setObjectName(QStringLiteral("idproduit2_2"));
        idproduit2_2->setGeometry(QRect(140, 40, 151, 22));
        prixproduit2_2 = new QLineEdit(groupBoxProduit2);
        prixproduit2_2->setObjectName(QStringLiteral("prixproduit2_2"));
        prixproduit2_2->setGeometry(QRect(140, 120, 151, 22));
        modifierproduit_2 = new QPushButton(groupBoxProduit2);
        modifierproduit_2->setObjectName(QStringLiteral("modifierproduit_2"));
        modifierproduit_2->setGeometry(QRect(30, 340, 93, 28));
        supprimerproduit_2 = new QPushButton(groupBoxProduit2);
        supprimerproduit_2->setObjectName(QStringLiteral("supprimerproduit_2"));
        supprimerproduit_2->setGeometry(QRect(150, 340, 93, 28));
        label_35 = new QLabel(groupBoxProduit2);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(20, 170, 71, 16));
        classificationproduit2_2 = new QLineEdit(groupBoxProduit2);
        classificationproduit2_2->setObjectName(QStringLiteral("classificationproduit2_2"));
        classificationproduit2_2->setGeometry(QRect(140, 240, 151, 22));
        qteproduit2_2 = new QLineEdit(groupBoxProduit2);
        qteproduit2_2->setObjectName(QStringLiteral("qteproduit2_2"));
        qteproduit2_2->setGeometry(QRect(140, 200, 151, 22));
        label_36 = new QLabel(groupBoxProduit2);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(20, 210, 71, 16));
        label_37 = new QLabel(groupBoxProduit2);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(20, 240, 81, 16));
        dateproduit2_2 = new QDateEdit(groupBoxProduit2);
        dateproduit2_2->setObjectName(QStringLiteral("dateproduit2_2"));
        dateproduit2_2->setGeometry(QRect(140, 160, 151, 22));
        annulerproduit2_2 = new QPushButton(groupBoxProduit2);
        annulerproduit2_2->setObjectName(QStringLiteral("annulerproduit2_2"));
        annulerproduit2_2->setGeometry(QRect(260, 340, 93, 28));
        label_38 = new QLabel(groupBoxProduit2);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(20, 280, 101, 16));
        idfproduit2_2 = new QLineEdit(groupBoxProduit2);
        idfproduit2_2->setObjectName(QStringLiteral("idfproduit2_2"));
        idfproduit2_2->setGeometry(QRect(140, 280, 151, 22));
        label_39 = new QLabel(groupBoxProduit2);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(20, 80, 56, 16));
        libelleproduit2_2 = new QLineEdit(groupBoxProduit2);
        libelleproduit2_2->setObjectName(QStringLiteral("libelleproduit2_2"));
        libelleproduit2_2->setGeometry(QRect(140, 80, 151, 22));
        next2produit_2 = new QCommandLinkButton(groupBoxProduit2);
        next2produit_2->setObjectName(QStringLiteral("next2produit_2"));
        next2produit_2->setGeometry(QRect(340, 420, 61, 41));
        okproduit_2 = new QPushButton(groupBoxProduit2);
        okproduit_2->setObjectName(QStringLiteral("okproduit_2"));
        okproduit_2->setGeometry(QRect(310, 40, 93, 28));
        stackedWidgetProduit->addWidget(stackedWidgetPage2Produit);
        stackedWidgetPage3Produit = new QWidget();
        stackedWidgetPage3Produit->setObjectName(QStringLiteral("stackedWidgetPage3Produit"));
        groupBoxProduit3 = new QGroupBox(stackedWidgetPage3Produit);
        groupBoxProduit3->setObjectName(QStringLiteral("groupBoxProduit3"));
        groupBoxProduit3->setGeometry(QRect(0, 0, 441, 491));
        next3produit_2 = new QCommandLinkButton(groupBoxProduit3);
        next3produit_2->setObjectName(QStringLiteral("next3produit_2"));
        next3produit_2->setGeometry(QRect(360, 430, 61, 41));
        imageproduit_2 = new QPushButton(groupBoxProduit3);
        imageproduit_2->setObjectName(QStringLiteral("imageproduit_2"));
        imageproduit_2->setGeometry(QRect(90, 110, 241, 28));
        image1_2 = new QLabel(groupBoxProduit3);
        image1_2->setObjectName(QStringLiteral("image1_2"));
        image1_2->setGeometry(QRect(40, 170, 341, 191));
        stackedWidgetProduit->addWidget(stackedWidgetPage3Produit);
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1038, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        tabWidgetClient->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        stackedWidgetProduit->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Tunisian Dry Cleaner", Q_NULLPTR));
        label_ajouter_emp->setText(QApplication::translate("MainWindow", "Ajouter un employ\303\251 :", Q_NULLPTR));
        label_nom_emp->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        label_adresse_emp->setText(QApplication::translate("MainWindow", "Adresse :", Q_NULLPTR));
        label_prenom_emp->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", Q_NULLPTR));
        label_tel_emp->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone :", Q_NULLPTR));
        label_fonc_emp->setText(QApplication::translate("MainWindow", "Fonction :", Q_NULLPTR));
        label_salaire_emp->setText(QApplication::translate("MainWindow", "Salaire :", Q_NULLPTR));
        label_ev_emp->setText(QApplication::translate("MainWindow", "\303\211valuation de rendement:", Q_NULLPTR));
        radio1_ev->setText(QApplication::translate("MainWindow", "Satisfaisante", Q_NULLPTR));
        radio2_ev->setText(QApplication::translate("MainWindow", "Bonne", Q_NULLPTR));
        radio3_ev->setText(QApplication::translate("MainWindow", "Exellente", Q_NULLPTR));
        bouton_valider_emp->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        bouton_page2_emp->setText(QApplication::translate("MainWindow", "Suivant", Q_NULLPTR));
        label_modif_emp->setText(QApplication::translate("MainWindow", "Modifier un employ\303\251 :", Q_NULLPTR));
        label_nom_emp2->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        label_prenom_emp2->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", Q_NULLPTR));
        label_tel_emp2->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone :", Q_NULLPTR));
        label_adresse_emp2->setText(QApplication::translate("MainWindow", "Adresse :", Q_NULLPTR));
        label_salaire_emp2->setText(QApplication::translate("MainWindow", "Salaire :", Q_NULLPTR));
        label_fonc_emp2->setText(QApplication::translate("MainWindow", "Fonction :", Q_NULLPTR));
        label_ev_emp_2->setText(QApplication::translate("MainWindow", "\303\211valuation de rendement:", Q_NULLPTR));
        radio1_ev_2->setText(QApplication::translate("MainWindow", "Satisfaisante", Q_NULLPTR));
        radio2_ev_2->setText(QApplication::translate("MainWindow", "Bonne", Q_NULLPTR));
        radio3_ev_2->setText(QApplication::translate("MainWindow", "Exellente", Q_NULLPTR));
        bouton_modifier_emp->setText(QApplication::translate("MainWindow", "Ok", Q_NULLPTR));
        bouton_annuler_mdf->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        label_supp_emp->setText(QApplication::translate("MainWindow", "Supprimer un employ\303\251 :", Q_NULLPTR));
        label_mat_supp_emp->setText(QApplication::translate("MainWindow", "Matricule :", Q_NULLPTR));
        bouton_supprimer_emp->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        bouton_page1_emp->setText(QApplication::translate("MainWindow", "Pr\303\251c\303\251dent", Q_NULLPTR));
        labelmodif_matricule->setText(QApplication::translate("MainWindow", "Matricule :", Q_NULLPTR));
        bouton_mat_modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        boutonpg_2_vers_3_emp->setText(QApplication::translate("MainWindow", "Suivant", Q_NULLPTR));
        label_tri_et_rech->setText(QApplication::translate("MainWindow", "Autres fonctionnalit\303\251s :", Q_NULLPTR));
        label_trierselon->setText(QApplication::translate("MainWindow", "Trier par :", Q_NULLPTR));
        radio_tri1->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        radio_tri2->setText(QApplication::translate("MainWindow", "Pr\303\251nom", Q_NULLPTR));
        radio_tri3->setText(QApplication::translate("MainWindow", "Salaire", Q_NULLPTR));
        label_rech_selon->setText(QApplication::translate("MainWindow", "Chercher un employ\303\251 selon :", Q_NULLPTR));
        radio_rech2->setText(QApplication::translate("MainWindow", "Nom ou pr\303\251nom", Q_NULLPTR));
        radio_rech3->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        radio_rech1->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        boutonpg_3_vers_2_emp->setText(QApplication::translate("MainWindow", "Pr\303\251c\303\251dent", Q_NULLPTR));
        boutonpg_3_vers_4_emp->setText(QApplication::translate("MainWindow", "Suivant", Q_NULLPTR));
        boutonpg_4_vers_3_emp->setText(QApplication::translate("MainWindow", "Pr\303\251c\303\251dent", Q_NULLPTR));
        label_gestion_profils->setText(QApplication::translate("MainWindow", "Gestion des profils (L'authentification) :", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Remarque : le login du profil est toujours par d\303\251faut ", Q_NULLPTR));
        label_rq_gestion_profil->setText(QApplication::translate("MainWindow", "compos\303\251 de votre matricule plus votre nom et vous", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", " ne pouvez jamais le modifier .", Q_NULLPTR));
        label_ajouter_profil->setText(QApplication::translate("MainWindow", "Ajouter un profil :", Q_NULLPTR));
        label_profil_matricule->setText(QApplication::translate("MainWindow", "Matricule :", Q_NULLPTR));
        bouton_ok_matricule_profil->setText(QApplication::translate("MainWindow", "Ok", Q_NULLPTR));
        label_login_profil->setText(QApplication::translate("MainWindow", "Login :", Q_NULLPTR));
        label_mp_profil->setText(QApplication::translate("MainWindow", "Mot de passe :", Q_NULLPTR));
        bouton_ajouter_profil->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        label_modif_profil->setText(QApplication::translate("MainWindow", "Modifier profil (Changer le mot de passe ) :", Q_NULLPTR));
        label_login_mofif_emp->setText(QApplication::translate("MainWindow", "Login :", Q_NULLPTR));
        label_mp_modif_emp->setText(QApplication::translate("MainWindow", "Nouveau mot de passe :", Q_NULLPTR));
        bouton_ok_login_modifier->setText(QApplication::translate("MainWindow", "Ok", Q_NULLPTR));
        bouton_modifier_profil->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_supp_profil->setText(QApplication::translate("MainWindow", "Supprimer un profil :", Q_NULLPTR));
        bouton_supprimer_profil->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_liste_emp->setText(QApplication::translate("MainWindow", "La liste des employ\303\251s :", Q_NULLPTR));
        label_employe_connecte->setText(QString());
        boutonConnexionChat->setText(QApplication::translate("MainWindow", "D\303\251mmarer le Chat", Q_NULLPTR));
        boutonEnvoyerChat->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        label_login_chat->setText(QApplication::translate("MainWindow", "Login :", Q_NULLPTR));
        label_bulletin_paie->setText(QApplication::translate("MainWindow", "G\303\251n\303\251rer un bulletin de paie :", Q_NULLPTR));
        label_matricule_pdf->setText(QApplication::translate("MainWindow", "Matricule :", Q_NULLPTR));
        bouton_generer_bp->setText(QApplication::translate("MainWindow", "Ok", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Gestion des employ\303\251s", Q_NULLPTR));
        groupBoxClient->setTitle(QApplication::translate("MainWindow", "Ajouter un Client", Q_NULLPTR));
        labelidclient->setText(QApplication::translate("MainWindow", "ID_Client", Q_NULLPTR));
        labelnomclient->setText(QApplication::translate("MainWindow", "Nom du Client", Q_NULLPTR));
        labelprenomclient->setText(QApplication::translate("MainWindow", "Prenom du Client", Q_NULLPTR));
        labeladresseclient->setText(QApplication::translate("MainWindow", "Adresse du Client", Q_NULLPTR));
        labeltelclient->setText(QApplication::translate("MainWindow", "Num\303\251ro de T\303\251lephone", Q_NULLPTR));
        labeldateclient->setText(QApplication::translate("MainWindow", "Date d'enregistrement", Q_NULLPTR));
        labelnbclient->setText(QApplication::translate("MainWindow", "Nombre de service utilis\303\251", Q_NULLPTR));
        optioncamclient->setText(QApplication::translate("MainWindow", "Option cam", Q_NULLPTR));
        arduinoclient->setText(QApplication::translate("MainWindow", "Arduino", Q_NULLPTR));
        tabWidgetClient->setTabText(tabWidgetClient->indexOf(tab_6), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        trieparNomclient->setText(QApplication::translate("MainWindow", "Trier par Nom", Q_NULLPTR));
        trieparDateclient->setText(QApplication::translate("MainWindow", "Trier par Date d'enrigestrement", Q_NULLPTR));
        trieparIdclient->setText(QApplication::translate("MainWindow", "Trier par ID", Q_NULLPTR));
        labelrechclient->setText(QApplication::translate("MainWindow", "Recherche dans la base de donn\303\251e", Q_NULLPTR));
        afficherstatclient->setText(QApplication::translate("MainWindow", "Afficher les statistiques", Q_NULLPTR));
        qrcodeButton->setText(QApplication::translate("MainWindow", "Generer QrCode", Q_NULLPTR));
        qrcodeLabel->setText(QString());
        labelclientqr->setText(QApplication::translate("MainWindow", "Afin de G\303\251n\303\251rer un Qrcode clicker sur le tableau", Q_NULLPTR));
        tabWidgetClient->setTabText(tabWidgetClient->indexOf(tabWidgetafficherclient), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Modifier un Client", Q_NULLPTR));
        labelclient_5->setText(QApplication::translate("MainWindow", "ID_Client", Q_NULLPTR));
        labelclient->setText(QApplication::translate("MainWindow", "Nom du Client", Q_NULLPTR));
        labelclient_2->setText(QApplication::translate("MainWindow", "Prenom du Client", Q_NULLPTR));
        labelclient_4->setText(QApplication::translate("MainWindow", "Adresse du Client", Q_NULLPTR));
        labelclient_3->setText(QApplication::translate("MainWindow", "Num\303\251ro de T\303\251lephone", Q_NULLPTR));
        labelclient_6->setText(QApplication::translate("MainWindow", "Date d'enregistrement", Q_NULLPTR));
        labelclient_7->setText(QApplication::translate("MainWindow", "Nombre de service utilis\303\251", Q_NULLPTR));
        boutonsuppclient->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidgetClient->setTabText(tabWidgetClient->indexOf(tab_7), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Gestion des clients", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Ajouter Service", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "ID Service", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Nom Service", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Type Service", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Emplacement Service", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Prix Service", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Description Service", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Date Service", Q_NULLPTR));
        ajouterservice->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        Tri->clear();
        Tri->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Nom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Type", Q_NULLPTR)
        );
        label_18->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Modifier service", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "ID Service", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Nom service", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Type Service", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Emplacement Service", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Prix Service", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Description Service", Q_NULLPTR));
        supprimerservice->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_41->setText(QApplication::translate("MainWindow", "Date Service", Q_NULLPTR));
        modifierservice->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tabWidgetPage1), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        label_42->setText(QApplication::translate("MainWindow", "Afficher l'historique des services", Q_NULLPTR));
        envoyer->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        label_43->setText(QApplication::translate("MainWindow", "Adresse e-mail", Q_NULLPTR));
        label_44->setText(QApplication::translate("MainWindow", "Message", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Hi</span></p></body></html>", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("MainWindow", "Mail", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Gestion des services", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        teltriefournisseur->setText(QApplication::translate("MainWindow", "Tri par Tel", Q_NULLPTR));
        nomtriefournisseur->setText(QApplication::translate("MainWindow", "Tri par Nom", Q_NULLPTR));
        idtriefournisseur->setText(QApplication::translate("MainWindow", "Tri par ID", Q_NULLPTR));
        localisation_f->setText(QApplication::translate("MainWindow", "Localisation", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Afin d'avoir la localisation d'un fournisseur faite un double click sur la table ", Q_NULLPTR));
        excel_f->setText(QApplication::translate("MainWindow", "Generer Excel", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajouter fournisseur", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID fournisseur", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Nom Fournisseur", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Prenom Fournisseur ", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Adresse Fournisseur", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "E-mail Fournisseur", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Telephone Fournisseur", Q_NULLPTR));
        ajouter_f->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        modifier_f->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        musique->setText(QApplication::translate("MainWindow", " \360\235\204\236", Q_NULLPTR));
        arduinoproduit->setText(QApplication::translate("MainWindow", "arduino", Q_NULLPTR));
        supprimer_f->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label_45->setText(QApplication::translate("MainWindow", "Generer un Excel des fournisseurs", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Gestion des fournisseurs", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Temps du systeme", Q_NULLPTR));
        Digtal_clock->setText(QApplication::translate("MainWindow", "clock", Q_NULLPTR));
        DateTime->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        modenuit->setText(QApplication::translate("MainWindow", "   mode nuit ", Q_NULLPTR));
        label_40->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        trieridfproduit->setText(QApplication::translate("MainWindow", "tri par Id fournisseur", Q_NULLPTR));
        trinomproduit->setText(QApplication::translate("MainWindow", "trier par libelle", Q_NULLPTR));
        Trieridproduit->setText(QApplication::translate("MainWindow", "Trier par id", Q_NULLPTR));
        Impdosproduit->setText(QApplication::translate("MainWindow", "Imprimer la base ", Q_NULLPTR));
        groupBoxProduit->setTitle(QApplication::translate("MainWindow", "Ajouter Produit", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Libelle", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Prix Achat", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "Date Achat", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "Quantit\303\251", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "Id ", Q_NULLPTR));
        idproduit_2->setText(QString());
        ajouterproduit_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "classification", Q_NULLPTR));
        annulerproduit_2->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "id fournisseur ", Q_NULLPTR));
        nextproduit_2->setText(QString());
        groupBoxProduit2->setTitle(QApplication::translate("MainWindow", "Modifier Produit ", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "Id", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "Prix Achat ", Q_NULLPTR));
        modifierproduit_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        supprimerproduit_2->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "Date Achat", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "Quantite", Q_NULLPTR));
        label_37->setText(QApplication::translate("MainWindow", "classification", Q_NULLPTR));
        annulerproduit2_2->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        label_38->setText(QApplication::translate("MainWindow", "id fourniasseur", Q_NULLPTR));
        label_39->setText(QApplication::translate("MainWindow", "Libelle", Q_NULLPTR));
        next2produit_2->setText(QString());
        okproduit_2->setText(QApplication::translate("MainWindow", "ok", Q_NULLPTR));
        groupBoxProduit3->setTitle(QApplication::translate("MainWindow", "Autre foncionnalite", Q_NULLPTR));
        next3produit_2->setText(QString());
        imageproduit_2->setText(QApplication::translate("MainWindow", "Ajouter Image du Produit", Q_NULLPTR));
        image1_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Gestion des produits", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
