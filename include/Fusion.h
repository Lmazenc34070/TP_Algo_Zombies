#ifndef FUSION_H
#define FUSION_H

#include "Zombie.h"
#include "Bomber.h"


class Fusion : public Zombie
{
    public:
        Fusion();

        void operator+=(Bomber & b);
        void operator +=(Zombie &z);

    protected:

    private:
        int pv;
        int attack;
};

#endif // FUSION_H
