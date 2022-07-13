#include "album.h"

Album::Album()
    :album_name("Default")
{
}

Album::Album(QString a)
    :album_name(a)
{

}

void Album::setAlbum_Name(QString a){
    album_name=a;
}

QString Album::getAlbum_Name(){
    return album_name;
}
