#ifndef ABILITY_HPP
#define ABILITY_HPP

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Ability {
    private:
        string name;
        int manaCost;
        int abilityPoints;
        int coolDownValue;
        int currentCoolDown;

    public:
        string getName();
        int getManaCost();
        int getAbilityPoints();
        int getCoolDownValue();
        int getCurrentCoolDown();

        void setName(string abilityName);
        void setAbilityPoints(int abilityPoints);
        void setCoolDownValue(int coolDownValue);
        void setCurrentCoolDown(int currentCoolDown);
        void setManaCost(int manaCost);

        void applyAbility(int index);
        
        bool canActivate();
        // void activate(Player player);
        void updateCoolDown(int coolDownValue);
};

#endif