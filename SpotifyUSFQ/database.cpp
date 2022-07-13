#include "database.h"

Database::Database()
{
}

void Database::connection(){
    //Usamos SQLITE como base de datos de la musica
    music_db = QSqlDatabase::addDatabase("QSQLITE");
    //Usamos el path predeterminado de QT para que sea compatible con la distribucion de la APP
    music_db.setDatabaseName(QDir::currentPath() + "/Database/musicdb.db");
    //throw and catch exception
    try {
        if (!music_db.open()) throw 1;
        qDebug() << "Coneccion satisfactoria!";
    }
    catch (int a) {
        qDebug() << "Exception caught 1";
        qDebug() << "No se pudo conectar con la base de datos";
    }
}

void Database::createMapDB(){
    QSqlQuery query(QString("SELECT* FROM musica"));
    while (query.next()) {
         int id = query.value(0).toInt();
         QString Nombre = query.value(1).toString();
         QString Album = query.value(2).toString();
         QString Artista = query.value(3).toString();
         QString path = query.value(4).toString();
         int AlbumNum = query.value(5).toInt();
         Song temp;
         temp.setSong_Name(Nombre);
         temp.setAuthor(Album);
         temp.setAuthor(Artista);
         temp.setPath(path);
         temp.setID(id);
         temp.setNum_At_Album(AlbumNum);
         map_canciones.insert(pair<int,Song>(id,temp));
    }
}

void Database::printMap(){
    for(auto iterMap:map_canciones){
       qDebug() << iterMap.first << iterMap.second.getPath();
    }
}

void Database::close(){
    music_db.close();
    qDebug() << "Coneccion cerrada!";
}
map<int,Song> Database::getMap(){
    return map_canciones;
}
