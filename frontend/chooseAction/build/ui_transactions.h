/********************************************************************************
** Form generated from reading UI file 'transactions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONS_H
#define UI_TRANSACTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Transactions
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *Transactions)
    {
        if (Transactions->objectName().isEmpty())
            Transactions->setObjectName(QString::fromUtf8("Transactions"));
        Transactions->resize(575, 445);
        textEdit = new QTextEdit(Transactions);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 70, 351, 241));

        retranslateUi(Transactions);

        QMetaObject::connectSlotsByName(Transactions);
    } // setupUi

    void retranslateUi(QDialog *Transactions)
    {
        Transactions->setWindowTitle(QCoreApplication::translate("Transactions", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transactions: public Ui_Transactions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONS_H
