#include <iostream>
#include <string>

#ifndef european_h
#define european_h

using namespace std;

typedef int Cable; //wire with electrons

//source interface 

class European
{
    public:
    virtual int voltage();
    virtual Cable live();
    virtual Cable neutral();
    virtual Cable earth();

};

#endif