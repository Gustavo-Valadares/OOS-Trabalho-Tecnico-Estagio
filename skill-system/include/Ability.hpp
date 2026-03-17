#ifndef ABILITY_HPP
#define ABILITY_HPP

#pragma once

#include <iostream>
#include <string>
#include "Player.hpp"
#include "Ability.hpp"

using namespace std;

class Ability {
    private:
        string name;
        int manaCost;
        int abilityPoints;
        int coolDownValue;
        int currentCoolDown;

    public:
        int getManaCost();
        int getAbilityPoints();
        int getCoolDownValue();
        int getCurrentCoolDown();
        string setName();
        void setManaCost();
        void setCurrentCoolDown();
        void setAbilityPoints();
        void setCoolDownValue();
        
        bool canActivate();
        // void activate(Player player);
        void updateCoolDown(int coolDownValue);
};

#endif