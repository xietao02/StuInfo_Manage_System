/********************************************************************************
** Form generated from reading UI file 'manage_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_WINDOW_H
#define UI_MANAGE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manage_Window
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label1;
    QTableWidget *StudentList;
    QHBoxLayout *horizontalLayout;
    QPushButton *DESC_Order;
    QSpacerItem *horizontalSpacer;
    QPushButton *ASC_Order;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *reset_button;
    QPushButton *add_button;
    QPushButton *delete_button;
    QPushButton *exit_button;
    QVBoxLayout *verticalLayout_2;
    QLabel *label2;
    QTableWidget *Analysis;
    QVBoxLayout *chart_layout;

    void setupUi(QWidget *Manage_Window)
    {
        if (Manage_Window->objectName().isEmpty())
            Manage_Window->setObjectName(QString::fromUtf8("Manage_Window"));
        Manage_Window->resize(1150, 700);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Manage_Window->sizePolicy().hasHeightForWidth());
        Manage_Window->setSizePolicy(sizePolicy);
        Manage_Window->setMinimumSize(QSize(1150, 700));
        Manage_Window->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(Manage_Window);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label1 = new QLabel(Manage_Window);
        label1->setObjectName(QString::fromUtf8("label1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label1->sizePolicy().hasHeightForWidth());
        label1->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label1->setFont(font);

        verticalLayout_3->addWidget(label1);

        StudentList = new QTableWidget(Manage_Window);
        if (StudentList->columnCount() < 2)
            StudentList->setColumnCount(2);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        StudentList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        StudentList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        StudentList->setObjectName(QString::fromUtf8("StudentList"));
        StudentList->setMaximumSize(QSize(600, 16777215));
        QFont font2;
        font2.setPointSize(10);
        StudentList->setFont(font2);
        StudentList->horizontalHeader()->setDefaultSectionSize(137);

        verticalLayout_3->addWidget(StudentList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        DESC_Order = new QPushButton(Manage_Window);
        DESC_Order->setObjectName(QString::fromUtf8("DESC_Order"));
        sizePolicy.setHeightForWidth(DESC_Order->sizePolicy().hasHeightForWidth());
        DESC_Order->setSizePolicy(sizePolicy);
        DESC_Order->setMinimumSize(QSize(100, 33));
        DESC_Order->setMaximumSize(QSize(200, 100));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(11);
        DESC_Order->setFont(font3);

        horizontalLayout->addWidget(DESC_Order);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ASC_Order = new QPushButton(Manage_Window);
        ASC_Order->setObjectName(QString::fromUtf8("ASC_Order"));
        ASC_Order->setEnabled(true);
        sizePolicy.setHeightForWidth(ASC_Order->sizePolicy().hasHeightForWidth());
        ASC_Order->setSizePolicy(sizePolicy);
        ASC_Order->setMinimumSize(QSize(100, 33));
        ASC_Order->setMaximumSize(QSize(200, 100));
        ASC_Order->setFont(font3);

        horizontalLayout->addWidget(ASC_Order);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        reset_button = new QPushButton(Manage_Window);
        reset_button->setObjectName(QString::fromUtf8("reset_button"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(reset_button->sizePolicy().hasHeightForWidth());
        reset_button->setSizePolicy(sizePolicy2);
        reset_button->setMinimumSize(QSize(120, 33));
        reset_button->setMaximumSize(QSize(160, 70));
        reset_button->setFont(font3);

        verticalLayout->addWidget(reset_button);

        add_button = new QPushButton(Manage_Window);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        sizePolicy2.setHeightForWidth(add_button->sizePolicy().hasHeightForWidth());
        add_button->setSizePolicy(sizePolicy2);
        add_button->setMinimumSize(QSize(120, 33));
        add_button->setMaximumSize(QSize(160, 70));
        add_button->setFont(font3);

        verticalLayout->addWidget(add_button);

        delete_button = new QPushButton(Manage_Window);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));
        sizePolicy2.setHeightForWidth(delete_button->sizePolicy().hasHeightForWidth());
        delete_button->setSizePolicy(sizePolicy2);
        delete_button->setMinimumSize(QSize(120, 33));
        delete_button->setMaximumSize(QSize(160, 70));
        delete_button->setFont(font3);

        verticalLayout->addWidget(delete_button);

        exit_button = new QPushButton(Manage_Window);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        sizePolicy2.setHeightForWidth(exit_button->sizePolicy().hasHeightForWidth());
        exit_button->setSizePolicy(sizePolicy2);
        exit_button->setMinimumSize(QSize(120, 33));
        exit_button->setMaximumSize(QSize(160, 70));
        exit_button->setFont(font3);

        verticalLayout->addWidget(exit_button);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label2 = new QLabel(Manage_Window);
        label2->setObjectName(QString::fromUtf8("label2"));
        sizePolicy1.setHeightForWidth(label2->sizePolicy().hasHeightForWidth());
        label2->setSizePolicy(sizePolicy1);
        label2->setFont(font);

        verticalLayout_2->addWidget(label2);

        Analysis = new QTableWidget(Manage_Window);
        Analysis->setObjectName(QString::fromUtf8("Analysis"));
        sizePolicy2.setHeightForWidth(Analysis->sizePolicy().hasHeightForWidth());
        Analysis->setSizePolicy(sizePolicy2);
        Analysis->setMinimumSize(QSize(700, 200));
        Analysis->setMaximumSize(QSize(16777215, 300));
        QFont font4;
        font4.setPointSize(9);
        Analysis->setFont(font4);

        verticalLayout_2->addWidget(Analysis);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);

        chart_layout = new QVBoxLayout();
        chart_layout->setObjectName(QString::fromUtf8("chart_layout"));

        gridLayout->addLayout(chart_layout, 1, 1, 1, 2);


        retranslateUi(Manage_Window);

        QMetaObject::connectSlotsByName(Manage_Window);
    } // setupUi

    void retranslateUi(QWidget *Manage_Window)
    {
        Manage_Window->setWindowTitle(QCoreApplication::translate("Manage_Window", "Form", nullptr));
        label1->setText(QCoreApplication::translate("Manage_Window", "\347\217\255\347\272\247\346\246\202\345\206\265\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = StudentList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Manage_Window", "\345\255\246\347\224\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = StudentList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Manage_Window", "\346\210\220\347\273\251", nullptr));
        DESC_Order->setText(QCoreApplication::translate("Manage_Window", "\346\210\220\347\273\251\351\231\215\345\272\217", nullptr));
        ASC_Order->setText(QCoreApplication::translate("Manage_Window", "\346\210\220\347\273\251\345\215\207\345\272\217", nullptr));
        reset_button->setText(QCoreApplication::translate("Manage_Window", "\344\277\256\346\224\271\346\210\220\347\273\251", nullptr));
        add_button->setText(QCoreApplication::translate("Manage_Window", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        delete_button->setText(QCoreApplication::translate("Manage_Window", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        exit_button->setText(QCoreApplication::translate("Manage_Window", "\345\256\214\346\210\220\347\256\241\347\220\206", nullptr));
        label2->setText(QCoreApplication::translate("Manage_Window", "\346\210\220\347\273\251\345\210\206\346\236\220\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manage_Window: public Ui_Manage_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_WINDOW_H
