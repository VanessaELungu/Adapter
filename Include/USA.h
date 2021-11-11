#include <iostream>

#ifndef usa_h
#define usa_h

using namespace std;

typedef int Cable;

//target interface
class USA
{
    public:
    virtual int voltage() = 0;
    virtual Cable live() = 0;
    virtual Cable neutral() = 0;
};

#endif