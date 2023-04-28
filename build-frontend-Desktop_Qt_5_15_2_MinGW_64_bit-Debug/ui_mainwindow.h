/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelInfo;
    QPushButton *btn3;
    QPushButton *btn2;
    QPushButton *btn1;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn0;
    QPushButton *btnErase;
    QPushButton *btnLogin;
    QLabel *labelPin;
    QPushButton *btnRemove;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelInfo = new QLabel(centralwidget);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(280, 30, 231, 61));
        QFont font;
        font.setPointSize(16);
        labelInfo->setFont(font);
        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(450, 140, 71, 51));
        btn3->setFont(font);
        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(360, 140, 71, 51));
        btn2->setFont(font);
        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(270, 140, 71, 51));
        btn1->setFont(font);
        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(270, 200, 71, 51));
        btn4->setFont(font);
        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(360, 200, 71, 51));
        btn5->setFont(font);
        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(450, 200, 71, 51));
        btn6->setFont(font);
        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(270, 260, 71, 51));
        btn7->setFont(font);
        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(360, 260, 71, 51));
        btn8->setFont(font);
        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(450, 260, 71, 51));
        btn9->setFont(font);
        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(360, 320, 71, 51));
        btn0->setFont(font);
        btnErase = new QPushButton(centralwidget);
        btnErase->setObjectName(QString::fromUtf8("btnErase"));
        btnErase->setGeometry(QRect(270, 320, 71, 51));
        btnErase->setFont(font);
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(450, 320, 71, 51));
        btnLogin->setFont(font);
        labelPin = new QLabel(centralwidget);
        labelPin->setObjectName(QString::fromUtf8("labelPin"));
        labelPin->setGeometry(QRect(280, 70, 231, 61));
        labelPin->setFont(font);
        btnRemove = new QPushButton(centralwidget);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        btnRemove->setGeometry(QRect(310, 380, 171, 41));
        btnRemove->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        btn9->raise();
        labelInfo->raise();
        btn3->raise();
        btn2->raise();
        btn1->raise();
        btn4->raise();
        btn5->raise();
        btn6->raise();
        btn7->raise();
        btn8->raise();
        btn0->raise();
        btnErase->raise();
        btnLogin->raise();
        labelPin->raise();
        btnRemove->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelInfo->setText(QCoreApplication::translate("MainWindow", "Sy\303\266t\303\244 kortti", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnErase->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        labelPin->setText(QString());
        btnRemove->setText(QCoreApplication::translate("MainWindow", "Remove card", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
