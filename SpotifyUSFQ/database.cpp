#include "database.h"

Database::Database()
{
    input = "";
    music_db = QSqlDatabase::addDatabase("QSQLITE");
}
QString Database::connection(){

    music_db.setHostName("localhost");
    music_db.setUserName("root");
    music_db.setPassword("14fe2002");
    if (music_db.open() == false){
        return "No se pudo conectar con la base de datos";
        music_db.lastError().text();
    }else{
        return "Coneccion satisfactoria!";
    }
}
QString Database::request(QString _input){
    input = _input;
    //input = "SELECT id, Nombre, Album, Artista, Duracion FROM musica";
    query.exec(input);
    QString temp;
    while(query.next()){
        int id = query.value(0).toInt();
        QString Nombre = query.value(1).toString();
        QString Album = query.value(2).toString();
        int tiempo = query.value(3).toInt();
        temp = Nombre;
    }

    return temp;
}
