#pragma once

#include "Ability.hpp"
#include "Player.hpp"

class Heal : public Ability {

public:
    Heal();
    void applyEffect(Player& player) override;
};