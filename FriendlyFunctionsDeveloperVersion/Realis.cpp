#include <iostream>
#include "Proto.h"

using namespace std;

void setNewPermissions(bool newPerm, Gamemode &obj)
{
    cout << "You got root" << endl;
    obj.adminPermissions = newPerm;
}

void Gamemode::setMode(modes newMode)
    {
        if (adminPermissions == true)
        {
            switch (newMode)
            {
            case survival:
                cout << "Survival mode selected" << endl;
                mode = newMode;
                break;
            case creative:
                cout << "Creative mode selected" << endl;
                mode = newMode;
                break;
            case adventure:
                cout << "Adventure mode selected" << endl;
                mode = newMode;
                break;
            case spectator:
                cout << "Spectator mode selected" << endl;
                mode = newMode;
                break;
            default:
                cout << "No mode selected" << endl;
                mode = survival;
            }
        } else {
            cout << "User permissions." << endl;
        }
    }