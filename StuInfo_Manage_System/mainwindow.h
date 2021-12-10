#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "global.h"
#include "teacher_window.h"
#include "student_window.h"

class QLabel;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow,public Global
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Teacher_Window *w1;
    Student_Window *w2;
    QString Username_this;
    QString Password_this;

signals:

private slots:
    void Login_Button_clicked();
    void Signup_Button_clicked();
    void Reset_Button_clicked();
    void Input_Judge();

};
#endif // MAINWINDOW_H
