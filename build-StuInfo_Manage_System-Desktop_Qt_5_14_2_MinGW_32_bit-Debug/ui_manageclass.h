/********************************************************************************
** Form generated from reading UI file 'manageclass.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGECLASS_H
#define UI_MANAGECLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageClass
{
public:

    void setupUi(QWidget *ManageClass)
    {
        if (ManageClass->objectName().isEmpty())
            ManageClass->setObjectName(QString::fromUtf8("ManageClass"));
        ManageClass->resize(700, 500);

        retranslateUi(ManageClass);

        QMetaObject::connectSlotsByName(ManageClass);
    } // setupUi

    void retranslateUi(QWidget *ManageClass)
    {
        ManageClass->setWindowTitle(QCoreApplication::translate("ManageClass", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageClass: public Ui_ManageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGECLASS_H
