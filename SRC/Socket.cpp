#include <iostream>
#include <string>

#include "Socket.h"

using namespace std;

    int Socket::voltage()
    {
        return 230;
    }

    Cable Socket::live()
    {
        return 1;
    }

    Cable Socket::neutral()
    {
        return -1;
    }

    Cable Socket::earth()
    {
        return 0;
    }