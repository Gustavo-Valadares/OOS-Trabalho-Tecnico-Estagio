#pragma once

#include "Ability.hpp"
#include "Player.hpp"

class Shield : public Ability {
public:
    Shield();
    void applyEffect(Player& player) override;
};