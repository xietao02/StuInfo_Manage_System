#include "manage_window.h"
#include "ui_manage_window.h"

Manage_Window::Manage_Window(QWidget *parent,QWidget *top,QString classname,QString classid) :
    QWidget(parent),top(top),classid_this(classid),classname_this(classname),
    ui(new Ui::Manage_Window)
{
    ui->setupUi(this);
    setWindowTitle("课程管理面板  |  课程：" + classname + "   课程ID：" + classid);
    ui->ASC_Order->setObjectName("ASC");
    ui->DESC_Order->setObjectName("DESC");
    ui->reset_button->setObjectName("reset");
    ui->delete_button->setObjectName("delete");

    connect(ui->StudentList,SIGNAL(cellClicked(int, int)),this,SLOT(getItem(int, int)));
    connect(ui->exit_button,SIGNAL(clicked()),this,SLOT(exit_button_clicked()));
    connect(ui->ASC_Order,SIGNAL(clicked()),this,SLOT(reload_StudentList()));
    connect(ui->DESC_Order,SIGNAL(clicked()),this,SLOT(reload_StudentList()));
    connect(this,SIGNAL(init()),this,SLOT(reload_StudentList()));
    connect(ui->reset_button,SIGNAL(clicked()),this,SLOT(Select_Judge()));
    connect(ui->delete_button,SIGNAL(clicked()),this,SLOT(Select_Judge()));
    connect(ui->add_button,SIGNAL(clicked()),this,SLOT(add_button_clicked()));

    setupList();
    CreateChart();
}

Manage_Window::~Manage_Window()
{
    delete ui;
}


void Manage_Window::setupList(){
    ui->StudentList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->StudentList->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->StudentList->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->Analysis->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->Analysis->setSelectionMode(QAbstractItemView::NoSelection);
    ui->Analysis->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->Analysis->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    emit init();
}

void Manage_Window::reload_StudentList(){
    ui->StudentList->clearContents();

    QSqlDatabase db = getdb();
    QSqlQuery query(db);

    auto *sender1 = qobject_cast<QObject *>(sender());
    if(sender1->objectName() == "ASC")order_mode = true;
    else if(sender1->objectName() == "DESC")order_mode = false;
    if(order_mode)query.exec("select * from Student_ClassList order by Grades ASC");
    else query.exec("select * from Student_ClassList order by Grades DESC");

    total = 0;
    highest_score = -1;
    lowest_score = 101;
    average_score = 0;
    above_num = 0;
    pass_num = 0;
    for(int i = 0; i < 10; i++)distribution[i] = 0;
    int grades_int;
    while(query.next()){
        QString classid_db = query.value(0).toString();
        QString student_db = query.value(2).toString();
        QString grades_db = query.value(3).toString();

        if(classid_this.compare(classid_db)==0){
            ui->StudentList->setRowCount(total+1);
            ui->StudentList->setItem(total,0,new QTableWidgetItem(student_db));
            ui->StudentList->setItem(total++,1,new QTableWidgetItem(grades_db));
            grades_int = grades_db.toInt();
            if(grades_int >= 0 && grades_int <= 10)distribution[0]++;
            else if(grades_int > 10 && grades_int <= 20)distribution[1]++;
            else if(grades_int > 20 && grades_int <= 30)distribution[2]++;
            else if(grades_int > 30 && grades_int <= 40)distribution[3]++;
            else if(grades_int > 40 && grades_int <= 50)distribution[4]++;
            else if(grades_int > 50 && grades_int <= 60)distribution[5]++;
            else if(grades_int > 60 && grades_int <= 70)distribution[6]++;
            else if(grades_int > 70 && grades_int <= 80)distribution[7]++;
            else if(grades_int > 80 && grades_int <= 90)distribution[8]++;
            else distribution[9]++;
            if(grades_int > highest_score){
                highest_score = grades_int;
                highest_stu = student_db;
            }
            if(grades_int < lowest_score){
                lowest_score = grades_int;
                lowest_stu = student_db;
            }
            if(grades_int >= 80){
                above_num += 1;
            }
            if(grades_int >= 60){
                pass_num += 1;
            }
            average_score += grades_int;
        }
    }
    ui->StudentList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->StudentList->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    if(total == 0)average_score = 0;
    else average_score /= total;
    reload_analysis();
}

void Manage_Window::exit_button_clicked(){
    top->show();
    hide();
}

void Manage_Window::getItem(int row, int){
    auto a = ui->StudentList->item(row,0);
    student_selected = a->text();
}

void Manage_Window::reset_button_clicked(){
    QSqlDatabase db = getdb();
    QSqlQuery query(db);
    int Grades;
    query.exec("select * from Student_ClassList");
    while(query.next()){
                   QString classid_db = query.value(0).toString();
                   QString student_db = query.value(2).toString();
                   if(classid_this.compare(classid_db)==0 && student_selected.compare(student_db)==0){
                       QString grades_db = query.value(3).toString();
                       Grades = grades_db.toInt();
                   }
              }
    QString temp = "请输入" + student_selected + "的新成绩";
    int reset_Grades = QInputDialog::getInt(this,"修改",temp,Grades,0,100,1);

    QString reset_Grades_string =  QString::number(reset_Grades);
    QString tempsql = "UPDATE Student_ClassList SET Grades = " + reset_Grades_string + " WHERE ClassID = " + classid_this + " AND Student = '" + student_selected +"'";
    query.exec(tempsql);
    reload_StudentList();
    reloadChart();
    student_selected = "";
}

void Manage_Window::delete_button_clicked(){
    QMessageBox confirmation(QMessageBox::Warning,"警告","确认删除学生成绩？\n删除后无法恢复!",QMessageBox::Yes | QMessageBox::No,this);
    confirmation.setDefaultButton(QMessageBox::No);
    if(confirmation.exec() == QMessageBox::Yes){
        QSqlDatabase db = getdb();
        QSqlQuery query(db);
        QString temp ="delete from Student_ClassList where ClassID = " + classid_this + " and Student = '" + student_selected + "'";
        query.exec(temp);
    }
    reload_StudentList();
    reloadChart();
    student_selected = "";
}

void Manage_Window::add_button_clicked(){
    student_selected = "";
    w1 = new AddStudent_window(nullptr,this);
    connect(w1,SIGNAL(reloadStudentList_signal()),this,SLOT(reload_StudentList()));
    connect(w1,SIGNAL(reloadChart_signal()),this,SLOT(reloadChart()));
    w1->show();
}

void Manage_Window::Select_Judge(){
    if(student_selected == "")QMessageBox::warning(this, "警告", "未选择学生！");
    else {
        QPushButton *button = qobject_cast<QPushButton *>(sender());
        if(button->objectName() == "reset")reset_button_clicked();
        else delete_button_clicked();
    }
}

void Manage_Window::reload_analysis(){
    ui->Analysis->clearContents();

    ui->Analysis->verticalHeader()->setVisible(false);
    ui->Analysis->horizontalHeader()->setVisible(false);
    ui->Analysis->setRowCount(4);
    ui->Analysis->setColumnCount(4);
    QString total_string = "-";
    QString average_score_string = "-";
    QString highest_score_string = "-";
    QString lowest_score_string = "-";

    QString pass_num_string;
    QString pass_rate_string;
    QString temp1 = "-";

    QString above_num_string;
    QString above_rate_string;
    QString temp2 = "-";

    if(total != 0){
    total_string = QString::number(total);
    if(average_score-static_cast<int>(average_score)==0)average_score_string = QString::number(average_score);
    else average_score_string = QString::number(average_score,'f',2);
    highest_score_string = QString::number(highest_score);
    lowest_score_string = QString::number(lowest_score);

    pass_num_string = QString::number(pass_num);
    float pass_rate = static_cast<float>(pass_num) / static_cast<float>(total);
    pass_rate *= 100;
    if(pass_rate-static_cast<int>(pass_rate)==0)pass_rate_string = QString::number(pass_rate);
    else pass_rate_string = QString::number(pass_rate,'f',2);
    temp1 = pass_num_string + " | " + pass_rate_string + "%";

    above_num_string = QString::number(above_num);
    float above_rate = static_cast<float>(above_num) / static_cast<float>(total);
    above_rate *= 100;
    if(above_rate-static_cast<int>(above_rate)==0)above_rate_string = QString::number(above_rate);
    else above_rate_string = QString::number(above_rate,'f',2);
    temp2 = above_num_string + " | " + above_rate_string + "%";
    }
    if(total == 1){
        lowest_score_string = "-";
        lowest_stu = "-";
    }

    ui->Analysis->setItem(0, 0,new QTableWidgetItem("班级总人数"));
    ui->Analysis->setItem(1, 0,new QTableWidgetItem("平均分"));
    ui->Analysis->setItem(2, 0,new QTableWidgetItem("最高分"));
    ui->Analysis->setItem(3, 0,new QTableWidgetItem("最低分"));
    ui->Analysis->setItem(0, 1,new QTableWidgetItem(total_string));
    ui->Analysis->setItem(1, 1,new QTableWidgetItem(average_score_string));
    ui->Analysis->setItem(2, 1,new QTableWidgetItem(highest_score_string));
    ui->Analysis->setItem(3, 1,new QTableWidgetItem(lowest_score_string));
    ui->Analysis->setItem(0, 2,new QTableWidgetItem("60分以上人数 | 比率"));
    ui->Analysis->setItem(1, 2,new QTableWidgetItem("80分以上人数 | 比率"));
    ui->Analysis->setItem(2, 2,new QTableWidgetItem("最高分学生"));
    ui->Analysis->setItem(3, 2,new QTableWidgetItem("最低分学生"));
    ui->Analysis->setItem(0, 3,new QTableWidgetItem(temp1));
    ui->Analysis->setItem(1, 3,new QTableWidgetItem(temp2));
    ui->Analysis->setItem(2, 3,new QTableWidgetItem(highest_stu));
    ui->Analysis->setItem(3, 3,new QTableWidgetItem(lowest_stu));
}

void Manage_Window::CreateChart() {
    chart = new QChart();

    QBarSet *set = new QBarSet("学生人数");
    *set << distribution[0] << distribution[1] << distribution[2] << distribution[3] << distribution[4]
         << distribution[5] << distribution[6] << distribution[7] << distribution[8] << distribution[9];
    set->setLabelColor(QColor(0,0,0));
    set->setColor(QColor(244,164,96));
    QBarSeries *series = new QBarSeries();
    series->append(set);
    series->setVisible(true);
    series->setLabelsVisible(true);

    chart->addSeries(series);
    chart->setTitleBrush(QBrush(QColor(0,0,0)));
    chart->setTitleFont(QFont("Microsoft YaHei",10));
    chart->setTitle("成绩分布图");

    QBarCategoryAxis *axisX = new QBarCategoryAxis;
    axisX->append("0-10");
    axisX->append("11-20");
    axisX->append("21-30");
    axisX->append("31-40");
    axisX->append("41-50");
    axisX->append("51-60");
    axisX->append("61-70");
    axisX->append("71-80");
    axisX->append("81-90");
    axisX->append("91-100");
    axisX->setLabelsColor(QColor(0,0,0));
    axisX->setLabelsFont(QFont("Microsoft YaHei",7));

    QValueAxis *axisY = new QValueAxis;
    int max = 0;
    for(int i = 0; i < 10 ; i++){
        if(distribution[i] > max)max = distribution[i];
    }
    axisY->setRange(0,max);
    axisY->setTitleText("人数");
    axisY->setTickCount(max+1);
    axisY->setLabelFormat("%d");

    chart->addAxis(axisX,Qt::AlignBottom);
    chart->addAxis(axisY,Qt::AlignLeft);
    //只有一个柱形数据组，故关闭legend
    chart->legend()->setVisible(false);

    chartView = new QChartView(chart);
    chartView->chart()->series().clear();
    //打开chart抗锯齿
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->chart_layout->addWidget(chartView);
    chartView->setMinimumWidth(700);
    chartView->setMinimumHeight(370);
}

void Manage_Window::reloadChart(){
    chart->removeAllSeries();
    QBarSet *set = new QBarSet("学生人数");
    *set << distribution[0] << distribution[1] << distribution[2] << distribution[3] << distribution[4]
         << distribution[5] << distribution[6] << distribution[7] << distribution[8] << distribution[9];
    set->setLabelColor(QColor(0,0,0));
    set->setColor(QColor(244,164,96));
    QBarSeries *series = new QBarSeries();
    series->append(set);
    series->setVisible(true);
    series->setLabelsVisible(true);
    chart->addSeries(series);
}
