#include "global.h"
#include <QCoreApplication>


QString UserName_G = "";
QString ClassID_G = "";
QString ClassName_G = "";


QSqlDatabase Global::db;

void Global::ins_db()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = QCoreApplication::applicationDirPath() + "/../..//SystemDatabase.db";
    qDebug() << "databasePath:" <<dbPath;
    db.setDatabaseName(dbPath);
    if (!db.open())
        qDebug() << "Failed to open Database!";
    else
        qDebug() << "Database: Open successfully!";
}

QSqlDatabase Global::getdb(){
    return db;
}
