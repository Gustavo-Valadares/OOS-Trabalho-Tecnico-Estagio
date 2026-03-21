#include "Heal.hpp"

Heal::Heal() {
    setName("Heal");
    setManaCost(10);
    setAbilityPoints(10);
    setCoolDownValue(5);
}

void Heal::applyEffect(Player& player) {
    player.increaseHp(20);
}