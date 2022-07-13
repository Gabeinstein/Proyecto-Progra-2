#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "audioplayer.h"


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

private slots:
    void on_abrir_clicked();
    void on_play_clicked();
    void on_pause_clicked();
    void on_stop_clicked();
    void on_mute_clicked();
    void on_volume_valueChanged(int value);
    void on_connect_clicked();
    void on_request_clicked();
    void on_Disconnect_clicked();

    void on_avance_valueChanged(int value);

    void on_avance_sliderReleased();

private:
    Ui::Widget *ui;
    AudioPlayer *audio_control;
    Database *music_db;
};
#endif // WIDGET_H
