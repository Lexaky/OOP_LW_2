#include <iostream>
#include "Proto.h"

using namespace std;

int main()
{
    Gamemode newPlayer;
    newPlayer.setMode(modes::survival);
    setNewPermissions(true, newPlayer);
    newPlayer.setMode(modes::creative);
    return 0;
}