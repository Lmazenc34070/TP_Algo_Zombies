#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>

#include <stdlib.h>

using namespace std;

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        Zombie (int p, int a, string n);


        //GETTER/SETTER
        int getPv();
        void setPv(int s);

        int getAttack();
        void setAttack(int a);

        string getNom();
        void setNom(string n);

        int getShield();
        void setShield(int s);


        void attackBasique(Zombie* cible);



        void showInfos();



    protected:

    private:
        int pv;
        int attack;
        string nom;
        int shield;
};

#endif // ZOMBIE_H
