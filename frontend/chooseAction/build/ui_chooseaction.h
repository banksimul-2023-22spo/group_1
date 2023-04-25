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
        chooseAction->setMaximumSize(QSize(800, 600));
        BalanceText = new QLabel(chooseAction);
        BalanceText->setObjectName(QString::fromUtf8("BalanceText"));
        BalanceText->setGeometry(QRect(30, 220, 71, 31));
        QFont font;
        font.setPointSize(16);
        BalanceText->setFont(font);
        CreditText = new QLabel(chooseAction);
        CreditText->setObjectName(QString::fromUtf8("CreditText"));
        CreditText->setGeometry(QRect(30, 270, 71, 31));
        CreditText->setFont(font);
        Balance = new QLabel(chooseAction);
        Balance->setObjectName(QString::fromUtf8("Balance"));
        Balance->setGeometry(QRect(120, 220, 211, 31));
        Balance->setFont(font);
        Credit = new QLabel(chooseAction);
        Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->setGeometry(QRect(120, 270, 211, 31));
        Credit->setFont(font);
        Withdraw = new QPushButton(chooseAction);
        Withdraw->setObjectName(QString::fromUtf8("Withdraw"));
        Withdraw->setGeometry(QRect(20, 350, 141, 41));
        QFont font1;
        font1.setPointSize(12);
        Withdraw->setFont(font1);
        Transactions = new QPushButton(chooseAction);
        Transactions->setObjectName(QString::fromUtf8("Transactions"));
        Transactions->setGeometry(QRect(640, 350, 141, 41));
        Transactions->setFont(font1);
        Back = new QPushButton(chooseAction);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(10, 560, 101, 31));
        logOut = new QPushButton(chooseAction);
        logOut->setObjectName(QString::fromUtf8("logOut"));
        logOut->setGeometry(QRect(690, 560, 101, 31));
        listWidget = new QListWidget(chooseAction);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(410, 220, 371, 121));

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
