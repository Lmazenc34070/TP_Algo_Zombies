#include "Bomber.h"

Bomber::Bomber() : Zombie(100,20,"Bomber")
{

}




void Bomber::zombieBoom(Zombie* cible){
        cout<<"BOOM"<<endl;
        cible->setPv(cible->getPv() - (getAttack()*3));
        Zombie::~Bomber;
}


void Bomber::showInfos(){
    cout << "Le nom du zombie : " << getNom() << endl;
    cout << "Les pv du zombie : " << getPv() << endl;
    cout << "La valeur d'attack du zombie: " << getAttack() << endl<<endl;

}

