#include "Heal.hpp"

Heal::Heal() : Ability("Heal", 10, 20, 5) {}

void Heal::applyEffect(Player& player) {
    player.increaseHp(20);
}