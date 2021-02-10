#include "Fusion.h"

Fusion::Fusion() : Zombie (100,10,"Fusion")
{

}


void Fusion::operator+=(Zombie & z){
    if(getPv()>=z.getPv()+z.getShield() && getAttack()>=z.getAttack()){
        setPv(getPv() + z.getPv() + z.getShield());
        setAttack(getAttack() + z.getAttack());
        z.~Zombie();
    }else if (getPv()>= 500 && getAttack()>=200) {
        cout<<"FIN DU MONDE !!!!! LA FIN EST ICI !!!! A L'AIIIDDEEE"<<endl;
    }else{
        cout<<"NOTRE ZOMBIE ULTIME TOMBE... IL NE S'EN RELEVERA PAS... ADIEU <3"<<endl;
    }
}

void Fusion::operator+=(Bomber & b){
    b.~Bomber();
    cout<<"OH NON ! LA MAIUVAISE ABSORPTION ! IL EXPLOSE AVEC LE BOMBER "<<endl;
}
