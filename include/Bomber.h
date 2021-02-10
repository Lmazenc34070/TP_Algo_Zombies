#ifndef BOMBER_H
#define BOMBER_H

#include "Zombie.h"


class Bomber : public Zombie
{
    public:
        Bomber();
        //~Bomber();

        void zombieBoom(Zombie* cible);

        void showInfos();

    private:

};

#endif // BOMBER_H
