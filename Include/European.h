#include <iostream>

#ifndef european_h
#define european_h

using namespace std;

typedef int Cable; //wire with electrons

//source interface 

class European
{
    public:
    virtual int voltage() = 0;
    virtual Cable live() = 0;
    virtual Cable neutral() = 0;
    virtual Cable earth() = 0;

};

#endif