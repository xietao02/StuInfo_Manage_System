#ifndef ADDSTUDENT_WINDOW_H
#define ADDSTUDENT_WINDOW_H

#include <QWidget>
#include "global.h"

namespace Ui {
class AddStudent_window;
}

class AddStudent_window : public QWidget, public Global
{
    Q_OBJECT

public:
    QWidget* top;
    explicit AddStudent_window(QWidget *parent = nullptr, QWidget *top = nullptr);
    ~AddStudent_window();

private:
    Ui::AddStudent_window *ui;
    int addlist_rows = 0;

signals:
    void reloadStudentList_signal();
    void reloadChart_signal();

private slots:
    void add_student();
    void backTotop();
};

#endif // ADDSTUDENT_WINDOW_H
