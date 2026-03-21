#include "Shield.hpp"

Shield::Shield() {
    setName("Shield");
    setManaCost(5);
    setAbilityPoints(10);
    setCoolDownValue(7);
}

void Shield::applyEffect(Player& player) {
    player.increaseShield(getAbilityPoints());
}