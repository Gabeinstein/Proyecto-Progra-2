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

class Database
{
private:
    QSqlDatabase music_db;
    QSqlQuery query;
    QString input;
public:
    Database();
    QString connection();
    QString request(QString);
};

#endif // DATABASE_H
