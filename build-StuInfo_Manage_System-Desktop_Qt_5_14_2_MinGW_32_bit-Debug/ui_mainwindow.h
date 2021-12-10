/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *SystemName;
    QLineEdit *UserName_in;
    QLabel *UserName;
    QLabel *Password;
    QLineEdit *Password_in;
    QRadioButton *ID_Teacher;
    QLabel *ID;
    QRadioButton *ID_Student;
    QPushButton *Login_Button;
    QPushButton *Signup_Button;
    QPushButton *Reset_Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(380, 280);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(380, 280));
        MainWindow->setMaximumSize(QSize(380, 280));
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SystemName = new QLabel(centralwidget);
        SystemName->setObjectName(QString::fromUtf8("SystemName"));
        SystemName->setGeometry(QRect(69, 15, 241, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        SystemName->setFont(font);
        SystemName->setScaledContents(false);
        UserName_in = new QLineEdit(centralwidget);
        UserName_in->setObjectName(QString::fromUtf8("UserName_in"));
        UserName_in->setGeometry(QRect(150, 75, 160, 30));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(UserName_in->sizePolicy().hasHeightForWidth());
        UserName_in->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(10);
        UserName_in->setFont(font1);
        UserName = new QLabel(centralwidget);
        UserName->setObjectName(QString::fromUtf8("UserName"));
        UserName->setGeometry(QRect(75, 80, 70, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(12);
        UserName->setFont(font2);
        Password = new QLabel(centralwidget);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(95, 120, 70, 25));
        Password->setFont(font2);
        Password_in = new QLineEdit(centralwidget);
        Password_in->setObjectName(QString::fromUtf8("Password_in"));
        Password_in->setGeometry(QRect(150, 115, 160, 30));
        Password_in->setFont(font1);
        ID_Teacher = new QRadioButton(centralwidget);
        ID_Teacher->setObjectName(QString::fromUtf8("ID_Teacher"));
        ID_Teacher->setGeometry(QRect(165, 160, 70, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(11);
        ID_Teacher->setFont(font3);
        ID = new QLabel(centralwidget);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setGeometry(QRect(58, 159, 85, 20));
        ID->setFont(font2);
        ID_Student = new QRadioButton(centralwidget);
        ID_Student->setObjectName(QString::fromUtf8("ID_Student"));
        ID_Student->setGeometry(QRect(250, 160, 70, 20));
        ID_Student->setFont(font3);
        Login_Button = new QPushButton(centralwidget);
        Login_Button->setObjectName(QString::fromUtf8("Login_Button"));
        Login_Button->setGeometry(QRect(155, 200, 70, 30));
        Login_Button->setFont(font2);
        Signup_Button = new QPushButton(centralwidget);
        Signup_Button->setObjectName(QString::fromUtf8("Signup_Button"));
        Signup_Button->setGeometry(QRect(65, 200, 70, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setWeight(50);
        Signup_Button->setFont(font4);
        Reset_Button = new QPushButton(centralwidget);
        Reset_Button->setObjectName(QString::fromUtf8("Reset_Button"));
        Reset_Button->setGeometry(QRect(245, 200, 70, 30));
        Reset_Button->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setEnabled(true);
        menubar->setGeometry(QRect(0, 0, 380, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        SystemName->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        UserName->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        Password->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        ID_Teacher->setText(QCoreApplication::translate("MainWindow", "\346\225\231\345\270\210", nullptr));
        ID->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225\350\272\253\344\273\275:", nullptr));
        ID_Student->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237", nullptr));
        Login_Button->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        Signup_Button->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        Reset_Button->setText(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
