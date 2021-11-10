#include <iostream>

#ifndef usa_h
#define usa_h

using namespace std;

typedef int Cable;

//target interface
class USA
{
    public:
    virtual int voltage();
    virtual Cable live();
    virtual Cable neutral();
};

#endif