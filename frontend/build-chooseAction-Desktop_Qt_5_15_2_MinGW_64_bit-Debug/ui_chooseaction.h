/********************************************************************************
** Form generated from reading UI file 'chooseaction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEACTION_H
#define UI_CHOOSEACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_chooseAction
{
public:
    QLabel *BalanceText;
    QLabel *CreditText;
    QLabel *Balance;
    QLabel *Credit;
    QPushButton *Withdraw;
    QPushButton *Transactions;
    QPushButton *Back;
    QPushButton *logOut;
    QListWidget *listWidget;

    void setupUi(QDialog *chooseAction)
    {
        if (chooseAction->objectName().isEmpty())
            chooseAction->setObjectName(QString::fromUtf8("chooseAction"));
        chooseAction->resize(800, 600);
        chooseAction->setMinimumSize(QSize(800, 600));
        BalanceText = new QLabel(chooseAction);
        BalanceText->setObjectName(QString::fromUtf8("BalanceText"));
        BalanceText->setGeometry(QRect(220, 150, 71, 31));
        QFont font;
        font.setPointSize(16);
        BalanceText->setFont(font);
        CreditText = new QLabel(chooseAction);
        CreditText->setObjectName(QString::fromUtf8("CreditText"));
        CreditText->setGeometry(QRect(220, 200, 71, 31));
        CreditText->setFont(font);
        Balance = new QLabel(chooseAction);
        Balance->setObjectName(QString::fromUtf8("Balance"));
        Balance->setGeometry(QRect(300, 150, 211, 31));
        Balance->setFont(font);
        Credit = new QLabel(chooseAction);
        Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->setGeometry(QRect(300, 200, 211, 31));
        Credit->setFont(font);
        Withdraw = new QPushButton(chooseAction);
        Withdraw->setObjectName(QString::fromUtf8("Withdraw"));
        Withdraw->setGeometry(QRect(210, 290, 181, 51));
        Withdraw->setFont(font);
        Transactions = new QPushButton(chooseAction);
        Transactions->setObjectName(QString::fromUtf8("Transactions"));
        Transactions->setGeometry(QRect(400, 290, 181, 51));
        Transactions->setFont(font);
        Back = new QPushButton(chooseAction);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(10, 550, 121, 41));
        logOut = new QPushButton(chooseAction);
        logOut->setObjectName(QString::fromUtf8("logOut"));
        logOut->setGeometry(QRect(670, 550, 121, 41));
        listWidget = new QListWidget(chooseAction);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(210, 350, 371, 121));

        retranslateUi(chooseAction);

        QMetaObject::connectSlotsByName(chooseAction);
    } // setupUi

    void retranslateUi(QDialog *chooseAction)
    {
        chooseAction->setWindowTitle(QCoreApplication::translate("chooseAction", "Dialog", nullptr));
        BalanceText->setText(QCoreApplication::translate("chooseAction", "Saldo:", nullptr));
        CreditText->setText(QCoreApplication::translate("chooseAction", "Credit:", nullptr));
        Balance->setText(QCoreApplication::translate("chooseAction", "TextLabel", nullptr));
        Credit->setText(QCoreApplication::translate("chooseAction", "TextLabel", nullptr));
        Withdraw->setText(QCoreApplication::translate("chooseAction", "Nosta rahaa", nullptr));
        Transactions->setText(QCoreApplication::translate("chooseAction", "Tilitapahtumat", nullptr));
        Back->setText(QCoreApplication::translate("chooseAction", "Takaisin", nullptr));
        logOut->setText(QCoreApplication::translate("chooseAction", "kirjaudu ulos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chooseAction: public Ui_chooseAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEACTION_H
