#include "widget.h"
#include "ui_widget.h"
#include <QtMultimedia/QMediaPlayer>
#include <qfiledialog.h>
#include <iostream>
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mMediaPlayer = new QMediaPlayer(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_abrir_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Abrir");

    if(filename.isEmpty()){
        return;
    }
    mMediaPlayer->setSource(QUrl::fromLocalFile(filename));
}

void Widget::on_play_clicked()
{
    mMediaPlayer->play();
}


void Widget::on_pause_clicked()
{
    mMediaPlayer->pause();
}


void Widget::on_stop_clicked()
{
    mMediaPlayer->stop();
}


void Widget::on_mute_clicked()
{

}


void Widget::on_volume_valueChanged(int value)
{

}

