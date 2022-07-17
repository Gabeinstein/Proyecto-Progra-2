#include "audioplayer.h"

AudioPlayer::AudioPlayer()
{
    player = new QMediaPlayer();
    audio_output = new QAudioOutput();
    player->setAudioOutput(audio_output);
}
void AudioPlayer::progress(){


}

void AudioPlayer::duration(){
    /*qint64 _duration;
    _duration = player->duration();*/

}
void AudioPlayer::setPosition(qint64 position){
    player->positionChanged(position);
}
void AudioPlayer::play(){
    player->play();
    playing = true;
}
void AudioPlayer::pause(){
    player->pause();
    playing = false;
}
void AudioPlayer::stop(){
    player->stop();
}
void AudioPlayer::volume(float vol){
    audio_output->setVolume(vol);
}
QMediaPlayer* AudioPlayer::getPlayer(){
    return player;
}
QAudioOutput* AudioPlayer::getAudioOutput(){
    return audio_output;
}
