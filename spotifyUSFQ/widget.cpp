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

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_abrir_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Abrir");
    if (filename.isEmpty()){
        return;
    }
    audio_control->getPlayer()->setSource(QUrl::fromLocalFile(filename));
    audio_control->volume(ui->volume->value());
    on_play_clicked();
}


void Widget::on_play_clicked()
{
    audio_control->play();
}


void Widget::on_pause_clicked()
{
    audio_control->pause();
}


void Widget::on_stop_clicked()
{
    audio_control->stop();
}


void Widget::on_mute_clicked()
{
    /*if(ui ->mute->text() == "Mute"){
        audioOutput->setMuted(true);
        ui->mute->setText("Unmute");
    }else{
        audioOutput->setMuted(false);
        ui->mute->setText("Mute");
    }*/
    //qDebug() << audio_control->progress();

}


void Widget::on_volume_valueChanged(int vol)
{
    audio_control->volume(vol);
}


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
