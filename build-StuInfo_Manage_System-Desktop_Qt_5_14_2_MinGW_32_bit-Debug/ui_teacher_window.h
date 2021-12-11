/********************************************************************************
** Form generated from reading UI file 'teacher_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_WINDOW_H
#define UI_TEACHER_WINDOW_H

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

class Ui_Teacher_Window
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *class_label;
    QTableWidget *ClassList;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QPushButton *manage_button;
    QSpacerItem *verticalSpacer_3;
    QPushButton *delete_button;
    QSpacerItem *verticalSpacer_2;
    QPushButton *add_button;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *classname;
    QSpacerItem *verticalSpacer;
    QPushButton *exit_button;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Teacher_Window)
    {
        if (Teacher_Window->objectName().isEmpty())
            Teacher_Window->setObjectName(QString::fromUtf8("Teacher_Window"));
        Teacher_Window->resize(537, 410);
        gridLayout = new QGridLayout(Teacher_Window);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        class_label = new QLabel(Teacher_Window);
        class_label->setObjectName(QString::fromUtf8("class_label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        class_label->setFont(font);

        verticalLayout_2->addWidget(class_label);

        ClassList = new QTableWidget(Teacher_Window);
        if (ClassList->columnCount() < 2)
            ClassList->setColumnCount(2);
        QFont font1;
        font1.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        ClassList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        ClassList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        ClassList->setObjectName(QString::fromUtf8("ClassList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClassList->sizePolicy().hasHeightForWidth());
        ClassList->setSizePolicy(sizePolicy);
        ClassList->setMinimumSize(QSize(250, 311));
        QFont font2;
        font2.setPointSize(10);
        ClassList->setFont(font2);
        ClassList->horizontalHeader()->setMinimumSectionSize(15);
        ClassList->horizontalHeader()->setDefaultSectionSize(124);
        ClassList->verticalHeader()->setDefaultSectionSize(25);

        verticalLayout_2->addWidget(ClassList);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(47, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_5);

        manage_button = new QPushButton(Teacher_Window);
        manage_button->setObjectName(QString::fromUtf8("manage_button"));
        sizePolicy.setHeightForWidth(manage_button->sizePolicy().hasHeightForWidth());
        manage_button->setSizePolicy(sizePolicy);
        manage_button->setMinimumSize(QSize(90, 32));
        manage_button->setMaximumSize(QSize(500, 100));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(11);
        manage_button->setFont(font3);

        verticalLayout->addWidget(manage_button);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        delete_button = new QPushButton(Teacher_Window);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));
        sizePolicy.setHeightForWidth(delete_button->sizePolicy().hasHeightForWidth());
        delete_button->setSizePolicy(sizePolicy);
        delete_button->setMinimumSize(QSize(90, 32));
        delete_button->setMaximumSize(QSize(500, 100));
        delete_button->setFont(font3);

        verticalLayout->addWidget(delete_button);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        add_button = new QPushButton(Teacher_Window);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        sizePolicy.setHeightForWidth(add_button->sizePolicy().hasHeightForWidth());
        add_button->setSizePolicy(sizePolicy);
        add_button->setMinimumSize(QSize(89, 32));
        add_button->setMaximumSize(QSize(500, 100));
        add_button->setFont(font3);

        verticalLayout->addWidget(add_button);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_4);

        classname = new QLineEdit(Teacher_Window);
        classname->setObjectName(QString::fromUtf8("classname"));
        sizePolicy.setHeightForWidth(classname->sizePolicy().hasHeightForWidth());
        classname->setSizePolicy(sizePolicy);
        classname->setMinimumSize(QSize(160, 32));
        classname->setMaximumSize(QSize(500, 150));
        classname->setFont(font3);

        verticalLayout->addWidget(classname);

        verticalSpacer = new QSpacerItem(20, 55, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        exit_button = new QPushButton(Teacher_Window);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        sizePolicy.setHeightForWidth(exit_button->sizePolicy().hasHeightForWidth());
        exit_button->setSizePolicy(sizePolicy);
        exit_button->setMinimumSize(QSize(90, 32));
        exit_button->setMaximumSize(QSize(500, 100));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        exit_button->setFont(font4);

        verticalLayout->addWidget(exit_button);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        retranslateUi(Teacher_Window);

        QMetaObject::connectSlotsByName(Teacher_Window);
    } // setupUi

    void retranslateUi(QWidget *Teacher_Window)
    {
        Teacher_Window->setWindowTitle(QCoreApplication::translate("Teacher_Window", "Form", nullptr));
        class_label->setText(QCoreApplication::translate("Teacher_Window", "\350\257\276\347\250\213\345\220\215\345\215\225\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ClassList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Teacher_Window", "\350\257\276\347\250\213\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ClassList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Teacher_Window", "\350\257\276\347\250\213ID", nullptr));
        manage_button->setText(QCoreApplication::translate("Teacher_Window", "\347\256\241\347\220\206\350\257\276\347\250\213", nullptr));
        delete_button->setText(QCoreApplication::translate("Teacher_Window", "\345\210\240\351\231\244\350\257\276\347\250\213", nullptr));
        add_button->setText(QCoreApplication::translate("Teacher_Window", "\346\226\260\345\242\236\350\257\276\347\250\213", nullptr));
        exit_button->setText(QCoreApplication::translate("Teacher_Window", "\351\200\200\345\207\272\347\231\273\351\231\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teacher_Window: public Ui_Teacher_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_WINDOW_H
