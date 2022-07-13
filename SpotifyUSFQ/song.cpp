#include "song.h"

Song::Song()
    : author("Desconocido"),song_name("Desconocido"),path("Desconocido"),duracion(0.0), ID(0000), num_at_album(0)
{
}

Song::Song(QString a, QString s, QString p, float d, int I,int n )
    :author(a),song_name(s),path(p),duracion(d), ID(I),num_at_album(n)
{
}

void Song::setAuthor(QString a){
    author=a;
}


void Song::setSong_Name(QString s){
    song_name=s;
}


void Song::setPath(QString p){
    path=p;
}


void Song::setDuracion(float d){
    duracion=d;
}


void Song::setID(int I){
    ID=I;
}


void Song::setNum_At_Album(int n){
    num_at_album=n;
}


QString Song::getAuthor(){
    return author;
}

QString Song::getSong_Name(){
    return song_name;
}

QString Song::getPath(){
    return path;
}

float Song::getDuracion(){
    return duracion;
}

int Song::getID(){
    return ID;
}

int Song::getNum_At_Album(){
    return num_at_album;
}

void Song::show(){
    /*cout << "\n-------Datos--------: " << endl;
    cout << "\nAuthor: " << author <<endl;
    cout << "\nNombre de la cancion: " << song_name <<endl;
    cout << "\nCamino: " << path <<endl;
    cout << "\nDuracion: " << duracion <<endl;
    cout << "\nID: " << ID <<endl;
    cout << "\nPosicion en el album: " << num_at_album <<endl;
    cout << "\n";
*/
}
