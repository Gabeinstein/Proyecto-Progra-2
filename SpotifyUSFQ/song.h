#ifndef SONG_H
#define SONG_H
#include <vector>
#include <QDebug>
#include "iostream"
using namespace std;

class Song
{
public:
    Song();
    Song(QString,QString,QString,float,int,int);
    void setAuthor(QString);
    QString getAuthor();
    void setDuracion(float);
    float getDuracion();
    void setSong_Name(QString);
    QString getSong_Name();
    void setPath(QString);
    QString getPath();
    void setID(int);
    int getID();
    void setNum_At_Album(int);
    int getNum_At_Album();
    void show();

private:
    QString author;
    QString song_name;
    QString path;
    float duracion;
    int ID;
    int num_at_album;
};

#endif // SONG_H
