#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addstudent_window.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    //初始化
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/icon/icon.png"));
    setWindowTitle("学生信息管理系统");
    ui->ID_Teacher->setChecked(true);
    ui->UserName_in->setPlaceholderText("由此输入用户名");
    ui->Password_in->setEchoMode(QLineEdit::Password);
    ui->Password_in->setPlaceholderText("由此输入密码");
    ui->Signup_Button->setObjectName("Signup");

    QLabel *info = new QLabel(this);
    info->setFrameStyle(QFrame::Panel | QFrame::Raised);
    info->setText(tr("<a href=\"https://xietao.site/archives/managesystem\">关于</a>"));
    info->setOpenExternalLinks(true);
    ui->statusbar->addPermanentWidget(info);
    statusBar()->setSizeGripEnabled(false);


    //设置焦点 以及 Enter快捷键
    ui->UserName_in->setFocus();
    ui->Login_Button->setDefault(true);
    ui->Login_Button->setShortcut(Qt::Key_Enter);

    connect(ui->Signup_Button,SIGNAL(clicked()),this,SLOT(Input_Judge()));
    connect(ui->Login_Button,SIGNAL(clicked()),this,SLOT(Input_Judge()));
    connect(ui->Reset_Button,SIGNAL(clicked()),this,SLOT(Reset_Button_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Input_Judge(){
    Username_this = ui->UserName_in->text();
    Password_this = ui->Password_in->text();
    if(Username_this == "" || Password_this == "")QMessageBox::warning(this, "警告", "账号或密码不能为空！");
    else {
        QPushButton *button = qobject_cast<QPushButton *>(sender());
        if(button->objectName() == "Signup")Signup_Button_clicked();
        else Login_Button_clicked();
    }
}

void MainWindow::Signup_Button_clicked(){
    QString username_db;
    QString password_db;

    QSqlDatabase db = getdb();
    QSqlQuery query(db);

    //确定登录身份
    bool flag = true;
    if(ui->ID_Teacher->isChecked()){
        //检查账号是否存在
        query.exec("select UserName,Password from TeacherList");
        while(query.next()){
            username_db = query.value(0).toString();
            password_db = query.value(1).toString();
            if(Username_this.compare(username_db)==0){
                flag=false;
                QMessageBox::warning(this, "警告", "注册失败,账号已存在");
            }
        }
        //注册新账号
        if(flag == true){
            query.exec("insert into TeacherList (UserName,Password) values ('" + Username_this + "','" + Password_this +"')");
            QMessageBox::information(this, "提示", "注册成功");
        }
    }
    else if(ui->ID_Student->isChecked()){
        query.exec("select UserName,Password from StudentList");
        while(query.next()){
            username_db = query.value(0).toString();
            password_db = query.value(1).toString();
            if(Username_this.compare(username_db)==0){
                flag=false;
                QMessageBox::warning(this, "警告", "注册失败,账号已存在");
            }
        }
        if(flag == true){
            query.exec("insert into StudentList (UserName,Password) values ('" + Username_this + "','" + Password_this +"')");
            QMessageBox::information(this, "提示", "注册成功");
        }
    }
}

void MainWindow::Login_Button_clicked(){
    QString username_db;
    QString password_db;

    QSqlDatabase db = getdb();
    QSqlQuery query(db);

    bool flag = false;
    if(ui->ID_Teacher->isChecked()){
        query.exec("select UserName,Password from TeacherList");
        while(query.next()){
            username_db = query.value(0).toString();
            password_db = query.value(1).toString();
            if(Username_this.compare(username_db)==0 && Password_this.compare(password_db)==0){
                UserName_G = Username_this;
                flag=true;
                this->hide();
                w1 = new Teacher_Window(nullptr,this);
                w1->show();
            }
        }
    }
    else if(ui->ID_Student->isChecked()){
        query.exec("select UserName,Password from StudentList");
        while(query.next()){
            username_db = query.value(0).toString();
            password_db = query.value(1).toString();
            if(Username_this.compare(username_db)==0 && Password_this.compare(password_db)==0){
                UserName_G = Username_this;
                flag=true;
                this->hide();
                w2 = new Student_Window(nullptr,this);
                w2->show();
            }
        }
    }
    if(flag==false)QMessageBox::warning(this, "警告", "用户名或密码错误");
}

void MainWindow::Reset_Button_clicked(){
    ui->UserName_in->clear();
    ui->Password_in->clear();
    UserName_G = "";
}
