#ifndef TANK_H
#define TANK_H

#include "Zombie.h"

class Tank : public Zombie
{
    public:
        Tank();

        int getShield();
        void setShield(int s);

        int getPv();
        void setPv(int p);

        void attackShield(Zombie* cible);
        void showInfos();
        void attackBasique(Zombie* cible);

    protected:
        int pv;
        int shield;

};

#endif // TANK_H
