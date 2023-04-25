/********************************************************************************
** Form generated from reading UI file 'transactions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONS_H
#define UI_TRANSACTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Transactions
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Transactions)
    {
        if (Transactions->objectName().isEmpty())
            Transactions->setObjectName(QString::fromUtf8("Transactions"));
        Transactions->resize(500, 300);
        Transactions->setMinimumSize(QSize(500, 300));
        pushButton = new QPushButton(Transactions);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 260, 101, 31));

        retranslateUi(Transactions);

        QMetaObject::connectSlotsByName(Transactions);
    } // setupUi

    void retranslateUi(QDialog *Transactions)
    {
        Transactions->setWindowTitle(QCoreApplication::translate("Transactions", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Transactions", "Sulje", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transactions: public Ui_Transactions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONS_H
