#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "audioplayer.h"
#include "playlist.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Database;
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QPushButton *canciones;

private slots:
    void on_play_clicked();
    void on_mute_clicked();
    void on_volume_valueChanged(int value);
private:
    Ui::Widget *ui;
    AudioPlayer *audio_control;
    Database *music_db;

};
#endif // WIDGET_H
