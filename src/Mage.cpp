#include "Mage.h"


Mage::Mage(): Zombie (50,5,"Mage")
{
    setCompteur(1);
}

int Mage::getCompteur(){
    return compteur;
}

void Mage::setCompteur(int c){
    compteur = c;
}

void Mage::skillsMage(Zombie* cible){
    if (getCompteur()==1)
    {
        cible->setShield(cible->getShield()*0);
        cible->setAttack(cible->getAttack()/2);
        setCompteur(getCompteur()-1);
    }
    else
    {
        cout<<"L'attaque ne peut se lancer qu'une fois ! Lancement d'une attaque normale"<<endl;
        cible->setPv(cible->getPv() - getAttack());
    }
}
