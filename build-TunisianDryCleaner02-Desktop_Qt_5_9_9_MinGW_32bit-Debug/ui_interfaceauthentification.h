/********************************************************************************
** Form generated from reading UI file 'interfaceauthentification.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACEAUTHENTIFICATION_H
#define UI_INTERFACEAUTHENTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfaceAuthentification
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_mp;
    QPushButton *bouton_connexion;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InterfaceAuthentification)
    {
        if (InterfaceAuthentification->objectName().isEmpty())
            InterfaceAuthentification->setObjectName(QStringLiteral("InterfaceAuthentification"));
        InterfaceAuthentification->resize(800, 600);
        centralwidget = new QWidget(InterfaceAuthentification);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(295, 110, 201, 101));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        label->setFont(font);
        lineEdit_login = new QLineEdit(centralwidget);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));
        lineEdit_login->setGeometry(QRect(270, 210, 241, 30));
        lineEdit_mp = new QLineEdit(centralwidget);
        lineEdit_mp->setObjectName(QStringLiteral("lineEdit_mp"));
        lineEdit_mp->setGeometry(QRect(270, 260, 241, 30));
        lineEdit_mp->setEchoMode(QLineEdit::Password);
        bouton_connexion = new QPushButton(centralwidget);
        bouton_connexion->setObjectName(QStringLiteral("bouton_connexion"));
        bouton_connexion->setGeometry(QRect(330, 320, 121, 28));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        bouton_connexion->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 210, 121, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 260, 131, 31));
        label_3->setFont(font2);
        InterfaceAuthentification->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InterfaceAuthentification);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        InterfaceAuthentification->setMenuBar(menubar);
        statusbar = new QStatusBar(InterfaceAuthentification);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        InterfaceAuthentification->setStatusBar(statusbar);

        retranslateUi(InterfaceAuthentification);

        QMetaObject::connectSlotsByName(InterfaceAuthentification);
    } // setupUi

    void retranslateUi(QMainWindow *InterfaceAuthentification)
    {
        InterfaceAuthentification->setWindowTitle(QApplication::translate("InterfaceAuthentification", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("InterfaceAuthentification", "Bienvenue !", Q_NULLPTR));
        bouton_connexion->setText(QApplication::translate("InterfaceAuthentification", "Se connecter", Q_NULLPTR));
        label_2->setText(QApplication::translate("InterfaceAuthentification", "Login :", Q_NULLPTR));
        label_3->setText(QApplication::translate("InterfaceAuthentification", "Mot de passe :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InterfaceAuthentification: public Ui_InterfaceAuthentification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACEAUTHENTIFICATION_H
