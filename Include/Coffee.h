#include <iostream>

#include "USA.h"

#ifndef electric_h
#define electric_h

using namespace std;

class Coffee
{
    
USA* power;

    public:
    void PlugIn(USA* supply);
    void boil();
};

#endif