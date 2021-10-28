#include "popcornpopper.h"

PopcornPopper::PopcornPopper(string description)
{
    this->description = description;
}

void PopcornPopper::on() {
    cout << description << " on" << endl;
}

void PopcornPopper::off() {
cout << description << " off" << endl;
    }

void PopcornPopper::pop() {
    cout << description << " popping popcorn!" << endl;
}

string PopcornPopper::tostring() {
    return description;
}
