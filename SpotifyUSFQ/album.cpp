#include "album.h"

Album::Album()
    :album_name("Default"){
}
void Album::insertSong(Song add){
        A.push_back(add);
}


void Album::setAlbum_Name(QString a){
    album_name=a;
}

QString Album::getAlbum_Name(){
    return album_name;
}
