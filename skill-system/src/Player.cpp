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


int Player::getHp(){
    return this->hp;
}

int Player::getStrenght(){
    return this->strenght;
}

int Player::getShield(){
    return this->shield;
}

Ability* Player::getAbility(int index){
    return this->abilities[index];
}

vector<Ability*>& Player::getAbilities(){
    return this->abilities;
}


void Player::setHp(int hp){
    this->hp = hp;
}

void Player::setStrenght(int strenght){
    this->strenght = strenght;
}

void Player::setShield(int shield){
    this->shield = shield;
}

void Player::applyAbilityOnPlayer(int index){
    Ability* ability = this->getAbility(index);

    ability->activate(*this);

}

void Player::updateCooldowns() {
    for(auto* a : this->abilities) {
        if(a->getCoolDown() > 0) {
            a->setCoolDown(a->getCoolDown() - 1);
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

void Player::regenerateMana(){
    this->setMana(this->getMana() + 20);
    cout << "You rest by a campfire nearby" << endl;
    cout << "A bit of mana was regenerated" << endl;
}

void Player::increaseHp(int value){
    this->hp += value;
}

void Player::increaseStrength(int value){
    this->strenght += value;
}

void Player::increaseShield(int value){
    this->shield += value;
}
