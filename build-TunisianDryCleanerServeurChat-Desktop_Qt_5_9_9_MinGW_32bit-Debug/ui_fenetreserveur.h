/********************************************************************************
** Form generated from reading UI file 'fenetreserveur.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRESERVEUR_H
#define UI_FENETRESERVEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreServeur
{
public:

    void setupUi(QWidget *FenetreServeur)
    {
        if (FenetreServeur->objectName().isEmpty())
            FenetreServeur->setObjectName(QStringLiteral("FenetreServeur"));
        FenetreServeur->resize(400, 300);

        retranslateUi(FenetreServeur);

        QMetaObject::connectSlotsByName(FenetreServeur);
    } // setupUi

    void retranslateUi(QWidget *FenetreServeur)
    {
        FenetreServeur->setWindowTitle(QApplication::translate("FenetreServeur", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FenetreServeur: public Ui_FenetreServeur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRESERVEUR_H
