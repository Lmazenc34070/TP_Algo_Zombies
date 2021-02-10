#ifndef RAPACE_H
#define RAPACE_H

#include "Zombie.h"

class Rapace : public Zombie
{
    public:
        Rapace();

        void showInfos();
        void attackAndHeal(Zombie* cible);

    protected:

    private:
};

#endif // RAPACE_H
