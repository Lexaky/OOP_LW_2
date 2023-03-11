
#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    Gamemode newPlayer;
    newPlayer.setMode(3);
    setNewPermissions(true, newPlayer);
    newPlayer.setMode(1);

    return 0;
}
