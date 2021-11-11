#include <iostream>
#include <string>

#include "Coffee.h"
#include "Adapter.h"
#include "Socket.h"

using namespace std; 

int main()
{
    Socket* socket = new Socket;
    Adapter* adapter = new Adapter;
    Coffee* coffee = new  Coffee;

    adapter->PlugIn(socket);
    coffee->PlugIn(adapter);

    coffee->boil();

    return 0;
}