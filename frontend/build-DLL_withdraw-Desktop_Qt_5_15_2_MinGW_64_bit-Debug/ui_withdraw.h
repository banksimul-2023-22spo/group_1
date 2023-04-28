/********************************************************************************
** Form generated from reading UI file 'withdraw.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
        btn50e->setGeometry(QRect(310, 340, 111, 31));
        btn50e->setFont(font);
        btn20e = new QPushButton(withdraw);
        btn20e->setObjectName(QString::fromUtf8("btn20e"));
        btn20e->setGeometry(QRect(310, 380, 111, 31));
        btn20e->setFont(font);
        btn10e = new QPushButton(withdraw);
        btn10e->setObjectName(QString::fromUtf8("btn10e"));
        btn10e->setGeometry(QRect(310, 420, 111, 31));
        btn10e->setFont(font);
        label = new QLabel(withdraw);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 260, 181, 31));
        label->setFont(font);
        lineSumma = new QLineEdit(withdraw);
        lineSumma->setObjectName(QString::fromUtf8("lineSumma"));
        lineSumma->setGeometry(QRect(430, 260, 131, 31));
        QFont font1;
        font1.setPointSize(12);
        lineSumma->setFont(font1);
        label_2 = new QLabel(withdraw);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 120, 311, 31));
        label_2->setFont(font);
        btnTeeNosto = new QPushButton(withdraw);
        btnTeeNosto->setObjectName(QString::fromUtf8("btnTeeNosto"));
        btnTeeNosto->setGeometry(QRect(430, 300, 131, 41));
        btnTeeNosto->setFont(font);
        labelSaldo = new QLabel(withdraw);
        labelSaldo->setObjectName(QString::fromUtf8("labelSaldo"));
        labelSaldo->setGeometry(QRect(280, 150, 441, 31));
        labelSaldo->setFont(font);
        labelCredit = new QLabel(withdraw);
        labelCredit->setObjectName(QString::fromUtf8("labelCredit"));
        labelCredit->setGeometry(QRect(280, 180, 451, 31));
        labelCredit->setFont(font);
        btnLogOut = new QPushButton(withdraw);
        btnLogOut->setObjectName(QString::fromUtf8("btnLogOut"));
        btnLogOut->setGeometry(QRect(640, 440, 131, 41));
        btnBack = new QPushButton(withdraw);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(20, 450, 131, 41));
        labelNomoney = new QLabel(withdraw);
        labelNomoney->setObjectName(QString::fromUtf8("labelNomoney"));
        labelNomoney->setGeometry(QRect(430, 220, 221, 31));
        QPalette palette;
        QBrush brush(QColor(255, 24, 24, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(240, 63, 63, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 172, 172, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 117, 117, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(120, 32, 32, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(160, 42, 42, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush7(QColor(255, 255, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush8(QColor(247, 159, 159, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush10(QColor(0, 0, 0, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QBrush brush11(QColor(240, 240, 240, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        QBrush brush12(QColor(227, 227, 227, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        QBrush brush13(QColor(160, 160, 160, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush14(QColor(105, 105, 105, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        QBrush brush15(QColor(245, 245, 245, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        QBrush brush16(QColor(0, 0, 0, 128));
        brush16.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        labelNomoney->setPalette(palette);
        labelNomoney->setFont(font1);

        retranslateUi(withdraw);

        QMetaObject::connectSlotsByName(withdraw);
    } // setupUi

    void retranslateUi(QDialog *withdraw)
    {
        withdraw->setWindowTitle(QCoreApplication::translate("withdraw", "Dialog", nullptr));
        btn100e->setText(QCoreApplication::translate("withdraw", "100\342\202\254", nullptr));
        btn50e->setText(QCoreApplication::translate("withdraw", "50\342\202\254", nullptr));
        btn20e->setText(QCoreApplication::translate("withdraw", "20\342\202\254", nullptr));
        btn10e->setText(QCoreApplication::translate("withdraw", "10\342\202\254", nullptr));
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
