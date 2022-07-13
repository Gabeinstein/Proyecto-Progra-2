#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileInfo>
#include <QDir>
#include <map>
#include <iostream>
#include "song.h"

using namespace std;

class Database
{
private:
    QSqlDatabase music_db;
    map<int, Song> map_canciones;
public:
    Database();
    void connection();
    void createMapDB();
    void printMap();
    void close();
    map<int,Song> getMap();
};

#endif // DATABASE_H
