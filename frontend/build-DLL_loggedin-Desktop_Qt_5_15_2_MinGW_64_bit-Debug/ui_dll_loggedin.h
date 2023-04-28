/********************************************************************************
** Form generated from reading UI file 'dll_loggedin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLL_LOGGEDIN_H
#define UI_DLL_LOGGEDIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DLL_loggedin
{
public:
    QLabel *label;
    QPushButton *btnTili1;
    QPushButton *btnTili2;
    QPushButton *btnLogOut;
    QLabel *label_2;

    void setupUi(QDialog *DLL_loggedin)
    {
        if (DLL_loggedin->objectName().isEmpty())
            DLL_loggedin->setObjectName(QString::fromUtf8("DLL_loggedin"));
        DLL_loggedin->resize(800, 600);
        DLL_loggedin->setMinimumSize(QSize(800, 600));
        DLL_loggedin->setMaximumSize(QSize(800, 600));
        label = new QLabel(DLL_loggedin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 70, 501, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        btnTili1 = new QPushButton(DLL_loggedin);
        btnTili1->setObjectName(QString::fromUtf8("btnTili1"));
        btnTili1->setGeometry(QRect(290, 320, 231, 41));
        QFont font1;
        font1.setPointSize(12);
        btnTili1->setFont(font1);
        btnTili2 = new QPushButton(DLL_loggedin);
        btnTili2->setObjectName(QString::fromUtf8("btnTili2"));
        btnTili2->setGeometry(QRect(290, 380, 231, 41));
        btnTili2->setFont(font1);
        btnLogOut = new QPushButton(DLL_loggedin);
        btnLogOut->setObjectName(QString::fromUtf8("btnLogOut"));
        btnLogOut->setGeometry(QRect(670, 550, 121, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Symbol"));
        font2.setPointSize(9);
        btnLogOut->setFont(font2);
        label_2 = new QLabel(DLL_loggedin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 280, 161, 21));
        label_2->setFont(font);

        retranslateUi(DLL_loggedin);

        QMetaObject::connectSlotsByName(DLL_loggedin);
    } // setupUi

    void retranslateUi(QDialog *DLL_loggedin)
    {
        DLL_loggedin->setWindowTitle(QCoreApplication::translate("DLL_loggedin", "Dialog", nullptr));
        label->setText(QString());
        btnTili1->setText(QString());
        btnTili2->setText(QString());
        btnLogOut->setText(QCoreApplication::translate("DLL_loggedin", "Kirjaudu ulos", nullptr));
        label_2->setText(QCoreApplication::translate("DLL_loggedin", "Valitse tili", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DLL_loggedin: public Ui_DLL_loggedin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLL_LOGGEDIN_H
