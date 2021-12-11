/********************************************************************************
** Form generated from reading UI file 'student_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_WINDOW_H
#define UI_STUDENT_WINDOW_H

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

class Ui_Student_Window
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *class_label;
    QTableWidget *ClassList;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *DESC_Order;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ASC_Order;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *exit_button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Student_Window)
    {
        if (Student_Window->objectName().isEmpty())
            Student_Window->setObjectName(QString::fromUtf8("Student_Window"));
        Student_Window->resize(558, 451);
        gridLayout = new QGridLayout(Student_Window);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        class_label = new QLabel(Student_Window);
        class_label->setObjectName(QString::fromUtf8("class_label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        class_label->setFont(font);

        verticalLayout->addWidget(class_label);

        ClassList = new QTableWidget(Student_Window);
        if (ClassList->columnCount() < 4)
            ClassList->setColumnCount(4);
        QFont font1;
        font1.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        ClassList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        ClassList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        ClassList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        ClassList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        ClassList->setObjectName(QString::fromUtf8("ClassList"));
        ClassList->setMinimumSize(QSize(450, 300));
        ClassList->horizontalHeader()->setDefaultSectionSize(134);
        ClassList->verticalHeader()->setMinimumSectionSize(25);
        ClassList->verticalHeader()->setDefaultSectionSize(28);

        verticalLayout->addWidget(ClassList);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        DESC_Order = new QPushButton(Student_Window);
        DESC_Order->setObjectName(QString::fromUtf8("DESC_Order"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DESC_Order->sizePolicy().hasHeightForWidth());
        DESC_Order->setSizePolicy(sizePolicy);
        DESC_Order->setMinimumSize(QSize(100, 40));
        DESC_Order->setMaximumSize(QSize(16777215, 80));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(11);
        DESC_Order->setFont(font3);

        horizontalLayout->addWidget(DESC_Order);

        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        ASC_Order = new QPushButton(Student_Window);
        ASC_Order->setObjectName(QString::fromUtf8("ASC_Order"));
        sizePolicy.setHeightForWidth(ASC_Order->sizePolicy().hasHeightForWidth());
        ASC_Order->setSizePolicy(sizePolicy);
        ASC_Order->setMinimumSize(QSize(100, 40));
        ASC_Order->setMaximumSize(QSize(16777215, 80));
        ASC_Order->setFont(font3);

        horizontalLayout->addWidget(ASC_Order);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        exit_button = new QPushButton(Student_Window);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        sizePolicy.setHeightForWidth(exit_button->sizePolicy().hasHeightForWidth());
        exit_button->setSizePolicy(sizePolicy);
        exit_button->setMinimumSize(QSize(100, 40));
        exit_button->setMaximumSize(QSize(16777215, 80));
        exit_button->setFont(font3);

        horizontalLayout->addWidget(exit_button);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Student_Window);

        QMetaObject::connectSlotsByName(Student_Window);
    } // setupUi

    void retranslateUi(QWidget *Student_Window)
    {
        Student_Window->setWindowTitle(QCoreApplication::translate("Student_Window", "Form", nullptr));
        class_label->setText(QCoreApplication::translate("Student_Window", "\350\257\276\347\250\213\345\220\215\345\215\225\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ClassList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Student_Window", "\350\257\276\347\250\213\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ClassList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Student_Window", "\350\257\276\347\250\213ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ClassList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Student_Window", "\346\216\210\350\257\276\350\200\201\345\270\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ClassList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Student_Window", "\346\210\220\347\273\251", nullptr));
        DESC_Order->setText(QCoreApplication::translate("Student_Window", "\346\210\220\347\273\251\351\231\215\345\272\217", nullptr));
        ASC_Order->setText(QCoreApplication::translate("Student_Window", "\346\210\220\347\273\251\345\215\207\345\272\217", nullptr));
        exit_button->setText(QCoreApplication::translate("Student_Window", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student_Window: public Ui_Student_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_WINDOW_H
