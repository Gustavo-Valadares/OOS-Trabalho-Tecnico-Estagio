#include "Strength.hpp"

Strength::Strength() {
    setName("Strength");
    setManaCost(20);
    setAbilityPoints(5);
    setCoolDownValue(10);
}

void Strength::applyEffect(Player& player) {
    player.increaseStrength(getAbilityPoints());
}