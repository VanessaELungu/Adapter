#include <iostream>
#include <string>

#include "Coffee.h"

using namespace std;

USA* power;

void Coffee::PlugIn(USA* supply)
{
    power = supply;
}

void Coffee::boil()
{
    if (power->voltage() > 110)
    {
        cout << "on fire" <<endl;
        return;
    }

    if (power->live() == 1 && power->neutral() == -1)
    {
        cout << "coffee time" << endl;
    }

}