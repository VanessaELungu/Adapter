#include <iostream>

#include "European.h"

#ifndef socket_h
#define socket_h

using namespace std;

class Socket : public European
{
    public:
    int voltage();
    Cable live();
    Cable neutral();
    Cable earth();
};

#endif