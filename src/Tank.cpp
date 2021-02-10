#include "Tank.h"

Tank::Tank() : Zombie()
{
    nom ="Tank";
    attack = 10;
    pv = 100;
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

int Tank::getPv(){
    return pv;
}

void Tank::setPv(int p){

    cout<<"je suis dans tank"<<endl;
    if (pv<= 0){
        this->~Zombie();
        cerr<<"Valeur de vie non autorisee, le zombie s'est decompose"<<endl;
    }
    else
    {
            pv = p;
    }
}


void Tank::attackBasique(Zombie* cible){
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
        cout<<"Plus de shield, donc attaque normale en consequence !"<<endl;
        cible->setPv(cible->getPv()-getAttack());
    }
}

void Tank::showInfos(){
    cout << "Le nom du zombie : " << getNom() << endl;
    cout << "Les pv du zombie : " << getPv() << endl;
    cout << "La valeur d'attack du zombie: " << getAttack() << endl;
    cout << "Armure restante : " << getShield() << endl<<endl;
}
