#include "Heal.hpp"

Heal::Heal() : Ability("Heal", 10, 10, 5) {}

void Heal::applyEffect(Player& player) {
    player.increaseHp(getAbilityPoints());
}