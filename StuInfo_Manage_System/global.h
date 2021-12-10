#ifndef GLOBAL_H
#define GLOBAL_H
#include <QString>
#include <QtDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

extern QString UserName_G;
extern QString ClassID_G;
extern QString ClassName_G;

class Global{

public:
    Global(){

    }
    void ins_db();
    static QSqlDatabase getdb();

private:
    static QSqlDatabase db;

};

#endif // GLOBAL_H
