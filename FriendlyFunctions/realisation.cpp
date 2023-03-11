#include <iostream>
#include "header.h"
using namespace std;


    void setNewPermissions(bool newPerm, auto &obj)
    {
        cout << "You got root" << endl;
        obj.adminPermissions = newPerm;
    }

    void Gamemode::setMode(int newMode)
    {
        if (adminPermissions == true)
        {
            modes NM = modes(newMode);
            switch (NM)
            {
            case 0:
                cout << "Survival mode selected" << endl;
                break;
            case 1:
                cout << "Creative mode selected" << endl;
                break;
            case 2:
                cout << "Adventure mode selected" << endl;
                break;
            case 3:
                cout << "Spectator mode selected" << endl;
                break;
            default:
                cout << "No mode selected" << endl;
            }
            mode = newMode;

        } else {
            cout << "User permissions." << endl;
        }
    }
