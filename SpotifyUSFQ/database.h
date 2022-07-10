#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QPluginLoader>
#include <QVariant>
#include <iostream>
using namespace std;

//que maaaas!

class Database
{
private:
    QSqlDatabase music_db;
    QSqlQuery query;
    QString input;
public:
    Database();
    void connection();
    void request(QString);
    void close();
};

#endif // DATABASE_H
