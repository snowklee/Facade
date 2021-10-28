#ifndef AMPLIFIER_H
#define AMPLIFIER_H
#include <string>
#include <iostream>

/*#include "tuner.h"
#include "dvdplayer.h"
#include "cdplayer.h"*/
class Tuner;
class DvdPlayer;
class CdPlayer;

using namespace std;

class Amplifier
{
private:
    string description;
    Tuner *tuner;
    DvdPlayer *dvd;
    CdPlayer *cd;
public:
    Amplifier(string description);
    void on();
    void off();
    void setStereoSound();
    void setSurroundSound();
    void setVolume(int level);
    void setTuner(Tuner *tuner);
    void setDvd(DvdPlayer *dvd);
    void setCd(CdPlayer *cd);
    string tostring();
};

#endif // AMPLIFIER_H
