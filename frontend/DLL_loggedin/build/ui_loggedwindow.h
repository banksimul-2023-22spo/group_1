/********************************************************************************
** Form generated from reading UI file 'loggedwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGGEDWINDOW_H
#define UI_LOGGEDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loggedwindow
{
public:
    QLabel *textwelcome;
    QPushButton *BtnTili1;
    QPushButton *BtnTili2;
    QPushButton *BtnLogOut;
    QLabel *textvalitsetili;
    QPushButton *BtnTili2_2;

    void setupUi(QDialog *loggedwindow)
    {
        if (loggedwindow->objectName().isEmpty())
            loggedwindow->setObjectName(QString::fromUtf8("loggedwindow"));
        loggedwindow->resize(400, 300);
        textwelcome = new QLabel(loggedwindow);
        textwelcome->setObjectName(QString::fromUtf8("textwelcome"));
        textwelcome->setGeometry(QRect(70, 20, 251, 41));
        BtnTili1 = new QPushButton(loggedwindow);
        BtnTili1->setObjectName(QString::fromUtf8("BtnTili1"));
        BtnTili1->setGeometry(QRect(90, 120, 211, 31));
        BtnTili2 = new QPushButton(loggedwindow);
        BtnTili2->setObjectName(QString::fromUtf8("BtnTili2"));
        BtnTili2->setGeometry(QRect(90, 160, 211, 31));
        BtnLogOut = new QPushButton(loggedwindow);
        BtnLogOut->setObjectName(QString::fromUtf8("BtnLogOut"));
        BtnLogOut->setGeometry(QRect(90, 250, 211, 31));
        textvalitsetili = new QLabel(loggedwindow);
        textvalitsetili->setObjectName(QString::fromUtf8("textvalitsetili"));
        textvalitsetili->setGeometry(QRect(90, 90, 211, 21));
        BtnTili2_2 = new QPushButton(loggedwindow);
        BtnTili2_2->setObjectName(QString::fromUtf8("BtnTili2_2"));
        BtnTili2_2->setGeometry(QRect(90, 200, 211, 31));

        retranslateUi(loggedwindow);

        QMetaObject::connectSlotsByName(loggedwindow);
    } // setupUi

    void retranslateUi(QDialog *loggedwindow)
    {
        loggedwindow->setWindowTitle(QCoreApplication::translate("loggedwindow", "Dialog", nullptr));
        textwelcome->setText(QString());
        BtnTili1->setText(QString());
        BtnTili2->setText(QString());
        BtnLogOut->setText(QCoreApplication::translate("loggedwindow", "Kirjaudu ulos", nullptr));
        textvalitsetili->setText(QCoreApplication::translate("loggedwindow", "Valitse tili", nullptr));
        BtnTili2_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loggedwindow: public Ui_loggedwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGGEDWINDOW_H
