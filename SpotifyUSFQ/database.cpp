#include "database.h"

Database::Database()
{
    input = "";

}
void Database::connection(){
    music_db = QSqlDatabase::addDatabase("QMYSQL");
    music_db.setHostName("localhost");
    music_db.setDatabaseName("musicdb");
    music_db.setUserName("root");
    music_db.setPassword("14fe2002");

    if(!music_db.open()){
        qDebug() << "No se pudo conectar con la base de datos";
        music_db.lastError().text();
    }else{
        qDebug() << "Coneccion satisfactoria!";
    }
}
void Database::request(QString _input){
    input = _input;
    query.exec(input);

    while(query.next()){
        int id = query.value(0).toInt();
        QString Nombre = query.value(1).toString();
        QString Album = query.value(2).toString();
        int tiempo = query.value(3).toInt();
        qDebug() << id << Nombre << Album << tiempo;
    }
}
void Database::close(){
    music_db.close();
}
