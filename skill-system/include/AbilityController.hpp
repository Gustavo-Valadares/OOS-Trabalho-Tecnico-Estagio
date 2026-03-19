#ifndef ABILITY_CONTROLLER_HPP
#define ABILITY_CONTROLLER_HPP

#pragma once

#include <iostream>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"


using namespace std;

class AbilityController {
    public:
        void addAbilitiesStats(Player& player, AbilityController& abilityController);
        void updateCooldowns();
};

#endif