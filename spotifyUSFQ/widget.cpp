#include "widget.h"
#include "ui_widget.h"
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QFileDialog>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput;

    connect(player, &QMediaPlayer::positionChanged,[&](qint64 pos){
       ui->avance->setValue(pos);
    });

    connect(player, &QMediaPlayer::durationChanged, [&](qint64 dur){
       ui->avance->setMaximum(dur);
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
    player->setSource(QUrl::fromLocalFile(filename));
    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(ui->volume->value());
    on_play_clicked();
}


void Widget::on_play_clicked()
{
    player->play();
}


void Widget::on_pause_clicked()
{
    player ->pause();
}


void Widget::on_stop_clicked()
{
    player->stop();
}


void Widget::on_mute_clicked()
{
    if(ui ->mute->text() == "Mute"){
        audioOutput->setMuted(true);
        ui->mute->setText("Unmute");
    }else{
        audioOutput->setMuted(false);
        ui->mute->setText("Mute");
    }

}


void Widget::on_volume_valueChanged(int value)
{
    audioOutput->setVolume(value);
}

