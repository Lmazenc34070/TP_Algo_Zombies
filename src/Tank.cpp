#include "Tank.h"

Tank::Tank() : Zombie(100, 50, "Tank")
{
    setShield(50);
}


int Tank::getShield()
{
    return shield;
}

void Tank::setShield(int s)
{
    shield = s;
}


void Tank::attackTank(Zombie* cible){
    if (getShield()>0){
        setShield(getShield() - cible->getAttack());
    }else{
        setPv(getPv() - cible->getAttack());
    }
}

void Tank::attackShield(Zombie* cible){
    if (getShield()>0){
        cible->setPv(cible->getPv()-getShield());
    }else{
        cible->setPv(cible->getPv()-getAttack());
    }
}

void Tank::showInfos(){
    cout << "Le nom du zombie : " << getNom() << endl;
    cout << "Les pv du zombie : " << getPv() << endl;
    cout << "La valeur d'attack du zombie: " << getAttack() << endl;
    cout << "Armure restante : " << getShield() << endl<<endl;
}
