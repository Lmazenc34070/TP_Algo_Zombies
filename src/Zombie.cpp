#include "Zombie.h"

Zombie::Zombie()
{
    setPv (100);
	setAttack (10);
	setNom ("Paul");
}

Zombie::Zombie(int p, int a, string n){
    pv = p;
    attack = a;
    nom = n;
}



Zombie::~Zombie()
{
    cout<<"le zombie "<<getNom()<<" est decede"<<endl<<endl;
}


//GETTER/SETTER

int Zombie::getPv(){
    return pv;
}

//J'indique la limite seulement pour Paul qui est le zombie de base, vu qu'il y'aura des zombies supérieur
void Zombie::setPv(int p){
    if (getNom()=="Paul")
    {
      if (p>100 || pv<= 0){
            this->~Zombie();
            cerr<<"Valeur de vie non autorisee, le zombie s'est decompose"<<endl;
        }else{
            pv = p;
        }
    }
    else{
        pv = p;
    }
}

int Zombie::getAttack(){
    return attack;
}

//J'indique la limite seulement pour Paul qui est le zombie de base, vu qu'il y'aura des zombies supérieurs
void Zombie::setAttack(int a){
    if (getNom()=="Paul")
    {
        if (a>10 || a<=0){
            attack = 0;
            cerr<<"Valeur d'attaque non autorisee, le zombie se decompose"<<endl;
        }else{
            attack = a;
        }
    }
    else{
        attack = a;
    }
}

string Zombie::getNom(){
    return nom;
}

void Zombie::setNom(string n){
    nom = n;
}

//Méthode pour qu'un zombie puisse en attaquer un autre
void Zombie::attackBasique(Zombie* cible)
{
    if (getShield()>0)
    {
        cible->setPv(cible->getShield() - getAttack());
    }else{
        cible->setPv(cible->getPv() - getAttack());
    }

}

int Zombie::getShield()
{
    return shield;
}

void Zombie::setShield(int s)
{
    shield = s;
}


void Zombie::showInfos(){

    cout << "Le nom du zombie : " << getNom() << endl;
    cout << "Les pv du zombie : " << getPv() << endl;
    cout << "La valeur d'attack du zombie: " << getAttack() << endl<<endl;
}




