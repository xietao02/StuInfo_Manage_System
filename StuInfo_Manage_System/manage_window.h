#ifndef Manage_Window_H
#define Manage_Window_H

#include <QWidget>
#include "global.h"
#include "addstudent_window.h"
#include <QInputDialog>

#include <QtCharts>
QT_CHARTS_USE_NAMESPACE

namespace Ui {
class Manage_Window;
}

class Manage_Window : public QWidget,public Global
{
    Q_OBJECT

public:
    QWidget* top;
    explicit Manage_Window(QWidget *parent = nullptr, QWidget *top = nullptr, QString classname = "", QString classid = "");
    ~Manage_Window();

private:
    int distribution[10];
    QString student_selected;
    QString classid_this;
    QString classname_this;
    int grade;
    int highest_score;
    int lowest_score;
    float average_score;
    int total;
    int pass_num;
    int above_num;
    QString highest_stu = "-";
    QString lowest_stu = "-";
    bool order_mode = true;

    AddStudent_window* w1;
    Ui::Manage_Window *ui;
    void setupList();
    void reload_analysis();

    QChartView *chartView;
    QChart *chart;
    QValueAxis *axisY;
    void CreateChart();

signals:
    void init();

private slots:
    void exit_button_clicked();
    void reset_button_clicked();
    void reload_StudentList();
    void reloadChart();
    void getItem(int row, int column);
    void delete_button_clicked();
    void add_button_clicked();
    void Select_Judge();
};

#endif // Manage_Window_H
