#include "dvdplayer.h"

DvdPlayer::DvdPlayer(string description, Amplifier *amplifier)
{
    this->description = description;
    this->amplifier = amplifier;
}

void DvdPlayer::on() {
    cout << description << " on" << endl;
}

void DvdPlayer::off() {
    cout << description << " off" << endl;
}

void DvdPlayer::eject() {
    movie = "";
    cout << description << " eject" << endl;
}

void DvdPlayer::play(string movie) {
    this->movie = movie;
    currentTrack = 0;
    cout << description << " playing \"" << movie << "\"" << endl;
}

void DvdPlayer::play(int track) {
    if (movie == "") {
        cout << description << " can't play track " + track << " no dvd inserted" << endl;
    }
    else {
        currentTrack = track;
        cout << description << " playing track " + currentTrack << " of \"" + movie << "\"" << endl;
    }
}

void DvdPlayer::stop() {
    currentTrack = 0;
    cout << description << " stopped \"" + movie << "\"" << endl;
}

void DvdPlayer::pause() {
    cout << description << " paused \"" + movie << "\"" << endl;
}

void DvdPlayer::setTwoChannelAudio() {
    cout << description << " set two channel audio" << endl;
}

void DvdPlayer::setSurroundAudio() {
    cout << description << " set surround audio" << endl;
}

string DvdPlayer::tostring() {
    return description;
}
