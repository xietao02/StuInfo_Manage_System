/********************************************************************************
** Form generated from reading UI file 'class_student.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS_STUDENT_H
#define UI_CLASS_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Class_Student
{
public:
    QWidget *centralwidget;
    QTableWidget *classscore;
    QLabel *label;
    QPushButton *exit;
    QTableWidget *summary_score;
    QPushButton *InsertScore;
    QPushButton *ChangeScore;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *pointschart;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Class_Student)
    {
        if (Class_Student->objectName().isEmpty())
            Class_Student->setObjectName(QString::fromUtf8("Class_Student"));
        Class_Student->resize(1011, 637);
        centralwidget = new QWidget(Class_Student);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        classscore = new QTableWidget(centralwidget);
        if (classscore->columnCount() < 2)
            classscore->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        classscore->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        classscore->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        classscore->setObjectName(QString::fromUtf8("classscore"));
        classscore->setGeometry(QRect(10, 60, 291, 441));
        classscore->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 72, 15));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(460, 20, 93, 28));
        summary_score = new QTableWidget(centralwidget);
        if (summary_score->columnCount() < 1)
            summary_score->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        summary_score->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        summary_score->setObjectName(QString::fromUtf8("summary_score"));
        summary_score->setGeometry(QRect(380, 60, 521, 151));
        summary_score->horizontalHeader()->setVisible(false);
        InsertScore = new QPushButton(centralwidget);
        InsertScore->setObjectName(QString::fromUtf8("InsertScore"));
        InsertScore->setGeometry(QRect(130, 20, 93, 28));
        ChangeScore = new QPushButton(centralwidget);
        ChangeScore->setObjectName(QString::fromUtf8("ChangeScore"));
        ChangeScore->setGeometry(QRect(240, 20, 93, 28));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 20, 93, 28));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(330, 220, 621, 361));
        pointschart = new QVBoxLayout(verticalLayoutWidget);
        pointschart->setObjectName(QString::fromUtf8("pointschart"));
        pointschart->setContentsMargins(0, 0, 0, 0);
        Class_Student->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Class_Student);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1011, 26));
        Class_Student->setMenuBar(menubar);
        statusbar = new QStatusBar(Class_Student);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Class_Student->setStatusBar(statusbar);

        retranslateUi(Class_Student);

        QMetaObject::connectSlotsByName(Class_Student);
    } // setupUi

    void retranslateUi(QMainWindow *Class_Student)
    {
        Class_Student->setWindowTitle(QCoreApplication::translate("Class_Student", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = classscore->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Class_Student", "\345\255\246\347\224\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = classscore->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Class_Student", "\346\210\220\347\273\251", nullptr));
        label->setText(QCoreApplication::translate("Class_Student", "\350\257\276\347\250\213\344\277\241\346\201\257:", nullptr));
        exit->setText(QCoreApplication::translate("Class_Student", "\350\277\224\345\233\236", nullptr));
        InsertScore->setText(QCoreApplication::translate("Class_Student", "\346\267\273\345\212\240\346\210\220\347\273\251", nullptr));
        ChangeScore->setText(QCoreApplication::translate("Class_Student", "\344\277\256\346\224\271\346\210\220\347\273\251", nullptr));
        pushButton->setText(QCoreApplication::translate("Class_Student", "\345\210\240\351\231\244\346\210\220\347\273\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Class_Student: public Ui_Class_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_STUDENT_H
