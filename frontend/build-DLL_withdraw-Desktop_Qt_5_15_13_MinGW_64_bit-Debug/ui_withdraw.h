/********************************************************************************
** Form generated from reading UI file 'withdraw.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAW_H
#define UI_WITHDRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_withdraw
{
public:
    QPushButton *btn100e;
    QPushButton *btn50e;
    QPushButton *btn20e;
    QPushButton *btn10e;
    QLabel *label;
    QLineEdit *lineSumma;
    QLabel *label_2;
    QPushButton *btnTeeNosto;
    QLabel *labelSaldo;
    QLabel *labelCredit;
    QPushButton *btnLogOut;
    QPushButton *btnBack;
    QLabel *labelNomoney;

    void setupUi(QDialog *withdraw)
    {
        if (withdraw->objectName().isEmpty())
            withdraw->setObjectName(QString::fromUtf8("withdraw"));
        withdraw->resize(800, 600);
        btn100e = new QPushButton(withdraw);
        btn100e->setObjectName(QString::fromUtf8("btn100e"));
        btn100e->setGeometry(QRect(310, 300, 111, 31));
        QFont font;
        font.setPointSize(16);
        btn100e->setFont(font);
        btn50e = new QPushButton(withdraw);
        btn50e->setObjectName(QString::fromUtf8("btn50e"));
        btn50e->setGeometry(QRect(310, 340, 80, 18));
        btn50e->setFont(font);
        btn20e = new QPushButton(withdraw);
        btn20e->setObjectName(QString::fromUtf8("btn20e"));
        btn20e->setGeometry(QRect(310, 390, 80, 18));
        btn10e = new QPushButton(withdraw);
        btn10e->setObjectName(QString::fromUtf8("btn10e"));
        btn10e->setGeometry(QRect(300, 430, 80, 18));
        label = new QLabel(withdraw);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 270, 141, 31));
        label->setFont(font);
        lineSumma = new QLineEdit(withdraw);
        lineSumma->setObjectName(QString::fromUtf8("lineSumma"));
        lineSumma->setGeometry(QRect(460, 280, 113, 20));
        label_2 = new QLabel(withdraw);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 130, 311, 21));
        label_2->setFont(font);
        btnTeeNosto = new QPushButton(withdraw);
        btnTeeNosto->setObjectName(QString::fromUtf8("btnTeeNosto"));
        btnTeeNosto->setGeometry(QRect(460, 340, 131, 41));
        labelSaldo = new QLabel(withdraw);
        labelSaldo->setObjectName(QString::fromUtf8("labelSaldo"));
        labelSaldo->setGeometry(QRect(310, 160, 441, 21));
        labelSaldo->setFont(font);
        labelCredit = new QLabel(withdraw);
        labelCredit->setObjectName(QString::fromUtf8("labelCredit"));
        labelCredit->setGeometry(QRect(310, 190, 451, 21));
        labelCredit->setFont(font);
        btnLogOut = new QPushButton(withdraw);
        btnLogOut->setObjectName(QString::fromUtf8("btnLogOut"));
        btnLogOut->setGeometry(QRect(640, 440, 131, 41));
        btnBack = new QPushButton(withdraw);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(20, 450, 131, 41));
        labelNomoney = new QLabel(withdraw);
        labelNomoney->setObjectName(QString::fromUtf8("labelNomoney"));
        labelNomoney->setGeometry(QRect(570, 340, 131, 31));

        retranslateUi(withdraw);

        QMetaObject::connectSlotsByName(withdraw);
    } // setupUi

    void retranslateUi(QDialog *withdraw)
    {
        withdraw->setWindowTitle(QCoreApplication::translate("withdraw", "Dialog", nullptr));
        btn100e->setText(QCoreApplication::translate("withdraw", "100e", nullptr));
        btn50e->setText(QCoreApplication::translate("withdraw", "50e", nullptr));
        btn20e->setText(QCoreApplication::translate("withdraw", "20e", nullptr));
        btn10e->setText(QCoreApplication::translate("withdraw", "10e", nullptr));
        label->setText(QCoreApplication::translate("withdraw", "valitse summa:", nullptr));
        label_2->setText(QCoreApplication::translate("withdraw", "Tilit\303\244si:", nullptr));
        btnTeeNosto->setText(QCoreApplication::translate("withdraw", "Tee nosto", nullptr));
        labelSaldo->setText(QCoreApplication::translate("withdraw", "saldo:", nullptr));
        labelCredit->setText(QCoreApplication::translate("withdraw", "credit:", nullptr));
        btnLogOut->setText(QCoreApplication::translate("withdraw", "Kirjaudu ulos", nullptr));
        btnBack->setText(QCoreApplication::translate("withdraw", "Takaisin", nullptr));
        labelNomoney->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class withdraw: public Ui_withdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAW_H
