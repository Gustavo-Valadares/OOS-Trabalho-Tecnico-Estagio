#include "Strength.hpp"

Strength::Strength() : Ability ("Strength", 20, 2, 10){}

void Strength::applyEffect(Player& player) {
    player.increaseStrength(getAbilityPoints());
}