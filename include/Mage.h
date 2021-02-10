#ifndef MAGE_H
#define MAGE_H

#include "Zombie.h"
//#include "Tank.h"

class Mage : public Zombie
{
    public:
        Mage();

        void skillsMage(Zombie* cible);
        int getCompteur();
        void setCompteur(int c);



    protected:

    private:
        int compteur;

};

#endif // MAGE_H
