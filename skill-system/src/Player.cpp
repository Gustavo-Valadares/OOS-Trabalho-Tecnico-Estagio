#include <iostream>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"
#include "../include/Heal.hpp"
#include "../include/Strength.hpp"
#include "../include/Shield.hpp"

using namespace std;

Player::Player(string name)
    : name(name),
      mana(100),
      hp(100),
      strength(0),
      shield(0) {}

Player::~Player(){
    for(auto* a : abilities){
        delete a;
    }
}

string Player::getName(){ return this->name; }

int Player::getMana(){ return this->mana; }

int Player::getHp(){ return this->hp; }

int Player::getStrength(){ return this->strength; }

int Player::getShield(){ return this->shield; }

Ability* Player::getAbility(int index){ return this->abilities[index]; }

vector<Ability*>& Player::getAbilities(){ return this->abilities; }


void Player::setName(string name){ this->name = name; }

void Player::setMana(int mana){ this->mana = mana; }

void Player::setHp(int hp){ this->hp = hp; }

void Player::setStrength(int strength){ this->strength = strength; }

void Player::setShield(int shield){ this->shield = shield; }


void Player::adventure(){
    int difficulty = rand() % 20 + 5;

    cout << "An enemy approach!" << endl;
    cout << "Enemy difficulty: " << difficulty << endl << endl;

    if(rand() % 100 < 20){
        cout << "You hit him with a critical!" << endl;
        cout << "You feel really stronger." << endl << endl;
        this->increaseStrength(6);

        return ;
    }

    if(this->getStrength() >= difficulty){
        cout << "The enemy wasnt a match for your power!" << endl;
        this->increaseStrength(4);
        cout << "You feel stronger." << endl;

    } else {
        cout << "He was too strong for you" << endl;
        
        int enemyHit = 2*difficulty;

        if(enemyHit > this->getShield()){
            enemyHit -= this->getShield();
            this->setShield(0);
        }

        if(enemyHit > 0){
            this->setHp(this->getHp() - enemyHit);
        }

    }

    return ;
}

void Player::applyAbilityOnPlayer(int index){
    Ability* ability = this->getAbility(index);

    ability->activate(*this);

}

void Player::updateCoolDowns() {
    for(auto* a : this->abilities) {
        if(a->getCoolDown() > 0) {
            a->setCoolDown(a->getCoolDown() - 1);
        }
    }
}

void Player::consumeMana(int manaCost){
        this->mana -=  manaCost;
}

void Player::regenerateMana(){
    this->setMana(this->getMana() + 20);
    cout << "You rest by a campfire nearby, A bit of mana was regenerated" << endl;
}

void Player::increaseHp(int value){
    if((getHp() + value) > 100){
       this->hp = 100; 
    } else {
        this->hp += value;
    }
}

void Player::increaseStrength(int value){
    this->strength += value;
}

void Player::increaseShield(int value){
    this->shield += value;
}

void Player::initializeAbilities(){
    abilities.push_back(new Heal());
    abilities.push_back(new Strength());
    abilities.push_back(new Shield());
}

bool Player::isDead(){
    if(this->getHp() > 0){
        return false;
    } 

    return true;
}
