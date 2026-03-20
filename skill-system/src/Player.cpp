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

void Player::setName(string name){
    this->name = name;
}

void Player::setMana(int mana){
    this->mana = mana;
}


// int Player::getHp(){
//     return this->hp;
// }

// int Player::getPower(){
//     return this->power;
// }

// int Player::getShield(){
//     return this->shield;
// }

Stats& Player::getStat(int index){
    return this->stats[index];
}

vector<Stats>& Player::getStats(){
    return this->stats;
}

Ability& Player::getAbility(int index){
    return this->abilities[index];
}

vector<Ability>& Player::getAbilities(){
    return this->abilities;
}


// void Player::setHp(int hp){
//     this->hp = hp;
// }

// void Player::setPower(int power){
//     this->power = power;
// }

// void Player::setShield(int shield){
//     this->shield = shield;
// }

void Player::applyAbilityOnPlayer(int index){
    Ability& ability = this->getAbility(index);
    Stats& playerStat = this->getStat(index);

    if(ability.canActivate()){
        this->consumeMana(ability.getManaCost());   //diminui a mana do player

        playerStat.setValue(playerStat.getValue() + ability.getAbilityPoints());   // aplica o efeito da habilidade
 
        ability.applyCoolDown(this->getAbility(index));   //aplica cooldown na habilidade

        cout << ability.getName() << " used" << endl;
        cout << "Wait for the cool down to use it again"<< endl;
        cout << "Current Cool Down: " << ability.getCoolDown() << endl;

    } 
}

void Player::updateCooldowns() {
    for(auto& a : this->abilities) {
        if(a.getCoolDown() > 0) {
            a.setCoolDown(a.getCoolDown() - 1);
        }
    }
}

void Player::consumeMana(int manaCost){
    if (this->mana < manaCost){
        cout << "Not enough mana" << endl;
        cout << "Current Mana: " << this->mana << endl;
        cout << "Ability Mana Cost: " << manaCost << endl;
    } else {
        this->mana -=  manaCost;
    }

}