#pragma once

#include "Ability.hpp"
#include "Player.hpp"

class Strength : public Ability {
public:
    Strength();
    void applyEffect(Player& player) override;
};