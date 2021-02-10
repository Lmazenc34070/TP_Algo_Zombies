#include "Rapace.h"

Rapace::Rapace() : Zombie(50, 5, "Rapace")
{
}



void Rapace::showInfos(){

    cout << "Le nom du zombie : " << getNom() << endl;
    cout << "Les pv du zombie : " << getPv() << endl;
    cout << "La valeur d'attack du zombie: " << getAttack() << endl<<endl;
}

void Rapace::attackAndHeal(Zombie* cible){
    cible->setPv(cible->getPv() - getAttack());
    setPv(getPv()+getAttack());
}
