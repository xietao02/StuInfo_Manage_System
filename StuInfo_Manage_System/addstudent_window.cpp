#include "addstudent_window.h"
#include "ui_addstudent_window.h"

AddStudent_window::AddStudent_window(QWidget *parent, QWidget *top) :
    QWidget(parent),top(top),
    ui(new Ui::AddStudent_window)
{
    ui->setupUi(this);
    setWindowTitle("添加学生");
    ui->addList->setColumnWidth(0,100);
    ui->addList->setColumnWidth(1,80);
    ui->addList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->addList->verticalHeader()->setMinimumSectionSize(15);
    ui->addList->verticalHeader()->setMaximumSectionSize(25);
    ui->addList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->addList->setSelectionMode(QAbstractItemView::NoSelection);

    ui->name_in->setFocus();
    ui->affirm->setDefault(true);
    ui->affirm->setShortcut(Qt::Key_Enter);

    connect(ui->affirm,SIGNAL(clicked()),this,SLOT(add_student()));
    connect(ui->finish,SIGNAL(clicked()),this,SLOT(backTotop()));

}

AddStudent_window::~AddStudent_window()
{
    delete ui;
}

void AddStudent_window::add_student(){
    QString student = ui->name_in->text();
    QString grades = ui->grade_in->text();
    bool transform = false;
    bool name = false, grade = false;
    int grades_int = grades.toInt(&transform,10);
    if(student == "" || grades == "")QMessageBox::warning(this, "警告", "学生姓名和成绩不能为空！");
    else if(!transform){
        QMessageBox::warning(this, "警告", "学生成绩需为整数！");
        grade = true;
    }
    else if(grades_int <0 || grades_int >100){
        QMessageBox::warning(this, "警告", "学生成绩需为0-100！");
        grade = true;
    }
    else {
        QSqlDatabase db = getdb();
        QSqlQuery query(db);
        bool flag = true;
        query.exec("select * from Student_ClassList");
        while(query.next()){
            QString classid_db = query.value(0).toString();
            QString student_db = query.value(2).toString();
            if(student.compare(student_db)==0 && ClassID_G.compare(classid_db)==0){
                flag = false;
                }
            }
        if(flag){
            QString temp = "INSERT INTO Student_ClassList VALUES (" + ClassID_G + ",'" + ClassName_G + "','" + student + "'," + grades + ",'" + UserName_G +"')";
            query.exec(temp);
            ui->addList->setRowCount(addlist_rows+1);
            ui->addList->setItem(addlist_rows,0,new QTableWidgetItem(student));
            ui->addList->setItem(addlist_rows++,1,new QTableWidgetItem(grades));
        }
        else QMessageBox::warning(this, "警告", "添加失败,学生已在此课程");
        name = true;
        grade = true;
    }
    if(name)ui->name_in->clear();
    if(grade)ui->grade_in->clear();
}

void AddStudent_window::backTotop(){
    emit reloadStudentList_signal();
    emit reloadChart_signal();
    top->show();
    hide();
}
