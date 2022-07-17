#include "widget.h"
#include "ui_widget.h"
#include "database.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    music_db = new Database;

    audio_control = new AudioPlayer;

    connect(audio_control->getPlayer(), &QMediaPlayer::positionChanged,[&](qint64 progress){
       ui->avance->setValue(progress);
    });

    connect(audio_control->getPlayer(), &QMediaPlayer::durationChanged, [&](qint64 duration){
       ui->avance->setMaximum(duration);
    });

    ui->volume->setValue(99);
    ui->mute->setIcon(QIcon(QDir::currentPath() + "/icons/volume.png"));
    ui->play->setIcon(QIcon(QDir::currentPath() + "/icons/play.png"));

    music_db->connection();
    music_db->createMapDB();
    canciones = new QPushButton[music_db->getMap().size()];
    int i =0;
    for(auto iterMap:music_db->getMap()){
        canciones[i].setText(iterMap.second.getSong_Name());
        ui->canciones->addWidget(&canciones[i]);
        i++;
    }
    QPushButton *aplastado;
    //connect(qobject_cast<QPushButton *>(QObject::sender()),&QPushButton::clicked,[&](){
        aplastado = qobject_cast<QPushButton *>(QObject::sender());
    //});
    while (aplastado){
        aplastado = qobject_cast<QPushButton *>(QObject::sender());
        qDebug()<< aplastado;
    }
    qDebug()<< aplastado;
    connect(canciones, &QPushButton::clicked,this,[&](){
       audio_control->getPlayer()->setSource(QUrl::fromLocalFile(QDir::currentPath() + music_db->getMap().at(QString(this->canciones->text())).getPath()));
       qDebug()<<audio_control->getPlayer()->source();
       on_play_clicked();
    });
}



Widget::~Widget()
{
    delete ui;
}

/*
void Widget::on_abrir_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Abrir");
    if (filename.isEmpty()){
        return;
    }
    audio_control->getPlayer()->setSource(QUrl::fromLocalFile(filename));
    //
    audio_control->volume(ui->volume->value());
    on_play_clicked();
}

*/
void Widget::on_play_clicked()
{
    if (audio_control->playing == true){
        audio_control->stop();
        ui->SongData->setText(music_db->getMap().at(canciones[0].text()).getSong_Name());
        ui->play->setIcon(QIcon(QDir::currentPath() + "/icons/pause.png"));
    }else{
        audio_control->play();
        ui->play->setIcon(QIcon(QDir::currentPath() + "/icons/play.png"));
    }

}


void Widget::on_mute_clicked()
{
    if(ui ->volume->value() == 0){
        audio_control->volume(100);
        ui->volume->setValue(100);
        ui->mute->setIcon(QIcon(QDir::currentPath() + "/icons/volume.png"));
    }else{
        audio_control->volume(0);
        ui->volume->setValue(0);
        ui->mute->setIcon(QIcon(QDir::currentPath() + "/icons/volume-mute.png"));
    }
    //qDebug() << audio_control->progress();

}


void Widget::on_volume_valueChanged(int vol)
{
    audio_control->volume(vol);
    if (vol!= 0){
        ui->mute->setIcon(QIcon(QDir::currentPath() + "/icons/volume.png"));
    }else{
        ui->mute->setIcon(QIcon(QDir::currentPath() + "/icons/volume-mute.png"));
    }

}
/*

void Widget::on_connect_clicked()
{
    music_db->connection();
}


void Widget::on_request_clicked()
{
    music_db->createMapDB();
    music_db->printMap();
}


void Widget::on_Disconnect_clicked()
{
    music_db->close();
}
*/


