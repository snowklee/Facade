#ifndef TUNER_H
#define TUNER_H
#include <string>
#include <iostream>
#include "amplifier.h"

using namespace std;

class Tuner
{
private:
    string description;
    Amplifier *amplifier;
    double frequency;
public:
    Tuner(string description, Amplifier *amplifier);
    void on();
    void off();
    void setFrequency(double frequency);
    void setAm();
    void setFm();
    string tostring();
};

#endif // TUNER_H
