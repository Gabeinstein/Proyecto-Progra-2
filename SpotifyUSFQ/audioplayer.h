#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QFileDialog>
#include <QtGlobal>

class AudioPlayer
{
private:
    QMediaPlayer *player;
    QAudioOutput *audio_output;
public:
    AudioPlayer();
    void progress();
    void duration();
    void setPosition(qint64);
    void play();
    void pause();
    void stop();
    void volume(float);
    QMediaPlayer *getPlayer();
    QAudioOutput *getAudioOutput();
};

#endif // AUDIOPLAYER_H
