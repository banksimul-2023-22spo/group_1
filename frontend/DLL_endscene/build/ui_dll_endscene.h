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

QT_BEGIN_NAMESPACE

class Ui_DLL_endscene
{
public:

    void setupUi(QDialog *DLL_endscene)
    {
        if (DLL_endscene->objectName().isEmpty())
            DLL_endscene->setObjectName(QString::fromUtf8("DLL_endscene"));
        DLL_endscene->resize(800, 600);
        DLL_endscene->setMaximumSize(QSize(800, 600));

        retranslateUi(DLL_endscene);

        QMetaObject::connectSlotsByName(DLL_endscene);
    } // setupUi

    void retranslateUi(QDialog *DLL_endscene)
    {
        DLL_endscene->setWindowTitle(QCoreApplication::translate("DLL_endscene", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DLL_endscene: public Ui_DLL_endscene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLL_ENDSCENE_H
