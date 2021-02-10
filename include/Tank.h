#ifndef TANK_H
#define TANK_H

#include "Zombie.h"

class Tank : public Zombie
{
    public:
        Tank();

        int getShield();
        void setShield(int s);

        void attackShield(Zombie* cible);
        void showInfos();
        void protectTank(Zombie* cible);

    protected:

    private:
        int attack;
        int pv;
        string nom;
        int shield;
};

#endif // TANK_H
