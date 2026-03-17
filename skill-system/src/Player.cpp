#include <iostream>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"

using namespace std;

void Player::useAbility(Ability ability){
    
}

void Player::consumeMana(int manaCost){
    if (this->mana < manaCost){
        cout << "Sem mana suficiente\n";
    } else {
        this->mana -=  manaCost;
    }

}