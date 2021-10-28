#ifndef POPCORNPOPPER_H
#define POPCORNPOPPER_H
#include <string>
#include <iostream>

using namespace std;

class PopcornPopper
{
private:
    string description;
public:
    PopcornPopper(string description);
    void on();
    void off();
    void pop();
    string tostring();
};

#endif // POPCORNPOPPER_H
