#include <iostream>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"

using namespace std;

string Player::getName(){
    return this->name;
}

int Player::getMana(){
    return this->mana;
}

vector<Ability> Player::getAbilities(){
    return this->abilities;
}

Ability Player::getAbility(int index){
    return this->abilities[index];
}

void Player::useAbility(Ability ability, int index){

    if(ability.canActivate()){
        this->mana -= ability.getManaCost();    //diminui a mana do player
        this->stats[index] += ability.getAbilityPoints();   // aumenta a quantidade de pontos correspondente pelo index
        ability.updateCoolDown(ability.getCoolDownValue());   //aplica cooldown na habilidade
    }
}

void Player::consumeMana(int manaCost){
    if (this->mana < manaCost){
        cout << "Sem mana suficiente\n";
    } else {
        this->mana -=  manaCost;
    }

}