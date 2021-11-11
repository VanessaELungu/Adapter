#include <iostream>
#include <string>

#include "Adapter.h"

using namespace std;

    European* socket;
 
    void Adapter::PlugIn(European* outlet)
    {
        socket = outlet;
    }

    int Adapter::voltage()
    {
        return 110;
    }

    Cable Adapter::live()
    {
        return socket->live();
    }

    Cable Adapter::neutral()
    {
        return socket->neutral();
    }