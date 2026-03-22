#include "Shield.hpp"

Shield::Shield() : Ability("Shield", 5, 5, 7){}

void Shield::applyEffect(Player& player) {
    player.increaseShield(getAbilityPoints());
}