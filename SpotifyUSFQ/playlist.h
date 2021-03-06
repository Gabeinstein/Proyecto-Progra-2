#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "song.h"
#include "database.h"
#include "ui_widget.h"
#include <vector>

class PlayList: public Database
{
public:
    PlayList();
    Song next();
    Song previous();
    vector<QPushButton*> songs;
};

#endif // PLAYLIST_H
