#include <iostream>

#include "USA.h"
#include "European.h"

#ifndef adapter_h
#define adapter_h

using namespace std;

class Adapter : public USA
{
    European* socket;
    public:
    void PlugIn();
    int voltage();
    Cable live();
    Cable neutral();
};

#endif