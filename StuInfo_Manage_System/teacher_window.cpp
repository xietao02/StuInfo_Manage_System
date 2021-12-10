#include "teacher_window.h"
#include "ui_teacher_window.h"
#include "mainwindow.h"

Teacher_Window::Teacher_Window(QWidget *parent, QWidget *top) :
    QWidget(parent),top(top),
    ui(new Ui::Teacher_Window)
{
    //初始化
    ui->setupUi(this);
    setWindowTitle("教师面板  |  用户：" + UserName_G);
    setupClassList();
    ui->manage_button->setObjectName("manage");
    ui->delete_button->setObjectName("delete");
    ui->add_button->setObjectName("add");
    ui->classname->setPlaceholderText("由此输入新课程名");

    connect(ui->ClassList,SIGNAL(cellClicked(int, int)),this,SLOT(getItem(int, int)));
    connect(ui->ClassList,SIGNAL(cellDoubleClicked(int, int)),this,SLOT(manage_button_clicked()));
    connect(ui->manage_button,SIGNAL(clicked()),this,SLOT(Select_Judge()));
    connect(ui->delete_button,SIGNAL(clicked()),this,SLOT(Select_Judge()));
    connect(ui->add_button,SIGNAL(clicked()),this,SLOT(add_button_clicked()));
    connect(ui->exit_button,SIGNAL(clicked()),this,SLOT(exit_button_clicked()));
}

Teacher_Window::~Teacher_Window(){
    delete ui;
}

void Teacher_Window::setupClassList(){
    ui->ClassList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->ClassList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->ClassList->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->ClassList->setSelectionBehavior(QAbstractItemView::SelectRows);
    reload_ClassList();
}

void Teacher_Window::reload_ClassList(){
    ui->ClassList->clearContents();

    //connect the database
    QSqlDatabase db = getdb();
    QSqlQuery query(db);

    query.exec("select * from Teacher_ClassList order by ClassID ASC");
    int i = 0;
    while(query.next()){
        QString classid = query.value(0).toString();
        QString classname = query.value(1).toString();
        QString teacher = query.value(2).toString();
        if(UserName_G.compare(teacher)==0){
            ui->ClassList->setRowCount(i+1);
            ui->ClassList->setItem(i,0,new QTableWidgetItem(classname));
            ui->ClassList->setItem(i++,1,new QTableWidgetItem(classid));
        }
    }
}

void Teacher_Window::getItem(int row, int){
    auto a = ui->ClassList->item(row,0);
    class_selected = a->text();
    a = ui->ClassList->item(row,1);
    classid_selected = a->text();
}

void Teacher_Window::Select_Judge(){
    if(class_selected == "" || classid_selected == "")QMessageBox::warning(this, "警告", "未选择课程！");
    else {
        QPushButton *button = qobject_cast<QPushButton *>(sender());
        if(button->objectName() == "manage")manage_button_clicked();
        else if(button->objectName() == "delete")delete_button_clicked();
        else add_button_clicked();
    }
}

void Teacher_Window::manage_button_clicked(){
    hide();
    Manage_Window *w = new Manage_Window(nullptr,this,class_selected,classid_selected);
    ClassID_G = classid_selected;
    ClassName_G = class_selected;
    w->show();
}

void Teacher_Window::delete_button_clicked(){
    QMessageBox confirmation(QMessageBox::Warning,"警告","确认删除课程？\n删除后无法恢复!",QMessageBox::Yes | QMessageBox::No,this);
    confirmation.setDefaultButton(QMessageBox::No);
    if(confirmation.exec() == QMessageBox::Yes){
        //connect the database
        QSqlDatabase db = getdb();
        QSqlQuery query(db);

        query.exec("delete from Student_ClassList where ClassID = '" + classid_selected + "'");
        query.exec("delete from Teacher_ClassList where ClassID = '" + classid_selected + "'");
    }
    reload_ClassList();
    classid_selected = "";
    class_selected = "";
}

void Teacher_Window::add_button_clicked(){
    QString new_classname = ui->classname->text();
    QString new_classid;
    if(new_classname == "")QMessageBox::warning(this, "警告", "新建课程名不能为空！");
    else {
        bool flag = true;
        //connect the database
        QSqlDatabase db = getdb();
        QSqlQuery query(db);
        do{
            int id = rand() % 10000;
            new_classid = QString::number(id);
            query.exec("select ClassID from Teacher_ClassList");
            while(query.next()){
                QString id = query.value(0).toString();
                if(new_classid.compare(id)==0){
                    flag = false;
                }
            }
        }while(!flag);

        class_selected = new_classname;
        classid_selected = new_classid;
        QString temp ="insert into Teacher_ClassList (ClassID,ClassName,Teacher) values (" + classid_selected + ",'" + class_selected + "','" + UserName_G + "')";
        query.exec(temp);
        manage_button_clicked();
        reload_ClassList();
        ui->classname->clear();
        class_selected = "";
        classid_selected = "";
    }
}

void Teacher_Window::exit_button_clicked(){
    top->show();
    hide();
}

