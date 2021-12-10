#ifndef STUDENT_WINDOW_H
#define STUDENT_WINDOW_H

#include <QWidget>
#include "global.h"

namespace Ui {
class Student_Window;
}

class Student_Window : public QWidget, public Global
{
    Q_OBJECT

public:
    explicit Student_Window(QWidget *parent = nullptr, QWidget * top = nullptr);
    ~Student_Window();

private:
    QWidget* top;
    Ui::Student_Window *ui;
    void setup_ClassList();

signals:
    void init();

private slots:
    void load_ClassList();
    void exit_button_clicked();

};

#endif // STUDENT_WINDOW_H
