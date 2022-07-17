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
#include "album.h"

using namespace std;

class Database
{
private:
    QSqlDatabase music_db;
    map<QString, Song> map_canciones;
public:
    Database();
    void connection();
    void createMapDB();
    Album requestArtist(QString);
    void printMap();
    void close();
    map<QString,Song> getMap();
};

#endif // DATABASE_H
