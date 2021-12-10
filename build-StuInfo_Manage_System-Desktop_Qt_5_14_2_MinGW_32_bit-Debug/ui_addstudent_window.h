/********************************************************************************
** Form generated from reading UI file 'addstudent_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_WINDOW_H
#define UI_ADDSTUDENT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudent_window
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *listname;
    QTableWidget *addList;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *name;
    QLineEdit *name_in;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *grade;
    QLineEdit *grade_in;
    QSpacerItem *verticalSpacer;
    QPushButton *affirm;
    QSpacerItem *verticalSpacer_5;
    QPushButton *finish;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *AddStudent_window)
    {
        if (AddStudent_window->objectName().isEmpty())
            AddStudent_window->setObjectName(QString::fromUtf8("AddStudent_window"));
        AddStudent_window->resize(521, 400);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddStudent_window->sizePolicy().hasHeightForWidth());
        AddStudent_window->setSizePolicy(sizePolicy);
        AddStudent_window->setMinimumSize(QSize(520, 400));
        gridLayout = new QGridLayout(AddStudent_window);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        listname = new QLabel(AddStudent_window);
        listname->setObjectName(QString::fromUtf8("listname"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        listname->setFont(font);

        verticalLayout_4->addWidget(listname);

        addList = new QTableWidget(AddStudent_window);
        if (addList->columnCount() < 2)
            addList->setColumnCount(2);
        QFont font1;
        font1.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        addList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        addList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        addList->setObjectName(QString::fromUtf8("addList"));
        addList->setMinimumSize(QSize(201, 291));
        QFont font2;
        font2.setPointSize(11);
        addList->setFont(font2);

        verticalLayout_4->addWidget(addList);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        name = new QLabel(AddStudent_window);
        name->setObjectName(QString::fromUtf8("name"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(12);
        name->setFont(font3);

        verticalLayout->addWidget(name);

        name_in = new QLineEdit(AddStudent_window);
        name_in->setObjectName(QString::fromUtf8("name_in"));
        sizePolicy.setHeightForWidth(name_in->sizePolicy().hasHeightForWidth());
        name_in->setSizePolicy(sizePolicy);
        name_in->setMinimumSize(QSize(180, 27));
        name_in->setMaximumSize(QSize(500, 150));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font4.setPointSize(11);
        name_in->setFont(font4);

        verticalLayout->addWidget(name_in);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        grade = new QLabel(AddStudent_window);
        grade->setObjectName(QString::fromUtf8("grade"));
        sizePolicy1.setHeightForWidth(grade->sizePolicy().hasHeightForWidth());
        grade->setSizePolicy(sizePolicy1);
        grade->setFont(font3);

        verticalLayout_2->addWidget(grade);

        grade_in = new QLineEdit(AddStudent_window);
        grade_in->setObjectName(QString::fromUtf8("grade_in"));
        sizePolicy.setHeightForWidth(grade_in->sizePolicy().hasHeightForWidth());
        grade_in->setSizePolicy(sizePolicy);
        grade_in->setMinimumSize(QSize(180, 27));
        grade_in->setMaximumSize(QSize(500, 150));
        grade_in->setFont(font4);

        verticalLayout_2->addWidget(grade_in);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer);

        affirm = new QPushButton(AddStudent_window);
        affirm->setObjectName(QString::fromUtf8("affirm"));
        sizePolicy.setHeightForWidth(affirm->sizePolicy().hasHeightForWidth());
        affirm->setSizePolicy(sizePolicy);
        affirm->setMinimumSize(QSize(155, 30));
        affirm->setMaximumSize(QSize(500, 100));
        affirm->setFont(font4);

        verticalLayout_3->addWidget(affirm);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_5);

        finish = new QPushButton(AddStudent_window);
        finish->setObjectName(QString::fromUtf8("finish"));
        sizePolicy.setHeightForWidth(finish->sizePolicy().hasHeightForWidth());
        finish->setSizePolicy(sizePolicy);
        finish->setMinimumSize(QSize(155, 30));
        finish->setMaximumSize(QSize(500, 100));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        finish->setFont(font5);

        verticalLayout_3->addWidget(finish);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_4);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);


        retranslateUi(AddStudent_window);

        QMetaObject::connectSlotsByName(AddStudent_window);
    } // setupUi

    void retranslateUi(QWidget *AddStudent_window)
    {
        AddStudent_window->setWindowTitle(QCoreApplication::translate("AddStudent_window", "Form", nullptr));
        listname->setText(QCoreApplication::translate("AddStudent_window", "\345\267\262\345\242\236\345\255\246\347\224\237\345\220\215\345\215\225\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = addList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AddStudent_window", "\345\255\246\347\224\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = addList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AddStudent_window", "\346\210\220\347\273\251", nullptr));
        name->setText(QCoreApplication::translate("AddStudent_window", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        grade->setText(QCoreApplication::translate("AddStudent_window", "\346\210\220\347\273\251\357\274\232", nullptr));
        affirm->setText(QCoreApplication::translate("AddStudent_window", "\345\242\236\345\212\240", nullptr));
        finish->setText(QCoreApplication::translate("AddStudent_window", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudent_window: public Ui_AddStudent_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_WINDOW_H
