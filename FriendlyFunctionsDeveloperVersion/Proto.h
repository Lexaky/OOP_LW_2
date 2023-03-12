#pragma once

enum modes { survival = 0, creative = 1, adventure = 2, spectator = 3 };
  

class Gamemode
{
    private:
        int mode = -1;
        bool adminPermissions = false;
        friend void setNewPermissions(bool newPerm, Gamemode &obj);
    public:
        void setMode(modes newMode);
};
