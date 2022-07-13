#ifndef SONG_H
#define SONG_H
#include <iostream>
#include <QDebug>
using namespace std;

class Song
{
public:
    int id;
    QString Name;
    QString Album;
    QString Artista;
    QString Path;
    int num_album;
public:
    Song();
};

#endif // SONG_H
