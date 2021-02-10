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


    Zombie z2(400, 60, "Michel sert de victime");
    z2.showInfos();
    //cout<< "Paul le zombie attaque Michel le zombie !!"<<endl<<endl;

    //z.attackBasique(&z2);
    //cout<< "Etat de Michel a present : "<<endl;
    //z2.showInfos();




    Bomber b1;
    b1.showInfos();
    /*cout<<"le bomber attaque michel !"<<endl<<endl;
    b1.zombieBoom(&z2);
    z2.showInfos();*/


    Rapace r1;
    r1.showInfos();
    r1.attackAndHeal(&z2);
    cout <<"apres attaque"<<endl<<endl;

    if (z2.getPv()<=0){
        z2.~Zombie();
    }

    r1.showInfos();

    Tank t1;
    t1.showInfos();

    Mage m1;
    m1.showInfos();

    Fusion f1;
    f1.showInfos();
    return 0;
}
