#include "theaterlights.h"

TheaterLights::TheaterLights(string description)
{
    this->description = description;
}

void TheaterLights::on() {
    cout << description << " on" << endl;
}

void TheaterLights::off() {
    cout << description << " off" << endl;
}

void TheaterLights::dim(int level) {
    cout << description << " dimming to " << level  << "%" << endl;
}

string TheaterLights::tostring() {
    return description;
}
