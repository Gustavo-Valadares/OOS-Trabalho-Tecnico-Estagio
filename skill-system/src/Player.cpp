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

vector<Stats>& Player::getStats(){
    return this->stats;
}

vector<Ability>& Player::getAbilities(){
    return this->abilities;
}

Ability Player::getAbility(int index){
    return this->abilities[index];
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
    Ability ability = this->getAbility(index);

    if(ability.canActivate()){
        this->consumeMana(ability.getManaCost());   //diminui a mana do player

        
        // this->stats[index] += ability.getAbilityPoints();   // aumenta a quantidade de pontos correspondente pelo index


        ability.updateCoolDown(ability.getCoolDownValue());   //aplica cooldown na habilidade

        cout << ability.getName() << "used" << endl;
        cout << "wait for the cool down to use it again"<< endl;
        cout << "Current Cool Down: " << ability.getCurrentCoolDown() << endl;

    } 
}

void Player::consumeMana(int manaCost){
    if (this->mana < manaCost){
        cout << "You dont have enoguh mana\n";
        cout << "Current Mana: " << this->mana << endl;
        cout << "Ability Mana Cost: " << manaCost << endl;
    } else {
        this->mana -=  manaCost;
    }

}