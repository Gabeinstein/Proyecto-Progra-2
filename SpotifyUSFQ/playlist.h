#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "song.h"
#include "database.h"

class PlayList: public Database
{
public:
    PlayList();
    Song next();
    Song previous();

private:
    vector<Song> songs;
};

#endif // PLAYLIST_H
