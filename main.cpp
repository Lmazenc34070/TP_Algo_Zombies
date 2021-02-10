#include "Zombie.h"
#include "Bomber.h"
#include "Rapace.h"
#include "Tank.h"
#include "Mage.h"
#include "Fusion.h"

using namespace std;

int main()
{
    Zombie z;
    z.showInfos();


    Zombie z2(600, 60, "Michel la victime");//Sert de punching ball
    Zombie z3(80, 60, "Jacques la victime");//Sert de punching ball
    z2.showInfos();
    z3.showInfos();
    cout<< "Paul le zombie attaque Michel la victime !!"<<endl<<endl;

    z.attackBasique(&z2);
    if (z2.getPv()<=0){
        z2.~Zombie();
    }
    cout<< "Etat de Michel a present : "<<endl;
    z2.showInfos();




    Bomber b1;
    b1.showInfos();
    cout<<"le bomber attaque michel !"<<endl<<endl;
    b1.zombieBoom(&z3);
    b1.~Zombie();
    z3.showInfos();

    Tank t1;
    t1.showInfos();
    Rapace r1;
    r1.showInfos();
    r1.attackAndHeal(&t1);
    cout <<"apres attaque sur tank"<<endl<<endl;
    t1.showInfos();
    r1.showInfos();

    t1.attackShield(&z2);
    z2.showInfos();

    Mage m1;
    m1.showInfos();


    Fusion f1;
    f1.showInfos();
    return 0;
}
