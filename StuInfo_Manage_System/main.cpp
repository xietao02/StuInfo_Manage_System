#include "mainwindow.h"
#include "global.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.ins_db();
    w.show();
    return a.exec();
}
