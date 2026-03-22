#include <iostream>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"

using namespace std;

Ability::Ability(string name, int manaCost, int abilityPoints, int cooldown)
    : name(name),
      manaCost(manaCost),
      abilityPoints(abilityPoints),
      coolDownValue(cooldown),
      currentCoolDown(0) {}

string Ability::getName(){ return this->name; }

int Ability::getManaCost(){ return this->manaCost; }

int Ability::getAbilityPoints(){ return this->abilityPoints; }

int Ability::getCoolDownValue(){ return this->coolDownValue; }

int Ability::getCoolDown(){ return this->currentCoolDown; }


void Ability::setName(string abilityName){ this->name = abilityName; }

void Ability::setManaCost(int manaCost){ this->manaCost = manaCost; }

void Ability::setAbilityPoints(int abilityPoints){ this->abilityPoints = abilityPoints; }

void Ability::setCoolDown(int coolDownValue){ this->currentCoolDown = coolDownValue; }

void Ability::setCoolDownValue(int coolDownValue){ this->coolDownValue = coolDownValue; }


bool Ability::canActivate(Player& player){
    if(this->currentCoolDown > 0){
        cout << this->getName() << " on cooldown " << "(" << this->currentCoolDown << ")" << endl;
        return false;
    }

    if(player.getMana() < manaCost){
        cout << "Not enought mana, try resting a little" << endl;
        return false;
    }

    return true;
}

void Ability::activate(Player& player){
    if (canActivate(player)){
        player.consumeMana(manaCost); // diminui mana do player
        applyEffect(player); // polimorfismo 
        currentCoolDown = coolDownValue;

        cout << this->getName() << " used" << endl;
    }
}