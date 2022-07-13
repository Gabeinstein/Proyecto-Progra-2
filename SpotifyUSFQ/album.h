#ifndef ALBUM_H
#define ALBUM_H
#include "song.h"

class Album
{
public:
    Album();
    Album(QString);
    void setAlbum_Name(QString);
    QString getAlbum_Name();

private:
    vector<Song> A;
    QString album_name;

};

#endif // ALBUM_H
