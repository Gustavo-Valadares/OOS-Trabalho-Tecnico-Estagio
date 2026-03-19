#include <iostream>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"

using namespace std;

string Ability::getName(){
    return this->name;
}

int Ability::getManaCost(){
    return this->manaCost;
}

int Ability::getAbilityPoints(){
    return this->abilityPoints;
}

int Ability::getCoolDownValue(){
    return this->coolDownValue;
}

int Ability::getCurrentCoolDown(){
    return this->currentCoolDown;
}

void Ability::setName(string abilityName){
    this->name = abilityName;
}

void Ability::setAbilityPoints(int abilityPoints){
    this->abilityPoints = abilityPoints;
}

void Ability::setCurrentCoolDown(int coolDownValue){
    this->coolDownValue = coolDownValue;
}

void Ability::setCoolDownValue(int coolDownValue){
    this->coolDownValue = coolDownValue;
}

void Ability::setManaCost(int manaCost){
    this->manaCost = manaCost;
}

bool Ability::canActivate(){
    if(this->currentCoolDown > 0){
        cout << "Aguarde o cooldown para usar essa habilidade";
        return false;
    }
    return true;
}

// void Ability::activate(Player player){
//     if (canActivate){
        
//     }
// }   

void Ability::updateCoolDown(int coolDownValue){
    this->currentCoolDown += coolDownValue;
    // acrescentar decremento do coolDown
}