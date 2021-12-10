#include "student_window.h"
#include "ui_student_window.h"

Student_Window::Student_Window(QWidget *parent, QWidget *top) :
    QWidget(parent),top(top),
    ui(new Ui::Student_Window)
{
    ui->setupUi(this);
    setWindowTitle("学生面板  |  用户：" + UserName_G);
    ui->ASC_Order->setObjectName("ASC");
    ui->DESC_Order->setObjectName("DESC");

    connect(ui->ASC_Order,SIGNAL(clicked()),this,SLOT(load_ClassList()));
    connect(ui->DESC_Order,SIGNAL(clicked()),this,SLOT(load_ClassList()));
    connect(ui->exit_button,SIGNAL(clicked()),this,SLOT(exit_button_clicked()));
    connect(this,SIGNAL(init()),this,SLOT(load_ClassList()));

    setup_ClassList();
}

Student_Window::~Student_Window(){
    delete ui;
}

void Student_Window::Student_Window::setup_ClassList(){
    ui->ClassList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->ClassList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->ClassList->setSelectionMode(QAbstractItemView::NoSelection);
    setObjectName("init");
    emit init();
}

void Student_Window::load_ClassList(){
    QSqlDatabase db = getdb();
    QSqlQuery query(db);

    auto *sender1 = qobject_cast<QObject *>(sender());
    if(sender1->objectName() == "ASC")query.exec("select * from Student_ClassList order by Grades ASC");
    else query.exec("select * from Student_ClassList order by Grades DESC");

    int i = 0;
    while(query.next()){
        QString classid = query.value(0).toString();
        QString classname = query.value(1).toString();
        QString student = query.value(2).toString();
        QString grades = query.value(3).toString();
        QString teacher = query.value(4).toString();
        if(UserName_G.compare(student)==0){
            ui->ClassList->setRowCount(i+1);
            ui->ClassList->setItem(i,0,new QTableWidgetItem(classname));
            ui->ClassList->setItem(i,1,new QTableWidgetItem(classid));
            ui->ClassList->setItem(i,2,new QTableWidgetItem(teacher));
            ui->ClassList->setItem(i++,3,new QTableWidgetItem(grades));
        }
    }
}

void Student_Window::exit_button_clicked(){
    top->show();
    hide();
}
