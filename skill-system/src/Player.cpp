#include <iostream>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"

using namespace std;

int Player::getMana(){
    return this->mana;
}

int Player::getHp(){
    return this->hp;
}

int Player::getProtection(){
    return this->protection;
}

void Player::useAbility(Ability ability){
    
}

void Player::consumeMana(int manaCost){
    if (this->mana < manaCost){
        cout << "Sem mana suficiente\n";
    } else {
        this->mana -=  manaCost;
    }

}