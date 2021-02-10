#include "Rapace.h"

Rapace::Rapace() : Zombie()
{
    nom = "Rapace";
    attack /=2;
    pv /=2;
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
