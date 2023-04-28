/********************************************************************************
** Form generated from reading UI file 'dll_endscene.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLL_ENDSCENE_H
#define UI_DLL_ENDSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DLL_endscene
{
public:
    QLabel *txtulos;
    QLabel *txtnosto;
    QLabel *txttili;
    QLabel *txtsaldo;
    QLabel *txtcredit;

    void setupUi(QDialog *DLL_endscene)
    {
        if (DLL_endscene->objectName().isEmpty())
            DLL_endscene->setObjectName(QString::fromUtf8("DLL_endscene"));
        DLL_endscene->resize(800, 600);
        DLL_endscene->setMaximumSize(QSize(800, 600));
        txtulos = new QLabel(DLL_endscene);
        txtulos->setObjectName(QString::fromUtf8("txtulos"));
        txtulos->setGeometry(QRect(230, 370, 431, 71));
        QFont font;
        font.setPointSize(16);
        txtulos->setFont(font);
        txtnosto = new QLabel(DLL_endscene);
        txtnosto->setObjectName(QString::fromUtf8("txtnosto"));
        txtnosto->setGeometry(QRect(230, 100, 401, 121));
        txtnosto->setFont(font);
        txttili = new QLabel(DLL_endscene);
        txttili->setObjectName(QString::fromUtf8("txttili"));
        txttili->setGeometry(QRect(230, 220, 111, 31));
        txttili->setFont(font);
        txtsaldo = new QLabel(DLL_endscene);
        txtsaldo->setObjectName(QString::fromUtf8("txtsaldo"));
        txtsaldo->setGeometry(QRect(230, 260, 251, 31));
        txtsaldo->setFont(font);
        txtcredit = new QLabel(DLL_endscene);
        txtcredit->setObjectName(QString::fromUtf8("txtcredit"));
        txtcredit->setGeometry(QRect(230, 300, 271, 31));
        txtcredit->setFont(font);

        retranslateUi(DLL_endscene);

        QMetaObject::connectSlotsByName(DLL_endscene);
    } // setupUi

    void retranslateUi(QDialog *DLL_endscene)
    {
        DLL_endscene->setWindowTitle(QCoreApplication::translate("DLL_endscene", "Dialog", nullptr));
        txtulos->setText(QCoreApplication::translate("DLL_endscene", "Kirjaudutaan ulos automaattisesti...", nullptr));
        txtnosto->setText(QCoreApplication::translate("DLL_endscene", "Ei nostotapahtumia.", nullptr));
        txttili->setText(QCoreApplication::translate("DLL_endscene", "Tilill\303\244si:", nullptr));
        txtsaldo->setText(QCoreApplication::translate("DLL_endscene", "Saldo:", nullptr));
        txtcredit->setText(QCoreApplication::translate("DLL_endscene", "Credit:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DLL_endscene: public Ui_DLL_endscene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLL_ENDSCENE_H
