#ifndef TEACHER_WINDOW_H
#define TEACHER_WINDOW_H

#include <QWidget>
#include "global.h"
#include <QHeaderView>
#include <QTableWidget>
#include "manage_window.h"

namespace Ui {
class Teacher_Window;
}

class Teacher_Window : public QWidget,public Global
{
    Q_OBJECT

public:
    QWidget* top;
    explicit Teacher_Window(QWidget *parent = nullptr,QWidget *top = nullptr);
    ~Teacher_Window();

private:
    Ui::Teacher_Window *ui;
    QString classid_selected = "";
    QString class_selected = "";
    void reload_ClassList();
    void setupClassList();

private slots:
    void getItem(int row, int column);
    void Select_Judge();
    void manage_button_clicked();
    void delete_button_clicked();
    void add_button_clicked();
    void exit_button_clicked();
};

#endif // TEACHER_WINDOW_H
